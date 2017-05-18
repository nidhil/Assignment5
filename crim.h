/**********************************************************************
 * crim.h - CSCI251/851 - Ass5- Criminal class declaration
 * <Your name> <your login> <date last modified>
 **********************************************************************/
#ifndef CRIM_H
#define CRIM_H

#include <string>
using namespace std;

// base class...

class Criminal {
  public:
	Criminal();
	Criminal(char *FName,char *LName,char *Crm,int Mths,int Cell);
	bool operator<(const Criminal &C);
	void Print();
  private:
	string FamilyName,FirstName; // Prisoner's name
	string Crime; // Crime Committed 
	int Months;// Number of months remaining in sentence
	int CellNo; // The cell the inmate occupies, initially set to -1
};

//derived classes...



#endif

