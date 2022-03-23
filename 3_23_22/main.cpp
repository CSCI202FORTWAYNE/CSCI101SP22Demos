#include <iostream>
#include <cmath>
#include <climits>
#include <string>
#include <fstream>

using namespace std;

int getInt(string prompt);
int secret(int x);
void resetStream(istream& input);

int main()
{
	
	int memSize = getInt("Enter the memory size in bytes: ");
	
	while(!cin || memSize < 0)
	{
		
		if(!cin)
		{
			resetStream(cin);
		}
		cout << "Invalid Input!" << endl;
		memSize = getInt("Enter the memory size in bytes: ");
	}
	
	double mar = log2(memSize);
	
	cout << "The minimum MAR size is " << ceil(mar) << " bits." << endl;
	
	for (int i = 0; i < 10; i++)
		cout << "Secret 3 is " << secret(3) << endl;
	
	return 0;

}

int getInt(string prompt)
{
	
	int usrInt;
	cout << prompt;
	cin >> usrInt;
	cout << endl;
	
	return usrInt;
}


void resetStream(istream& input)
{
	input.clear();
	input.ignore(INT_MAX, '\n');
}

int secret(int x)
{
	static int count = 0;
	cout << "The secret function has been called " << ++count << endl;
	if(x > 5)
		return 2*x;
		
		
	return x;
}















