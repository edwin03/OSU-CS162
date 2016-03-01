CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

#OBJS = 

#SRCS = 

#HEADERS = 

#target: dependencies
#	rule to build
#

default: main.cpp item.cpp list.cpp
	${CXX} main.cpp item.hpp item.cpp list.hpp list.cpp -o assignment2
clean:
	rm -rf *.o assignment2
