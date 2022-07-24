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

//Create a new member function that when called, updates these figures for the Bus object.

int main()
{
	//declarations
	  Bus bananaBusRecords[ARRAYSIZE] ;
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


			  bananaBusRecords[inputPos].setBusID(busIDOF) ;
			  bananaBusRecords[inputPos].setManufacturer(manufacturerOF) ;
			  bananaBusRecords[inputPos].setCapacity(capacityOF) ;
			  bananaBusRecords[inputPos].setMileage(mileageOF) ;
			  bananaBusRecords[inputPos].setStatus(statusOF) ;

			  inputPos++ ;
		  }
	  inFile.close();

	//display input
	  cout << "The following have been read in to the console from the external file :\n\n" ;
	  displayCH();

	  while(bananaBusRecords[printPos].getBusID() != " ")
		  {
		  	  bananaBusRecords[printPos].displayInfo() ;
		  	  cout << endl ;
		  	  printPos++ ;
		  	  if (bananaBusRecords[printPos].getBusID() == " ")
				  {
					cout<< right << setw(41) << "-----end of list-----" << left;
				  }
		  }
	  printPos = 0 ;

	//transaction loop

	  //If the transaction code is ‘m’, it means that a maintenance record for a bus is to be added...
	  //see paragraph 1 on page two. make error statement bannana error.
	  //If the transaction code is ‘l’ (lower-case L), prompt the user for a bus ID. Display the bus along with its
	  //maintenance history.
	  //If the transaction code is ‘c’, the user is asking you to compare two busses and display which bus has more
	  //maintenance items.
	  //If the transaction code is ‘a’, display the bus count and average number of miles using the static membervariables.

	  cout << "\nEnter a transaction code (D=display, L=list a bus, C=change, X=exit)\n" ;
	  getline(cin, transactionCode) ;

	  while ((transactionCode != "X") and (transactionCode != "x"))
		  {
		  	  if ((transactionCode == "D") or transactionCode == "d")
		  	  	  {
		  		  	displayCH();
					while(bananaBusRecords[printPos].getBusID() != " ")
							  {
								  bananaBusRecords[printPos].displayInfo() ;
								  cout << endl ;
								  printPos++ ;
								  if (bananaBusRecords[printPos].getBusID() == " ")
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
		  		  	  while (bananaBusRecords[printPos].getBusID() != " ")
						  {
							  if (transactionCode.substr(2,5) == bananaBusRecords[printPos].getBusID())
								  {
								  	  displayCH();
									  bananaBusRecords[printPos].displayInfo() ;
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
					  while (bananaBusRecords[printPos].getBusID() != " ")
						  {
							  if (transactionCode.substr(2,5) == bananaBusRecords[printPos].getBusID())
								  {
									  bananaBusRecords[printPos].setStatus(transactionCode[8]) ;
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

	return 0;
}
