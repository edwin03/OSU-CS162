/********************************************************************************************
** Program: lab5.hpp
** Author: Edwin Rubio
** Date: 2/7/16
** Description: This is the "Predator-Prey Simulation" program. 
*********************************************************************************************/
#include <iostream> 
#include <cstdlib> 
#include <ctime> // needed to seed rand()
#include <unistd.h> // needed for the sleep function

using namespace std; 

int a[20][20],p=0,q=0; 
void step(int g,int h,int i,int &u,int &v);

class critter 
{ 
	public : 
		int x;
		int y; 
		int life; 
		virtual void move ()
		{
		}
		virtual char symbol () // this is the key to determine what type of object it is '.' = regular sapce in the grid
		{
			return '.';
		}

}; 

class ant : public critter 
{ 
	public: 
	ant(){}
	ant(int e,int f) // needed to initialize
	{
		x=e; 
		y=f; 
		life=0; 
		a[e][f]=2; 
		p++; 
	}
	void birth(int e,int f)
	{ 
		x=e; 
		y=f; 
		life=0; 
		a[e][f]=2; 
		p++; 
	} 
	void move(); 
	void breed(); 
	void death() 
	{ 
		a[x][y]=0; 
	} 
	virtual char symbol ()
		{
			return 'O';
		}
}ants[400];

void ant::move() 
{ 
	int k=0,t1,t2,i; 
	life++; 
	for(i=0;i<4;i++) 
	{ 
		step(x,y,i,t1,t2); 
		if(a[t1][t2]==0) 
		k++; 
	} 
	if(k>0) 
	{ 
		if(k!=1) 
			k=(rand()%k+1); 
		for(i=0;i<4,k>0;i++) 
		{ 
			step(x,y,i,t1,t2); 
			if(a[t1][t2]==0) 
				k--; 
		} 
		a[x][y]=0; 
		a[t1][t2]=2; 
		x=t1; 
		y=t2; 
		if(life>=3) 
		{ 
			this->breed(); 
			life=0; 
		} 
	} 
}

void ant::breed() 
{ 
	int i,k=0,t1,t2; 
	for(i=0;i<4;i++) 
	{ 
		step(x,y,i,t1,t2); 
		if(a[t1][t2]==0) 
			k++; 
	} 
	if(k!=1) 
		k=(rand()%k+1); 
	for(i=0;i<4,k>0;i++) 
	{ 
		step(x,y,i,t1,t2); 
		if(a[t1][t2]==0) 
			k--; 
	} 
	ants[p].birth(t1,t2); 
}

class doodlebug : public critter 
{ 
	public: 
		doodlebug(){}
		doodlebug(int e, int f)
		{
			x=e; // x axis
			y=f; // y axis
			life=3; 
			steps=0; 
			a[e][f]=1; 
			q++; 
		}
		int steps; 
		void birth(int e,int f) 
		{ 
			x=e; // x axis
			y=f; // y axis
			life=3; 
			steps=0; 
			a[e][f]=1; 
			q++; 
		} 
		void move(); 
		void breed(); 
		void death() 
		{ 
			a[x][y]=0; 
		} 
		virtual char symbol ()
		{
			return 'X';
		}
}doodlebugs[400];

void shiftb(); 
void shiftd(); 
void doodlebug::move() 
{ 
	int k=0,t1,t2; 
	steps ++; 
	for(int i=0;i<4;i++) 
	{ 
		step(x,y,i,t1,t2); // x = x axis; y = y axis; i = loops get from public parameters
		if(a[t1][t2]== 2) 
			k++; 
	} 
	if(k==0) 
		life--; 
	else 
	{ 
		if(k!=1) 
			k=(rand()%k+1); 
		for(int i=0;i<4,k>0;i++) 
		{ 
			step(x,y,i,t1,t2); 
			if(a[t1][t2]==2) 
				k--; 
		} 
		life=3; 
		for(int j=0;j<p;j++) 
		{ 
			if((ants[j].x==t1)&&(ants[j].y==t2)) 
			{ 
				ants[j].death(); 
				shiftb(); 
			} 
		} 
		a[this->x][this->y]=0; 
		a[t1][t2]=1; 
		this->x=t1; 
		this->y=t2; 
	} 
	if(steps>=8) 
		this->breed(); 
		if(life<=0) 
			this->death(); 
} 

void step(int g,int h,int i,int &u,int &v) 
{ 
	u=g; 
	v=h; 
	if(i==0) // 1st interation subtract 1 to the x axis checks up
		u--; 
	if(i==1) // 2nd iteration add a to the y axis
		v++; 
	if(i==2) // 3rd interation add 1 to the x axis
		u++; 
	if(i==3) // 4th iteration subract 1 from the y axis
		v--; 
	if(u<0||v<0||u>19||v>19) // border checking
	{ 
		u=g; 
		v=h; 
	} 
}

