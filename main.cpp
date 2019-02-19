//main.cpp: Entrypoint for VectorPrint.

#include "VectorPrint.h"
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<int> xIntArray = { 1,2,3 };
	VectorPrint<int>( xIntArray );
	return 0;
}
