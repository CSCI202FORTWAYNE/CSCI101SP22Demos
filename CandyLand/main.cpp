#include <iostream>
#include <string>
#include <climits>
#include <cctype>
#include <cstdlib>

using namespace std;


const int DECK_SIZE = 60;
const int BOARD_SIZE = 135;
const int MAX_PLAYERS = 4;

enum colorType{RED, BLUE, GREEN, YELLOW, PURPLE, ORANGE};
const colorType colors[] = {RED, BLUE, GREEN, YELLOW, PURPLE, ORANGE};
const string colorName[] = {"Red", "Blue", "Green", "Yellow", "Purple", "Orange"};
const string colorStr[] = {"1m\033[38;5;196m\033[48;5;88m", 
"1;32;42m", 
"1;34;44m", 
"1;33;43m",
"1m\033[38;5;197m\033[48;5;53m",
"1m\033[38;5;214m\033[48;5;166m"};
const string ENDCOLOR = "\033[0m";

struct cardType
{
    colorType cardColor;
    bool isDouble = false;
};

struct playerType
{
    colorType color;
    int position;
};

struct deckType 
{
    cardType deck[DECK_SIZE];
    bool used[DECK_SIZE];
};

struct playerListType
{
    playerType playerList[MAX_PLAYERS];
    int numPlayers;
};


void resetStream(std::istream& input);
string toUpperCase(string s);
std::string colorToString(colorType theColor);
void generateBoard(colorType[], int);
colorType generateColor();
void printBoard(colorType b[],int numSpaces,  playerListType& list);
void generateDeck(deckType&);

int main()
{
    colorType board[BOARD_SIZE];
    playerListType l;
    deckType deck;
    generateBoard(board, BOARD_SIZE);
    printBoard(board, BOARD_SIZE, l);
    generateDeck(deck);
   

    
    

    return 0;
}

void resetStream(std::istream& input)
{
	input.clear();
	input.ignore(INT_MAX, '\n');
}



std::string colorToString(colorType theColor)
{
    string c = "\033[";
    if(theColor == -1)
    {
        c += "0m";
    } 
    else 
    {
        c += colorStr[theColor];
    }
    
    return c;

}



string toUpperCase(string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

void generateBoard(colorType board[], int boardSize)
{
    board[0] = static_cast<colorType>(-1);
    for(int i = 0; i < boardSize; i++)
    {
        board[i] = generateColor();
    }
}

colorType generateColor()
{
    colorType c;
    c = static_cast<colorType>(rand() % 6);
    return c;
}

void printBoard(colorType b[],int numSpaces,  playerListType& list)
{
    for(int i = 0; i < numSpaces; i++)
    {
        cout << colorToString(b[i]) << "[ " << " ]";
        cout << ENDCOLOR << " ";
        if((i + 1) % 5 == 0)
        {
            cout << endl << endl;
        }

    }
}

void generateDeck(deckType& theDeck)
{
    int deckCard = 0;
    for(int i = 0; i <= ORANGE; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            theDeck.deck[deckCard].cardColor = colors[i];
            theDeck.used[deckCard] = false;
            deckCard++;
        }
        for(int j = 0; j < 4; j++)
        {
            theDeck.deck[deckCard].cardColor = colors[i];
            theDeck.deck[deckCard].isDouble = true;
            theDeck.used[deckCard] = false;
            deckCard++;
        }

    }
}