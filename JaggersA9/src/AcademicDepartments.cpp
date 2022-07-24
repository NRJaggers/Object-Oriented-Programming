/*
 * AcademicDepartments.cpp
 *
 *  Created on: Dec 7, 2019
 *      Author: Nathan Jaggers
 */

#include <iostream>
#include <fstream>
#include "AcademicDepartments.h"
using namespace std;


//constructor
	AcademicDepartments :: AcademicDepartments()
	{
		//declarations
			ifstream inFileMap ;
			string lineMap, abbreviation, department;

		inFileMap.open("C:\\COMSC200\\a9.ini");
		if(!inFileMap.is_open())
		{
			cout << "Please check file path for table look up data population\n"
				 << "and try again.\n" ;
			return  ;
		}

		while(getline(inFileMap,lineMap))
		{
			abbreviation = lineMap.substr(0,5) ;
			department = lineMap.substr(5,19) ;

			//print to check proper population of data
			  //cout << abbreviation << "\t" << department << endl ;

			table.insert(pair<string,string>(abbreviation, department)) ;
		}

	}

//member functions
	bool AcademicDepartments :: findDeptName (string searchKey, string& tableValue )
	{
		bool found = false ;
		map<string,string> :: iterator mIndex ;
		tableValue = "Not Found" ;

		//first algorithm
		/*
		for(mIndex = table.begin() ; mIndex != table.end(); mIndex++)
		{
			if (mIndex->first == searchKey)
			{
				found = true ;
				tableValue = mIndex->second ;
			}
		}
		*/

		//second algorithm
		mIndex = table.find(searchKey) ;
		if(mIndex != table.end())
		{
			tableValue = mIndex->second ;
			found = true ;
		}


		return found ;
	}
