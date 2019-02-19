//VectorPrint.h: Prints all the values of the vector in JSON format.

#pragma once
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

template <class type>
void VectorPrint( vector<type> xArray ) {
	cout << "{ ";
	for ( int i=0; i < xArray.size(); i++ ) {
		if ( typeid(xArray.at( i )).name() == "string" ) {
			cout << "\"";
			cout << xArray.at( i );
			cout << "\"";
		} else {
			cout << xArray.at( i );
		}
		if ( i != xArray.size() - 1 ) {
			cout << ", ";
		}
	}
	
	cout << " }" << endl;
};
