#include <iostream>
#include <string>
using namespace std;

int commonchar(string arr1, string arr2)
{
    int c = 0;

    for (int i = 0 ; i < arr1.size()-1 ; i++)
    {
        for (int j = 0; j < arr2.size()-1; j++)
        {
            if (arr1[i] == arr2[j])
            {
                c++;
                break; 
            }
        }
    }

    return c;
}

int main()
{
    string ch1;
    string ch2;

    cout << "Enter the first string: ";
    cin >> ch1;
    cout << "Enter the second string: ";
    cin >> ch2;

    cout << "Number of common characters: " << commonchar(ch1, ch2) << endl;

    return 0;
}
