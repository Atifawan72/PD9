#include <iostream>

using namespace std;

bool areAllElementsIdentical(string arr[], int size)
{
    if (size <= 1)
    {
        // If the array has 0 or 1 element, they are considered identical
        return true;
    }

    // Compare each element with the first element
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[0])
        {
            return false; // If any element is different, return false
        }
    }

    return true; // All elements are identical
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i + 1 << ": ";
        cin>>arr[i];
    }

    cout << areAllElementsIdentical(arr, size);
}