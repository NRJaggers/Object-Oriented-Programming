//============================================================================
// Name        : 11-18_Exceptions.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void thefunc()
{
    string s;
    s = "in function thefunc my error code = 12345";
    throw s;
    // in gcc, the following does not work
    // unable to throw a string literal
    // must throw a string variable instead
    // throw "in function thefunc my error code = 12345";
    int i = 44;
    throw i;
    return;
}
int main()
{
    // int * p;
    // p = nullptr;
    // *p = 44; // this would cause a runtime error - get a return code
    // of -1,073,741,819
    // that is hex C0000005
    // which if you search for it, in windows, is a
    // segmentation fault (memory access error)
    // int i = 3;
    // int j = 0;
    // i = i / 0; // this would cause another runtime error -
    // get -1,073,741,676
    // hex C0000094, divide by zero fault
    // string s;
    // s = "a1a";
    // int i;
    // i = stoi(s); // this causes an invalid argument exception,
    // different than a system fault.
    // it's caused by somebody doing a throw
    // in this case it's the stoi function reacting
    // to bad data
    /*
 infile.open (...)
 if (!infile.is_open())
 cout "open failure"
 return 4 // might be a good place to throw your own exception
 return 0;
*/
    // some C/C++ functions give you the ability to stop an exception from
    // happening, in this case the out-of-memory exception
    int* o;
    o = new (nothrow) int[1000000000000];
    // if you want to handle exceptions, put the code that might cause one into
    // a try block
    try {
        cout << "calling thefunc" << endl;
        thefunc();
    }
    // and catch it, based on its type, with a subsequent catch block
    catch (string& s) {
        cout << "string thrown here it is -->" << s << endl;
        exit(55);
    }
    catch (int& i) {
        cout << "int thrown here it is -->" << i << endl;
    }
    return 0; // this terminates the function, but
    exit(4); // this terminates the entire run unit
}