void doodlebug::breed() 
{ 
	int i,k=0,t1,t2; 
	for(i=0;i<4;i++) 
	{ 
		step(x,y,i,t1,t2); 
		if(a[t1][t2]==0) 
			k++; 
	} 
	if(k>0) 
	{ 
		if(k!=1) 
			k=(rand()%k+1); 
		for(i=0;i<4,k>0;i++) 
		{ 
			step(x,y,i,t1,t2); 
			if(a[t1][t2]==0) 
				k--; 
		} 
		doodlebugs[q].birth(t1,t2); 
	} 
}

void display(critter *pArray[][20]) 
{  
	system("clear"); 
	/*for (int x = 0; x < 20; x++)
	{
		for (int y = 0; y < 20; y++)
			std::cout << pArray[x][y]->symbol() << " ";

		std::cout << std::endl; // go to next line after 40 coulmns
	}*/
	int i,j; 
	char c; 
	system("clear"); 
	for(i=0;i<20;i++) 
	{ 
		for(j=0;j<20;j++) 
		{ 
			if(a[i][j]==0) 
				c='-'; 
			if(a[i][j]==1) 
				c='x'; 
			if(a[i][j]==2) 
				c='o'; 
			cout<<c<<" "; 
		} 
		cout<<"\n"; 
	}
}



void shiftb() 
{ 
	int j,k; 
	if(p!=1) 
		for( j=0;j<p;) 
		{ 
			if(a[ants[j].x][ants[j].y]==0) 
			{ 
				p--; 
				for(int k=j;k<p;k++) 
					ants[k]=ants[k+1]; 
			} 
			else 
			j++; 
		} 
		if(p==1) 
			if(a[ants[0].x][ants[0].y]==0) 
				p--; 
}

void shiftd() 
{ 
	int j,k; 
	if(q!=1) 
		for( j=0;j<q;) 
			{ 
				if(a[doodlebugs[j].x][doodlebugs[j].y]==0) 
				{ 
					q--; 
					for(int k=j;k<q;k++) 
						doodlebugs[k]=doodlebugs[k+1]; 
				} 
				else 
				j++; 
			} 
	if(q==1) 
		if(a[doodlebugs[0].x][doodlebugs[0].y]==0) 
			q--; 
} 


int main() 
{ 
	system("clear"); 
	int tempX;
	int tempY;
	int userDoodlebugs;
	int userAnts;
	int generations; 
	char ch='y'; 
	
	cout << "Welcome to Lab 5: Predator-Prey Simulation" << endl;
	cout << "Enter the number of doodlebugs:" << endl;
	cin >> userDoodlebugs;
	while(cin.fail()) // Makes sure that there is a valid input is an integer data type
	{
		cout << "Error, try again:" << std::endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin >> userDoodlebugs;
	}
	
	std::cout << "Enter the number of ants:" << std::endl;
	std::cin >> userAnts;
	while(cin.fail()) // Makes sure that there is a valid input is an integer data type
	{
		cout << "Error, try again:" << std::endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin >> userAnts;
	}

	std::cout << "Enter the number of generations:" << std::endl;
	std::cin >> generations;
	while(cin.fail()) // Makes sure that there is a valid input is an integer data type
	{
		cout << "Error, try again:" << std::endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin >> generations;
	}
	
	// initalize critter array pointers
	critter *critterArray[20][20]; 
	for (int x = 0; x < 20; x++)
		for (int y = 0; y < 20; y++)
		{	
			critterArray[x][y] = new critter();
		}
		
	// initalize array
	for(int i=0;i<20;i++) 
		for(int j=0;j<20;j++) 
			a[i][j]=0;
		
	srand(time(0));
	// filling in the doodlebugs to grid randomly
	for(int i=0;i<userDoodlebugs;i++) 
	{ 
		do {
		tempX=rand()%20; 
		tempY=rand()%20; 
		}while(critterArray[tempX][tempY]->symbol()!= '.'); // check to make sure that there is no other doodlebug in that location
		
		critterArray[tempX][tempY] = new doodlebug(tempX, tempY); // add doodlebug to array at (tempX, tempY)
	} 
	for(int i=0; i < userAnts; i++) 
	{ 
		do { 
		tempX=rand()%20; 
		tempY=rand()%20; 
		}while(critterArray[tempX][tempY]->symbol() != '.'); 
		
		critterArray[tempX][tempY] = new ant(tempX, tempY);
	} 

	display (critterArray); 
	cout<<"Press Enter to continue";
	int c = 0;
	do  
	{ 
		
		for (int x = 0; x < 20; x++)
			for (int y = 0; y < 20; y++)
				if (critterArray [x][y]->symbol() == 'X') 
					critterArray[x][y]->move(); 
					shiftd(); 
					
		for (int x = 0; x < 20; x++)
			for (int y = 0; y < 20; y++)
				if (critterArray [x][y]->symbol() == 'O')  
					critterArray[x][y]->move(); 
		
		 
		display(critterArray);
		cout<<"Frame # " << c << endl;
		cout<<"Press Enter to continue"; 
		ch=cin.get(); 
		c++;	
		if (c == generations)
		{
			std::cout << "Enter the number of generations: or any other key to Exit." << std::endl;
			std::cin >> generations;
			c= 0;
		}	
	} while(c < generations+1);
return 0;
} 
