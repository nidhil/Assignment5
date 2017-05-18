/**********************************************************************
 * main.cpp - CSCI251/851 - Ass45- main() driver for prison system
 * <Your name> <your login> <date last modified>
 **********************************************************************/
#include <iostream>
#include "prison.h"
using namespace std;
 
char Menu();

int main(){
	Prison P;
	cout << "Criminal Processing System V1.0\n\n";
	for(;;){
		switch(Menu()){
			case '1': P.ReadCrimFile(); break;
			case '2': P.DisplayPrisioners(); break;
			case 'q': cout << "Thanks for using Text File Word Counter\n";
					  return(0);
			default: cout << "Invalid command!\n";
		}
	}
	return 0;
}

char Menu(){
	char Cmd[20];
	cout << endl;
	cout << "(1) Read criminal file\n";
	cout << "(2) Display prisioners\n";
	cout << "(q) Quit\n";
	cout << "Command > ";
	cin.getline(Cmd,20);
	cout<<endl;
	return Cmd[0];
}

