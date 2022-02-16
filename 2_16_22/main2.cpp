#include <iostream>
#define NDEBUG
#include <cassert>

using namespace std;

int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;
	cout << endl;
	assert(num > 0);
	if(0 <= num && num <= 10)
		cout << num << " is within 0 and 10." << endl;
	else
		cout << num << " is not within 0 and 10" << endl;
	
	return 0;
}