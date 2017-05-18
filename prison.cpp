/**********************************************************************
 * prison.c - CSCI251/851 - Ass5- Prison class definitions
 * <Your name> <your login> <date last modified>
 **********************************************************************/
#include <iostream>
#include <fstream>
#include "prison.h"
using namespace std;


// ========== class Prison Function definitions ==========

// Destructor: Iterates Crims set and deletes each ptr to Criminal 
Prison::~Prison(){

}

// Reads data in "crims.txt" into Crims set
void Prison::ReadCrimFile(){

	// open "crims.txt"
	// if no found display "File not found." 
	// else
		// while not eof 
			// read info 
			// put info in new record 
			// insert new r4eord inti Crims set
		// close file
		// display number of crims read into crims set
}

// Iterates Crims set and displays criminal records on screen 10 at a time
void Prison::DisplayPrisioners(){

}

