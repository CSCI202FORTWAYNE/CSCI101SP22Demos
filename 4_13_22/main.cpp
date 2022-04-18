#include <iostream>
#include <string>
#include <climits>
#include <cctype>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;

const int LIST_SIZE = 10;

enum colorType{RED, BLUE, GREEN, YELLOW, PURPLE};
const colorType colors[] = {RED, BLUE, GREEN, YELLOW, PURPLE};
const string colorStr[] = {"Red", "Blue", "Green", "Yellow", "Purple"};
void resetStream(std::istream& input);
colorType inputColor();
std::string colorToString(colorType);
void inputIntoArray(int[], int);
void selectionSort(int[], int);
string toUpperCase(string s);
void processRow(int[], int);
void processTable(int table[][3], int, int);

int main()
{

    
    int list[LIST_SIZE];
    int sum = 0;
    int size = 0;
    double avg = 0;
    string play; 
    cout << "Do you want to play? ";
    cin >> play;
    play = toUpperCase(play);
    while(play != "Y" && play != "N" && play != "YES" && play != "NO")
    {
        cout << "I don't understand. I'm expecting yes or no." << endl;
        cout << "Do you want to play? ";
        cin >> play;
        play = toUpperCase(play);
    }
    if(play == "YES")
    {
        cout << "You Won!" << endl;
    }

    for(int i = 0; i < LIST_SIZE; i++) //i++ ===== i = i + 1
    {
        list[i] = 0;
    }
    
    //inputIntoArray(list, LIST_SIZE);
    while(cin && size < 10)
    {
        cout << "Enter a number (or enter q to quit): ";
        
        cin >> list[size];
        if(cin)
        {
            size++;
        }
    }
    resetStream(cin);
   
    for(int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
    selectionSort(list, size);
    for(int i = 0; i < size; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < size; i++)
    {
        sum += list[i]; // sum = sum + list[i];
    }
    avg = static_cast<double>(sum) / size;
    cout << "The sum is " << sum << endl;
    cout << "The average is " << avg << endl;
    
    int largestPosition = 0;
    for(int i = 1; i < size; i++)
    {
        if(list[i] > list[largestPosition])
        {
            largestPosition = i;
        }
    }
    
    cout << "The largest element is " << list[largestPosition]; 
    cout << " located at " << largestPosition <<endl;



    colorType myColor = GREEN;
    myColor = inputColor();

    std::cout << "My color is " << colorToString(myColor) << std::endl;
    std::cout << "Another color is " << colorToString(static_cast<colorType>(47)) << std::endl;
    
    int table[5][3];
    for(int i = 0; i < 5; i++)
        processRow(table[i], 3);


    for(int col = 0; col < 3; col++)
    {
        int sum = 0;
        for(int row = 0; row < 5; row++)
        {
            sum += table[row][col];
        }
        cout << "Sum of Col" << col + 1 << " = " << sum << endl;
    }

    return 0;
}

void resetStream(std::istream& input)
{
	input.clear();
	input.ignore(INT_MAX, '\n');
}

colorType inputColor()
{
    colorType myColor;
    int inputColor;
    cout << "Enter a color: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << i <<". " << colorStr[i] << endl;
    }
    cin >> inputColor;
    while(!std::cin ||inputColor < RED || inputColor > PURPLE)
    {
        if(!cin)
        {
            resetStream(cin);
        }
        cout << "That is not a valid color choice." << endl;
        cout << "Enter a color: " << endl;
        for(int i = 0; i < 5; i++)
        {
            cout << i << ". " << colorStr[i] << endl;
        }
        cin >> inputColor;
    }

    myColor = colors[inputColor];
    return myColor;
}


std::string colorToString(colorType theColor)
{
    string c = "";
    c = colorStr[theColor];
    return c;

}

void inputIntoArray(int l[], int size)
{
 for(int i = 0; i < size; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> l[i];
        while(!cin)
        {
            resetStream(cin);
            cout << "Enter a number: " << endl;
            cin >> l[i];
        } 
    }

}

void selectionSort(int list[], int size)
{
    for(int i = 0; i < size; i++) //(int i = size -1; i >= 0; i--)
    {
        int smallestPosition = i;
        for(int j = i + 1; j < size; j++)
        {
            if(list[j] < list[smallestPosition])
            {
                smallestPosition = j;
            }
        }
        int swap = list[i];
        list[i] = list[smallestPosition];
        list[smallestPosition] = swap;
    }
}

string toUpperCase(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}
void processRow(int row[], int size)
{
    for(int i = 0; i < size; i++)
    {
        row[i] = i;
    }
}