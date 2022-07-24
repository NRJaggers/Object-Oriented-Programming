
//============================================================================
// Name        : JaggersA6.cpp
// Author      : Nathan Jaggers
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "welcome.h"
#include "goodbye.h"
#include "BusManager.h"

using namespace std;

int main() {

	//welcome
		welcome() ;
	//declarations
		BusManager magicSchoolBus ;

	//transactions
		magicSchoolBus.transactions() ;

	//clean up and goodbye
		magicSchoolBus.cleanUp() ;
		goodbye();

	return 0;
}
