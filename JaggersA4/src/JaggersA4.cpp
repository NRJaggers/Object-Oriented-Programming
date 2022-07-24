//============================================================================
// Name        : JaggersA4.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include "welcome.h"
#include "goodbye.h"
#include "Bus.h"
#include "displayCH.h"
using namespace std;

//Global Constants
const int ARRAYSIZE = 50 ;

int main()
{
	//declarations
	  Bus * busRecords[ARRAYSIZE] = {nullptr} ;
	  string line, busIDOF, manufacturerOF, transactionCode;
	  int inputPos = 0, capacityOF, mileageOF, printPos = 0 ;
	  char statusOF;
	  bool found;

	//welcome
	  welcome() ;

	//open file and get input
	  ifstream inFile ;
	  inFile.open("C:\\COMSCI200\\a4data.txt") ;
	  	  if (!inFile.is_open())
	  	  {
	  		  cout << "There was an error opening the file.\nPlease check that"
	  			   << "the file path is correct and \nthat the file is not locked, then try again." ;
	  	  }

	  while(getline(inFile,line))
		  {
			  busIDOF 		 = line.substr(0,5);
			  //cout << busIDOF << endl;
			  manufacturerOF = line.substr(5,10);
			  //cout << manufacturerOF << endl ;
			  capacityOF	 = stoi(line.substr(15,3));
			  //cout << capacityOF << endl ;
			  mileageOF		 = stoi(line.substr(18,7));
			  //cout << mileageOF << endl ;
			  statusOF		 = line[25];
			  //cout << statusOF << endl ;


			  busRecords[inputPos] = new Bus(busIDOF,manufacturerOF,capacityOF,mileageOF,statusOF)  ;
			  inputPos++ ;
		  }
	  inFile.close();

	//display input
	  cout << "The following have been read in to the console from the external file :\n\n" ;
	  displayCH();

	  while(busRecords[printPos] != nullptr)
		  {
		  	  busRecords[printPos]->displayInfo() ;
		  	  cout << endl ;
		  	  printPos++ ;
		  	  if (busRecords[printPos] == nullptr)
				  {
					cout<< right << setw(41) << "-----end of list-----" << left;
				  }
		  }
	  printPos = 0 ;

	//transaction loop
	  cout << "\nEnter a transaction code (D=display, L=list a bus, C=change, X=exit)\n" ;
	  getline(cin, transactionCode) ;

	  while ((transactionCode != "X") and (transactionCode != "x"))
		  {
		  	  if ((transactionCode == "D") or transactionCode == "d")
		  	  	  {
		  		  	displayCH();
					while(busRecords[printPos] != nullptr)
							  {
								  busRecords[printPos]->displayInfo() ;
								  cout << endl ;
								  printPos++ ;
								  if (busRecords[printPos] == nullptr)
									  {
										cout<< right << setw(41) << "-----end of list-----" << left;
									  }
							  }
					cout << endl ;
					printPos = 0 ;
		  	  	  }
		  	  else if ((transactionCode.substr(0,1) == "L") or (transactionCode.substr(0,1) == "l"))
		  	  	  {
		  		  	  found = false ;
		  		  	  while (busRecords[printPos] != nullptr)
						  {
							  if (transactionCode.substr(2,5) == busRecords[printPos]->getBusID())
								  {
								  	  displayCH();
									  busRecords[printPos]->displayInfo() ;
									  cout << endl << endl ;
									  found = true ;
								  }
							  printPos++;
						  }

					  if (found == false)
						  {
							  cout << "Bus ID not found, please try again.\n\n";
						  }
					  printPos = 0 ;
		  	  	  }
		  	  else if ((transactionCode.substr(0,1) == "C") or (transactionCode.substr(0,1) == "c"))
		  	  	  {
		  		  	  found = false ;
					  while (busRecords[printPos] != nullptr)
						  {
							  if (transactionCode.substr(2,5) == busRecords[printPos]->getBusID())
								  {
									  busRecords[printPos]->setBusStatus(transactionCode[8]) ;
									  cout << "Success!\n\n";
									  found = true ;
								  }
							  printPos++;
						  }

					  if (found == false)
					  	  {
						  	  cout << "Bus ID not found, please try again.\n\n";
					  	  }
					  printPos = 0 ;
		  	  	  }
		  	  else
		  	  	  {
		  		  	  cout << "That is not a vaild code, please try again\n\n" ;
		  	  	  }

		  cout << "Enter a transaction code (D=display, L=list a bus, C=change, X=exit)\n" ;
		  getline(cin, transactionCode) ;
		  }

	//goodbye
	  goodbye() ;

	//clean up
	  printPos = 0 ;
	  while (busRecords[printPos] != nullptr)
		  {
			  delete busRecords[printPos] ;
		  	  printPos++ ;
		  }

	return 0;
}
