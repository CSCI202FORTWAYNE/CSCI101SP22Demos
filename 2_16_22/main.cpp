#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
	ifstream fin;
	fin.open("grades.txt");
	
	double grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0, grade5 = 0;
	string fname, lname, mi;
	double average = 0;
	string ch1, ch2;
	
	cout << "Enter a number: ";
	cin >> grade1;
	cout << endl;
	
	if(!cin)
	{
		cout << "I found an input error!" << endl;
		return 1;
	}
	
	
	ch1 = "billy";
	ch2 = "bill";
	double x = 3.0/7.0 + 2.0/7.0 + 2.0/7.0;
	cout <<(1.0 == x) << endl;
	if(fabs(1.0 - x) < 0.000001)
		cout << "equality" << endl;
	else 
		cout << "not equal" <<endl;
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	fin >> fname >> mi >> lname;
	fin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
	average = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
	
	if(average >= 60)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has passed." << endl;
		if(average >= 90)
		{
			cout << "The grade earned is an A." << endl;
		} 
		else if(average >= 80)
		{
			cout << "The grade earned is an B." << endl;
		}
		else if(average >= 70)
		{
			cout << "The grade earned is an C." << endl;
		}
		else if (average >= 60)
		{
			cout << "The grade earned is an D." << endl;
		}
	}
	else if (true)
	{
		cout << fname << " " << mi << " " << lname;
		cout << " has failed." << endl;
	}
	
	cout << "Goodbye!" << endl;
	fin.close();
	return 0;
}