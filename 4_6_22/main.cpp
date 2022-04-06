#include <iostream>
#include <string>
#include <climits>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;


enum colorType{RED, BLUE, GREEN, YELLOW, PURPLE};
void resetStream(std::istream& input);
colorType inputColor();
std::string colorToString(colorType);

int main()
{
    colorType myColor = GREEN;
    myColor = inputColor();

    std::cout << "My color is " << colorToString(myColor) << std::endl;
    std::cout << "Another color is " << colorToString(static_cast<colorType>(47)) << std::endl;
    

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
    cout << RED << ". Red" << endl;
    cout << BLUE << ". Blue" << endl;
    cout << GREEN << ". Green" << endl;
    cout << YELLOW << ". Yellow" << endl;
    cout << PURPLE << ". Purple" << endl;
    cin >> inputColor;
    while(!std::cin ||inputColor < RED || inputColor > PURPLE)
    {
        if(!cin)
        {
            resetStream(cin);
        }
        cout << "That is not a valid color choice." << endl;
        cout << "Enter a color: " << endl;
        cout << RED << ". Red" << endl;
        cout << BLUE << ". Blue" << endl;
        cout << GREEN << ". Green" << endl;
        cout << YELLOW << ". Yellow" << endl;
        cout << PURPLE << ". Purple" << endl;
        cin >> inputColor;
    }

    switch(inputColor)
    {
        case RED: 
            myColor = RED; //if(inputColor == RED)
            break;
        case GREEN:
            myColor = GREEN;
            break;
        case BLUE:
            myColor = BLUE;
            break;
        case YELLOW:
            myColor = YELLOW;
            break;
        case PURPLE:
            myColor = PURPLE;
            break;
        default:
            cout << "The color is invalid.  The color is set to Red." << endl;
            myColor = RED;
            break;
    }
    return myColor;
}


std::string colorToString(colorType theColor)
{
    string colorStr = "";
    switch(theColor)
    {
        case RED: 
            colorStr =  "Red";
            break;
        case GREEN:
            colorStr = "Green";
            break;
        case BLUE:
            colorStr =  "Blue";
            break;
        case YELLOW:
            colorStr = "Yellow";
            break;
        case PURPLE:
            colorStr = "Purple";
            break;
        default:
            colorStr = "Unknown";
            break;
    }
    return colorStr;

}