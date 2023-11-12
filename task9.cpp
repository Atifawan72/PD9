#include <iostream>
using namespace std;
bool valword(string word);
string findlongest(string wordList[], int numWords);


main()
{
    int numWords;
    cout << "Enter the number of words: ";
    cin >> numWords;
    string words[numWords];
    cout << "Enter the words, one by one:" << endl;
    for (int i = 0; i < numWords; i++)
    {
        cin >> words[i];
    }
    string result = findlongest(words, numWords);
    if (result.empty())
    {
        cout << "" << endl;
    }
    else
    {
        cout << "Longest 7-segment word: " << result << endl;
    }
}
bool valword(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        char character = word[i];
        if (character == 'k' || character == 'm' || character == 'v' || character == 'w' || character == 'x')
        {
            return false;
        }
    }
    return true;
}
string findlongest(string wordList[], int numWords)
{
    string largestWord;
    for (int i = 0; i < numWords; i++)
    {
        if (valword(wordList[i]) && wordList[i].length() > largestWord.length())
        {
            largestWord = wordList[i];
        }
    }
    return largestWord;
}

