#include <iostream>
#include <fstream>

using namespace std;


int main()
{

	ifstream fin;
	fin.open("grades.txt");
	double grade = 0, average = 0;
	string fname, lname, mi;
	
	while (!fin.eof())
	{
		fin >> fname >> mi >> lname;
		char newLine = ' ';
		int counter = 0;
		average = 0;
		while (newLine != '\n' && !fin.eof())
		{
			newLine = fin.peek();
			if(newLine == '\n')
			{
				continue;
			}
			fin >> grade;
			average += grade; //average = average + grade;
			newLine = fin.get();
			counter++; //counter = counter + 1;
			//cout << fname << " " << grade << " " << counter << endl;
		}
		average /= counter; // average = average / 5;
	
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
		else 
		{
			cout << fname << " " << mi << " " << lname;
			cout << " has failed." << endl;
		}
		
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}	