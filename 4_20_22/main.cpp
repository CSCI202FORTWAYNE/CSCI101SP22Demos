#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_CANDIDATES = 10;

struct candidateType 
{
    string name;
    int votes;
    double percent;
};

struct ballotType
{
    candidateType candidateList[MAX_CANDIDATES];
    int numCandidates = 0;
};

candidateType inputCandidate(ifstream&);
void calculatePercents(ballotType&, int&);
void outputCandidate(candidateType);
void findWinner(ballotType&, int&);


int main()
{
    ifstream infile;
    infile.open("ballot.txt");
    ballotType ballot;
    for(int i = 0; !infile.eof() && i < MAX_CANDIDATES; i++)
    {
        ballot.candidateList[i] = inputCandidate(infile);
        ballot.numCandidates++;
    }
    int totalVotes = 0, winner;
    calculatePercents(ballot, totalVotes);
    findWinner(ballot, winner);
    
    cout << showpoint << setprecision(2) << fixed;
    cout << left << setw(10) << "Candidate" << right << "   " << setw(10) << "Votes Received" << "   " << setw(15) << "% of Total Votes" << endl;
    for(int i = 0; i < ballot.numCandidates; i++)
    {
        outputCandidate(ballot.candidateList[i]);
    }
    cout << left;
    cout << setw(19) << "Total" << totalVotes << endl;
    cout << "The Winner of the Election is " << ballot.candidateList[winner].name << "." << endl;

    
    return 0;
}

candidateType inputCandidate(ifstream& infile)
{
    candidateType theCandidate;
    infile >> theCandidate.name;

    cout << "Enter the total votes for " << theCandidate.name << ": ";
    cin >> theCandidate.votes;
    cout << endl;
    while(!cin || theCandidate.votes < 0)
    {
        if(!cin)
        {
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cout << "That is not a valid number of votes." << endl;
        cout << "Enter the total votes for " << theCandidate.name << ": ";
        cin >> theCandidate.votes;
        cout << endl;
    }
    return theCandidate;

}

void calculatePercents(ballotType& b, int& totalVotes)
{
    totalVotes = 0;
    for(int i = 0; i < b.numCandidates; i++)
    {
        totalVotes += b.candidateList[i].votes;
    }
    for(int i = 0; i < b.numCandidates; i++)
    {
        b.candidateList[i].percent = static_cast<double>(b.candidateList[i].votes) / totalVotes;
    }
}
void outputCandidate(candidateType theCandidate)
{
    cout << left << setw(10) << theCandidate.name
         << right << "   " << setw(10) << theCandidate.votes << "   " << setw(15)
         << theCandidate.percent * 100
         << endl;
}

void findWinner(ballotType& b, int& winner)
{
    winner = 0;
    for(int i = 1; i < b.numCandidates; i++)
    {
        if(b.candidateList[winner].percent <  b.candidateList[i].percent)
        {
            winner = i;
        }
    }
}