#include<iostream>
#include<string>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenkeys ;
    for(int i =  0 ; i < correctPhrase.size()-1 ; i++)
    {
        if(correctPhrase[i] != actualTyped[i])
        {
            brokenkeys += correctPhrase[i];
            break;
        }
    }
    return brokenkeys;
}
int main()
{
    string correct; 
    string actual;
    string broke;
    cout<<"Enter the correct phrase: ";
    getline(cin, correct);
    cout<<"Enter what you actually typed: ";
    getline(cin, actual);

    broke = findBrokenKeys(correct , actual);
    cout<<"Broken keys: "<<broke;
}