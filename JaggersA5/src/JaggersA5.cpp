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
	  string line, busIDOF, manufacturerOF, transactionCode, search, search2;
	  int inputPos = 0, capacityOF, mileageOF, printPos = 0, printPos2 = 0 ;
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

	  //If the transaction code is ‘c’, the user is asking you to compare two busses and display which bus has more
	  //maintenance items.

	  cout << "\nEnter a transaction code\n(D=display, L=list a bus, l=list bus with maintenance history C=change, "
		   << "c=compare two buses maintenance history,\nm=add a maintenance, a=display average bus miles X=exit)\n" ;
	  getline(cin, transactionCode) ;

	  while ((transactionCode != "X") and (transactionCode != "x"))
		  {
		  	  if ((transactionCode == "D") or (transactionCode == "d"))
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
		  	  else if (transactionCode.substr(0,1) == "L")
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
		  	  else if (transactionCode.substr(0,1) == "C")
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
		  	  else if (transactionCode.substr(0,1) == "l")
		  	  	  {
		  		  	  cout << "Enter Bus ID : " ;
		  		  	  cin  >> search ;
		  		  	  found = false ;
					  while (bananaBusRecords[printPos].getBusID() != " ")
						  {
							  if (search == bananaBusRecords[printPos].getBusID())
								  {
								  	  cout << "---Maintenance History---\n" ;
								  	  cout << bananaBusRecords[printPos].getBusID() << ":\n" ;
								  	  if (bananaBusRecords[printPos].currentMaint == 0)
								  	  	  {
								  		  	  cout << "There is no maintenance history\n" ;
								  	  	  }
								  	  else
								  	  {
								  		for (int i = 0; i < bananaBusRecords[printPos].currentMaint; i++)
										  {
											  cout << (i+1) << ": "
												   << bananaBusRecords[printPos].banana[i].maintDate << ", "
												   << bananaBusRecords[printPos].banana[i].maintType << ", "
												   << bananaBusRecords[printPos].banana[i].maintMechanic << endl ;
										  }
								  		cout << "\n---end of maintenance history---" << endl << endl ;
								  	  }
									  found = true ;
								  }
							  printPos++;
						  }

					  if (found == false)
						  {
							  cout << "Bus ID not found, please try again.\n\n";
						  }
					  printPos = 0 ;
					  cin.ignore();
		  	  	  }
		  	  else if (transactionCode.substr(0,1) == "c")
				  {
		  		  	  cout << "Enter first Bus ID : " ;
					  cin  >> search ;
					  cout << "Enter second Bus ID : " ;
					  cin  >> search2 ;
					  found = false ;
					  while (bananaBusRecords[printPos].getBusID() != " ")
						  {
							  if (search == bananaBusRecords[printPos].getBusID())
								  {
								  	  while (bananaBusRecords[printPos2].getBusID() != " ")
								  	  {
								  		  if (search2 == bananaBusRecords[printPos2].getBusID())
								  		  {
								  			if(bananaBusRecords[printPos].currentMaint < bananaBusRecords[printPos2].currentMaint)
								  				cout << "Bus " << bananaBusRecords[printPos].getBusID() << " has less maintenance history than " << bananaBusRecords[printPos2].getBusID() << endl ;
								  			else
								  				cout << "Bus " << bananaBusRecords[printPos2].getBusID() << " has less maintenance history than " << bananaBusRecords[printPos].getBusID() << endl ;
								  			found = true ;
								  		  }

								  		printPos2++;
								  	  }

								  }
							  printPos++;
						  }

					  if (found == false)
						  {
							  cout << "One of bus IDs not found, please try again.\n\n";
						  }
					  printPos = 0 ;
					  cin.ignore();
				  }
		  	  else if (transactionCode.substr(0,1) == "m")
				  {
		  		  	  cout << "Enter Bus ID : " ;
					  cin  >> search ;
					  found = false ;
					  while (bananaBusRecords[printPos].getBusID() != " ")
						  {
							  if (search == bananaBusRecords[printPos].getBusID())
								  {
								  	  cout << "Enter date, type, and mechanic separated by spaces\n" ;
									  cin  >> bananaBusRecords[printPos].banana[bananaBusRecords[printPos].currentMaint].maintDate
										   >> bananaBusRecords[printPos].banana[bananaBusRecords[printPos].currentMaint].maintType
										   >> bananaBusRecords[printPos].banana[bananaBusRecords[printPos].currentMaint].maintMechanic ;

									  bananaBusRecords[printPos].currentMaint++ ;
									  cout << "Maintenance added to "<< bananaBusRecords[printPos].getBusID()<< endl << endl ;

									  found = true ;
								  }
							  printPos++;
						  }

					  if (found == false)
						  {
							  cout << "Bus ID not found, please try again.\n\n";
						  }
					  printPos = 0 ;
					  cin.ignore();
				  }
		  	  else if (transactionCode.substr(0,1) == "a")
				  {
		  		  	bananaBusRecords[0].clearData();

		  		  	while (bananaBusRecords[printPos].getBusID() != " ")
					  {
		  		  		bananaBusRecords[printPos].incBusCount() ;
		  		  		bananaBusRecords[printPos].addToTotal(bananaBusRecords[printPos].getMileage()) ;

		  		  		printPos++ ;
					  }

		  		  	bananaBusRecords[0].calcAve();

		  		  	cout << "Number of Buses : " << bananaBusRecords[0].getBusCount() << endl ;
		  		  	cout << "Average Miles : " << bananaBusRecords[0].getAveBusMileage() << endl ;

		  		  	printPos = 0 ;
				  }
		  	  else
		  	  	  {
		  		  	  cout << "That is not a vaild code, please try again\n\n" ;
		  	  	  }

			  cout << "\nEnter a transaction code\n(D=display, L=list a bus, l=list bus with maintenance history C=change, "
				   << "c=compare two buses maintenance history,\nm=add a maintenance, a=display average bus miles X=exit)\n" ;

		  getline(cin, transactionCode) ;
		  }

	//goodbye
	  goodbye() ;

	return 0;
}
