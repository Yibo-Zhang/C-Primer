#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;

	// sizeof operator yields size of type or of variable
	cout << "int is " <<sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short<<" bytes." << endl;
	cout << "long is "<<sizeof n_long << " bytes." << endl << endl;

	cout << "Maximum values:" <<endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bites per byte = " << CHAR_BIT << endl;
	return 0;
	

}