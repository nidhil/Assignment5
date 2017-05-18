/**********************************************************************
 * crim.cpp - CSCI251/851 - Ass5- Criminal class definition
 * <Your name> <your login> <date last modified>
 **********************************************************************/
#include <iostream>
#include <iomanip>
#include "crim.h"
using namespace std;

// ========== Base class Criminal Function definitions ==========

// Default constructor: inits Months to zero and CellNo to -1
Criminal::Criminal(){

}

// Standard constructor
Criminal::Criminal(char *FName,char *LName,char *Crm,int Mths,int Cell){

}

// Operator< returns true if *this name is less than Other name
bool Criminal::operator<(const Criminal &Other){

	return true;
}

// Prints criminal details on screen
void Criminal::Print(){

}

