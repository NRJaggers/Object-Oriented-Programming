//============================================================================
// Name        : 11-20_Bracket.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class myclass {
public:
    int i0;
    int i1;
    int i2;
    int& operator[](int);
};
// makes it look to the user that there's an array, when in reality there's only
// the members i0, i1, and i2.
// if the subscript provided by the user is 1-9, provide i0. if 11-19, provide i1,
// else provide i2.
int& myclass::operator[](int sub)
{
    if (sub > 0 && sub < 10)
        return i0;
    else if (sub > 10 && sub < 20)
        return i1;
    else
        return i2;
}
int main()
{
    myclass test;
    test[3] = 44; // should give us i0
    cout << test[3] << endl; // let's see
    cout << test[9] << endl; // 9 should give the same answer
    cout << test[15] << endl; // and right now, i1 is undefined, so this
    // will give us garbage.
    return 0;
}
