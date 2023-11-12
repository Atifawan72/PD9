#include <iostream>
#include <vector>

using namespace std;

void evenOddTransform(int arr[], int size, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] % 2 != 0)
            {
                arr[i] = arr[i] + 2;
            }
            else
            {
                arr[i] = arr[i] - 2;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];

    for (int j = 0; j < size; j++)
    {
        cout << "Enter Element " << j + 1 << ": ";
        cin >> arr[j];
    }

    int n;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    evenOddTransform(arr, size, n);

    // Print the transformed array in the specified format
    cout << "[";
    for (int j = 0; j < size - 1; j++)
    {
        cout << arr[j] << ", ";
    }
    if (size > 0)
    {
        cout << arr[size - 1];
    }
    cout << "]" << endl;

    return 0;
}
