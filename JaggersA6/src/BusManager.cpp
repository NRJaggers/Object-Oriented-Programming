/*
 * BusManager.cpp
 *
 *  Created on: Nov 3, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Bus.h"
#include "BusManager.h"
using namespace std ;

//private

	//functions
		void BusManager :: displayCH()
			{
				cout << "============================================================\n"
					 << left
					 << setw(10) << "Bus ID"
					 << setw(19) << "Bus Manufacturer"
					 << setw(15) << "Bus Capacity"
					 << setw(10) << "Mileage"
					 << setw(9)  << "Status"
					 << "\n============================================================\n" ;
			}

//public

	//constructor
		 BusManager :: BusManager()
		 	 {

			 	 //declarations
			 	 	 string line, busIDOF, manufacturerOF ;
			 	 	 int index = 0, capacityOF, mileageOF ;
			 	 	 char statusOF;

			 	 for (int i = 0; i < 50 ; i++)
			 	 {
			 		 busRecords[i] = nullptr ;
			 	 }

			 	//open file and get input
			 		  ifstream inFile ;
			 		  inFile.open("C:\\COMSC200\\a4data.txt") ;
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


			 				  busRecords[index] = new Bus(busIDOF,manufacturerOF,capacityOF,mileageOF,statusOF)  ;
			 				  index++ ;
			 			  }
			 		  inFile.close();
			 		  index = 0 ;

			 		//display input
			 		  cout << "The following have been read in to the console from the external file :\n\n" ;
			 		  displayCH();

			 		  while(busRecords[index] != nullptr)
			 			  {
			 			  	  busRecords[index]->displayInfo() ;
			 			  	  cout << endl ;
			 			  	  index++ ;
			 			  	  if (busRecords[index] == nullptr)
			 					  {
			 						cout<< right << setw(41) << "-----end of list-----" << left;
			 					  }
			 			  }
		 	 }

	//functions
		void BusManager :: transactions()
			{
				//declarations
					string transactionCode ;
					bool found ;
					int index = 0 ;

					 cout << "\nEnter a transaction code (D=display, L=list a bus, C=change, X=exit)\n" ;
						  getline(cin, transactionCode) ;

						  while ((transactionCode != "X") and (transactionCode != "x"))
							  {
								  if ((transactionCode == "D") or transactionCode == "d")
									  {
										displayCH();
										while(busRecords[index] != nullptr)
												  {
													  busRecords[index]->displayInfo() ;
													  cout << endl ;
													  index++ ;
													  if (busRecords[index] == nullptr)
														  {
															cout<< right << setw(41) << "-----end of list-----" << left;
														  }
												  }
										cout << endl ;
										index = 0 ;
									  }
								  else if ((transactionCode.substr(0,1) == "L") or (transactionCode.substr(0,1) == "l"))
									  {
										  found = false ;
										  while (busRecords[index] != nullptr)
											  {
												  if (transactionCode.substr(2,5) == busRecords[index]->getBusID())
													  {
														  displayCH();
														  busRecords[index]->displayInfo() ;
														  cout << endl << endl ;
														  found = true ;
													  }
												  index++;
											  }

										  if (found == false)
											  {
												  cout << "Bus ID not found, please try again.\n\n";
											  }
										  index = 0 ;
									  }
								  else if ((transactionCode.substr(0,1) == "C") or (transactionCode.substr(0,1) == "c"))
									  {
										  found = false ;
										  while (busRecords[index] != nullptr)
											  {
												  if (transactionCode.substr(2,5) == busRecords[index]->getBusID())
													  {
														  busRecords[index]->setBusStatus(transactionCode[8]) ;
														  cout << "Success!\n\n";
														  found = true ;
													  }
												  index++;
											  }

										  if (found == false)
											  {
												  cout << "Bus ID not found, please try again.\n\n";
											  }
										  index = 0 ;
									  }
								  else
									  {
										  cout << "That is not a valid code, please try again\n\n" ;
									  }

							  cout << "Enter a transaction code (D=display, L=list a bus, C=change, X=exit)\n" ;
							  getline(cin, transactionCode) ;
							  }
			}
		void BusManager :: cleanUp()
			{
				//declarations

					for (int i = 0; i < 50 ; i++)
						 {
							delete busRecords[i] ;
						 }
			}
