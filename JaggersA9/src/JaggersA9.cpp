//============================================================================
// Name        : JaggersA9.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include "Student.h"
#include "Grade.h"
#include "AcademicDepartments.h"
#include "welcome.h"
#include "goodbye.h"

using namespace std;

int main(int inputCount, char* inputPtrArray[])
{
	//welcome
	  welcome();

	//declarations part 1
	  //command line variables
		  int inputsProcessed;
		  string dataFile, lastUpdate ;

	  //input and print variables
		  int gradeValue = 0, totalCredits = 0 ;
		  float gpa = 0;
		  string line ;
		  vector<Student*> studentRecords ;
		  Student *studentInput = nullptr;
		  vector<Student*> ::iterator vIndex;
		  Grade *gradeInput ;
		  vector <Grade> :: iterator gIndex ;

	  //department look up variables
	  		AcademicDepartments departmentRecords ;
	  		string key, value ;

	//reading command line arguments
	  //cout << inputCount << endl ;	//check that we have three arguments for our executable and 3 files

	  for (inputsProcessed = 0; inputsProcessed < inputCount; inputsProcessed++)
		{
			while (*inputPtrArray[inputsProcessed] != '\0')
			{
				//cout << *inputPtrArray[inputsProcessed]; // check that we are getting out arguments correctly
				if(inputsProcessed == 1)
					{
						dataFile += *inputPtrArray[inputsProcessed] ;
					}
				else if (inputsProcessed == 2)
					{
						lastUpdate += *inputPtrArray[inputsProcessed] ;
					}

				inputPtrArray[inputsProcessed]++;
			}
		}

	  //checking file names
	  	  //cout << dataFile << endl; 	//make sure file name is correct
	  	  //cout << lastUpdate << endl ;	//repeat!

	//reading data from file
	  ifstream inFile ;
	  inFile.open(dataFile) ;
	  	  if(!inFile.is_open())
	  	  {
	  		  cout << "There was an error opening the file.\n"
	  			   << "Please check the file name and try again\n";
	  	  }

	  while(getline(inFile,line))
	  {
		  if(line[0] == '1') //if student record code
		  {
			  //test if reading data is correct
			  //cout << line.substr(1,6) <<endl ;
			  //cout << line.substr(7,20) << endl ;

			  //declare new student and push onto vector
			  studentInput = new Student ;

			  studentInput->studentID = line.substr(1,6) ;
			  studentInput->studentName = line.substr(7,20) ;
			  studentRecords.push_back(studentInput) ;
		  }
		  else if (line[0] == '2') // if grade record code
		  {
			  //test if reading data is correct
			  //cout << line.substr(1,5) << endl;
			  //cout << line.substr(6,4) << endl;
			  //cout << line[10] << endl;
			  //cout << line[11] << endl;

			  //access student from vector and add grade records
			  for (vIndex = studentRecords.begin(); vIndex != studentRecords.end(); vIndex++ )
			  {
				  if((vIndex + 1) == studentRecords.end())
				  {
					  //data population of grades go here.
					  gradeInput = new Grade ;
					  gradeInput->deptAbrv = line.substr(1,5) ;
					  gradeInput->courseNum = line.substr(6,4) ;
					  gradeInput->creditHours = stoi(line.substr(10,1)) ;
					  gradeInput->grade = line[11] ;
					  (*vIndex)->studentGrades.push_back(*gradeInput) ;
				  }
			  }

		  }
		  else
		  {
			cout << "No matching record code\n" ;
		  }
	  }

	  inFile.close();

	//printing out populated data
	  /*
	  cout << "Student Report – As of " << lastUpdate << endl;
	  for (vIndex = studentRecords.begin(); vIndex != studentRecords.end(); vIndex++ )
	 			  {
		  	  	  	  (*vIndex)->displayStudent() ;

		  	  	  	  if(!(*vIndex)->studentGrades.empty())
		  	  	  	  {
		  	  	  		  for(gIndex = (*vIndex)->studentGrades.begin(); gIndex != (*vIndex)->studentGrades.end(); gIndex++ )
							  {
								  if(gIndex == (*vIndex)->studentGrades.begin())
								  {
									  gIndex->gradeHeader() ;
								  }

								  gIndex->displayGrade() ;
							  }
		  	  	  	  }

		  	  	  	  else
		  	  	  	  {
		  	  	  		  cout << "Student has no grades\n" ;
		  	  	  	  }

	 			  }
	  	  cout << "\n---end of students---\n\n" ;
	  	  */


	//test look up function
	  //key = "COMSC" ;
	  //cout << departmentRecords.findDeptName(key,value) << endl;
	  //cout << value ;

   //printing out student records
	  cout << "Student Report – As of " << lastUpdate << endl;
	  for (vIndex = studentRecords.begin(); vIndex != studentRecords.end(); vIndex++ )
				  {
					  (*vIndex)->displayStudent() ;

					  if(!(*vIndex)->studentGrades.empty())
					  {
						  cout << "Transcript: \n" ;
						  for(gIndex = (*vIndex)->studentGrades.begin(); gIndex != (*vIndex)->studentGrades.end(); gIndex++ )
							  {
								  if(gIndex == (*vIndex)->studentGrades.begin())
								  {
										cout << setw(17) << "Department"
											 << setw(20) << "Course Number"
											 << setw(14) << "Credit Hours"
											 << setw(7)  << "Grade"
											 << "\n---------------------------------------------------------------\n" ;
								  }

								  	key = gIndex->deptAbrv ;
								  	departmentRecords.findDeptName(key,value) ;
									cout << setw(20) << value
										 << setw(13) << gIndex->courseNum
										 << setw(13) << gIndex->creditHours
										 << setw(10) << gIndex->grade << endl;


								  gradeValue = gIndex->gtov() ;
								  gpa += (gradeValue * gIndex->creditHours) ;
								  totalCredits += gIndex->creditHours ;

								  //cout << gradeValue << "\t" << gpa << "\t" << totalCredits << endl ;

							  }

						  //printing GPA
						  gpa = gpa/totalCredits ;

						  cout << "GPA: " << fixed << setprecision(2)<< gpa << endl << endl ;

						  gradeValue = 0 ;
						  gpa = 0 ;
						  totalCredits = 0 ;
					  }

					  else
					  {
						  cout << "Student has no grades\n\n" ;
					  }

				  }
		  cout << "\n---end of students---\nThere are " << studentRecords.size() <<" students\n" ;

   //answering queries
	  cout << "\n---------------------------------------------------------\n\n"
	       << "Listing Computer Science classes taken by student A34567:\n" ;
	  for (vIndex = studentRecords.begin(); vIndex != studentRecords.end(); vIndex++ )
	  {
		  if ((*vIndex)->studentID == "A34567" )
		  {
			  for(gIndex = (*vIndex)->studentGrades.begin(); gIndex != (*vIndex)->studentGrades.end(); gIndex++ )
			  {
				  if(gIndex->deptAbrv == "COMSC")
				  {
					  key = gIndex->deptAbrv ;
					  departmentRecords.findDeptName(key,value) ;
					  cout << value << " " << gIndex->courseNum << endl ;
				  }
			  }
		  }
	  }

	  cout << "\nListing the GPA for the engineering classes taken by student A56789:\n" ;
	  for (vIndex = studentRecords.begin(); vIndex != studentRecords.end(); vIndex++ )
	  	  {
	  		  if ((*vIndex)->studentID == "A56789" )
	  		  {
	  			  for(gIndex = (*vIndex)->studentGrades.begin(); gIndex != (*vIndex)->studentGrades.end(); gIndex++ )
	  			  {
	  				  if(gIndex->deptAbrv == "ENGR ")
	  				  {
	  					 gradeValue = gIndex->gtov() ;
	  					 gpa += (gradeValue * gIndex->creditHours) ;
	  					 totalCredits += gIndex->creditHours ;
	  				  }
	  			  }
	  		  }
	  	  }
	  gpa = gpa/totalCredits ;
	  cout << "GPA: " << fixed << setprecision(2)<< gpa << endl ;

	  cout << "\nListing the students that have not yet received a passing grade for English 101:\n";
	  for (vIndex = studentRecords.begin(); vIndex != studentRecords.end(); vIndex++ )
	  	  	  {
	  	  			  for(gIndex = (*vIndex)->studentGrades.begin(); gIndex != (*vIndex)->studentGrades.end(); gIndex++ )
	  	  			  {
	  	  				  if((gIndex->deptAbrv == "ENGL ") && (gIndex->courseNum == "101 "))
	  	  				  {
	  	  					 if (gIndex->gtov() < 2) //not passing being defined as a D or lower
	  	  					 {
	  	  						 cout << (*vIndex)->studentID << endl ;
	  	  					 }
	  	  				  }
	  	  			  }
	  	  	  }

	//goodbye
	  goodbye();

	//clean up
	  delete studentInput ;
	  delete gradeInput ;
	  studentRecords.clear() ;

	return 0;
}
