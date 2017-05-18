/**********************************************************************
 * prison.h - CSCI251/851 - Ass5- Prison class declaration
 * <Your name> <your login> <date last modified>
 **********************************************************************/
#ifndef PRISON_H
#define PRISON_H

#include <iostream>
#include <cstring>
#include <set>
#include "crim.h"
using namespace std;


struct Comp
{
    bool operator()(Criminal* x, Criminal* y){return(*x < *y);}; // compare what pointers are pointing at
};

class Prison {
  public:
    ~Prison();
	void ReadCrimFile();
	void DisplayPrisioners(); // prints inmates in order of their names
  private:
	set<Criminal*,Comp> Crims; // set of pointers to class Criminal
};


#endif


