//============================================================================
// Name        : JaggersA8.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "string200.h"
using namespace std;

int main()
{
	string200 test(10);
	int i;
	test[0]="abcde";
    cout << "main: first element " << test[0] << endl;
    for (i=0; i < 10; i++)
    {
    	test[i]=test[0].substr(0,5)+to_string(i);
    }
    cout << "main: done with load, now displaying the array"<<endl;
    for (i=0; i < 10; i++)
    {
           cout << "array[" << i << "] = -->" << test[i] << "<--" << endl;
    }
    cout << "main: now testing with subscript[10]" << endl;
    test[10] = "qwerty";
    cout << "main: after the test with subscript[10]" << endl;

    return 0;
}
