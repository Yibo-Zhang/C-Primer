#include <iostream>
#define ZERO 0 // makes ZERO symbol for 0 value
#include <climits>
int main()
{	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;


	cout << "\nSam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited. \nPoor Sam" << endl;
	cout << "Add $1 to each other." << endl << "Now";
	sam = sam +1;
	sue = sue +1;
	cout << "\nSam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited. \nPoor Sam" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each other." << endl << "Now";
	sam = sam - 1;
	sue = sue -1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited. \nLucky Sue" << endl;


	return 0;
}