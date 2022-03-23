#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
	int memSize = 0;
	cout << "Enter the memory size in bytes: ";
	cin >> memSize;
	cout << endl;
	
	while(!cin || memSize < 0)
	{
		if(!cin)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		cout << "Invalid Input!" << endl;
		cout << "Enter the memory size in bytes: ";
		cin >> memSize;
		cout << endl;
	}
	
	double mar = log2(memSize);
	
	cout << "The minimum MAR size is " << ceil(mar) << " bits." << endl;
	
	return 0;
}


















