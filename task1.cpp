#include<iostream>
using namespace std;

bool isEven(string arr) {
    int length = arr.length();
    return length % 2 == 0;
}

int main() {
    cout << "Enter a String: ";
    string arr;
    cin >> arr;
    cout << isEven(arr);

    return 0;
}
