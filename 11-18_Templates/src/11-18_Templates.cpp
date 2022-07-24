//============================================================================
// Name        : 11-18_Templates.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

template <class type1>
class myclass
{
private:
    type1 temp;

public:
    void swap(type1, type1);
};

template <class type1>
void myclass<type1>::swap(type1 first, type1 second)
{
    // type1 temp; // don't need this, because we already have a
    // member for this purpose
    temp = first;
    first = second;
    second = temp;
    return;
}

int main()
{
    int a;
    int b;
    myclass<int> test;
    test.swap(a, b);
    string s1;
    string s2;
    //test.swap(s1, s2); // causes compile error...mismatched types

    //myclass<string> testS ; //however it wont cause a compile error after you have
    //testS.swap(s1,s2) ;	  //defined an object using string as as the type

    return 0;
}

