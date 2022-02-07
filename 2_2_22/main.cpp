/* Angela Venable*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() 
{
	double length = 4;
	double width = 8;
	double area = length * width;
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	
	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
	
	
	int x = 5;
	int y = 9;
	
	
	cout <<"x/y = " <<  static_cast<double>(x)/y << endl;
	cout << "87F in c is " << (87-32) * (5.0/9) << endl;
	cout << "5%2 = " << x%y << endl;
	
	char ch; 
	cin.get(ch);
	string myStr;
	cout << "Enter a string: ";
	getline(cin, myStr);
	cout << myStr << endl;
	
	return 0;	
}