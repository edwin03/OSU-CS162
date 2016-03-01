/********************************************************************************************
** Program: golLibrary.h
** Author: Edwin Rubio
** Date: 1/16/16
** Description: golLibrary.h is the specification file header for the golLibrary.cpp.
*********************************************************************************************/

#ifndef GOLLIBRARY_H
#define GOLLIBRARY_H

#define ROWS 20 // 20 rows for the world
#define COLS 40 // 40 coulmns for the world
#define EXROWS 40 // 40 rows for the world
#define EXCOLS 80 // 80 coulmns for the world

void printArray (char pArray [][EXCOLS]);
void clearArray (char cArray [][EXCOLS]);
void oscillator (char osArray [][EXCOLS], int x, int y);
void glider (char gArray [][EXCOLS], int x, int y);
void gliderGun (char gArray [][EXCOLS], int x, int y);
void golFormula (char golArray [][EXCOLS], int generations);

#endif