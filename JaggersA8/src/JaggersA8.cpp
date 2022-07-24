//============================================================================
// Name        : JaggersA8.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "string200.h"
#include "string200.cpp" // needed to include cpp to force compilation of constructor, overload and destructor
using namespace std;

int main()
{
	string200 <string> test(10);

	int i;
	test[0]="abcde";
	cout << "main: first element " << test[0] << endl;

	try{

		for (i=0; i < 10; i++)
		{
			test[i]=test[0].substr(0,5)+to_string(i);
		}
		cout << "main: done with load 1, now displaying the array"<<endl;
		for (i=0; i < 10; i++)
		{
			   cout << "array[" << i << "] = -->" << test[i] << "<--" << endl;
		}
	}
	catch(string& exception)
	{
		cout << "Exception caught:\n" << exception ;
		exit(-1);
	}


	int sizeVar ;	// test program by trying different size variables and trying to input data while out of bounds

	//comment and uncomment here
	sizeVar = 10;
	//sizeVar = 20;

    string200 <float> test2(sizeVar);
    test2[0]=1.1;

    try{
    		for (i=1; i < sizeVar; i++)
    	    {
    	    	test2[i]=test2[i-1]+1.1;
    	    }
    	    cout << "main: done with load 2, now displaying the array"<<endl;
    	    for (i=0; i < sizeVar; i++)
    	    {
    	           cout << "array[" << i << "] = " << test2[i] << endl;
    	    }
    	    cout << "main: now testing with subscript[" << sizeVar << "]" << endl;

    	    //comment and uncomment here
    	    //test2[-1] = 101.01;
    	    test2[10] = 101.01;
    	    //test2[25] = 101.01;

    	    cout << "main: after the test with subscript[" << sizeVar << "]" << endl;
    }
    catch(string& exception)
    	{
    		cout << "\n---Exception caught---:\n" << exception ;
    		exit(-1);
    	}


    return 0;
}


