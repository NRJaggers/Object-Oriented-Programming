//============================================================================
// Name        : 11-25_CommandLineArguments.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
//Comment after here
/*

// main.cpp - lists runtime parameters passed to main upon entry - command line and environmental

// main is passed three parameters:
// 1. an int containing the number of command line arguments which follow.
// the first command line argument will always be the path+program name.
// arguments 2-n are the user-entered arguments.
// 2. an array of char pointers, each pointing to a c-string containing a command line argument.
    // 3. an array of char pointers, each pointing to a c-string with an environmental variable.
    // this pointer array is terminated with a nullptr.
    //

#include <string>
#include <iostream>

using namespace std;

int main(int inputCount, char* inputPointersArray[], char* envPointersArray[])
{
    cout << "inputCount " << inputCount << endl;
    cout << "\ncommand line argument\n" ;
    int inputsProcessed;
    for (inputsProcessed = 0; inputsProcessed < inputCount; inputsProcessed++) {
        while (*inputPointersArray[inputsProcessed] != '\0') {
            cout << *inputPointersArray[inputsProcessed];
            inputPointersArray[inputsProcessed]++;
        }
        cout << endl;
    }

    cout << "\nenvironmental variables\n" ;
    for (inputsProcessed = 0; envPointersArray[inputsProcessed] != nullptr; inputsProcessed++) {
        while (*envPointersArray[inputsProcessed] != '\0') {
            cout << *envPointersArray[inputsProcessed];
            envPointersArray[inputsProcessed]++;
        }
        cout << endl;
    }
    return 0;
}

*/
//Comment before here
//============================================================================

//============================================================================
//Comment after here
/*

//main.cpp - lists runtime parameters passed to main upon entry - command line
//
// main is passed two parameters:
// 1. an int containing the number of command line arguments which follow.
// the first command line argument will always be the path+program name.
// arguments 2-n are the user-entered arguments.
// 2. an array of char pointers, each pointing to a c-string containing a command line argument.
// 3. an array of char pointers, each pointing to a c-string containing an environmental variable.
//
using namespace std;
#include <string>
#include <iostream>

int main(int inputCount, char** arg1, char** arg2)
{
    cout << "inputCount " << inputCount << endl;
    string s1 = arg1[0];
    string s2 ;//= arg1[1];
    cout << "first two command line args" << endl;
    cout << s1 << endl
         << s2 << endl;
    s1 = arg2[0];
    s2 = arg2[1];
    cout << "first two env vars" << endl;
    cout << s1 << endl
         << s2 << endl;

    return 0;
}

*/
//Comment before here
//============================================================================

//============================================================================
//Comment after here
/*

//main.cpp - lists runtime parameters passed to main upon entry - command line
//
// main is passed two parameters:
// 1. an int containing the number of command line arguments which follow.
// the first command line argument will always be the path+program name.
// arguments 2-n are the user-entered arguments.
// 2. an array of char pointers, each pointing to a c-string containing a command lineargument.
//
using namespace std;
#include <string>
#include <iostream>

int main(int inputCount, char* inputPointersArray[])
{
    cout << "inputCount " << inputCount << endl;
    int inputsProcessed;
    string s;
    for (inputsProcessed = 0; inputsProcessed < inputCount; inputsProcessed++) {
        s = inputPointersArray[inputsProcessed];
        cout << s << endl;
        int i;
        if (inputsProcessed != 0) {
            // assumes the passed parameters are valid numerics
            // a dangerous assumption!
            i = stoi(s);
            cout << "stoi'd argument " << i << endl;
        }
    }

    cout << "\nend of program\n" ;
    return 0;
}

*/
//Comment before here
//============================================================================

