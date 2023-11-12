#include <iostream>
using namespace std;

int coloringTime(string cols[], int size) {
  int colorSwitches = 0;

  for (int i = 0; i < size-1; i++) {
    if (cols[i] != cols[i+1]) {
      colorSwitches++;
    }
  }

  int totalTime = (size * 2) + colorSwitches;
  return totalTime;
}

int main() {
  int arraySize;
  cout << "Enter the size of Array: ";
  cin >> arraySize;

  string colorArray[arraySize];
  for (int i = 0; i < arraySize; i++) {
    cout << "Enter Element " << i + 1 << ": ";
    cin >> colorArray[i];
  }

  cout << "Time to color: " << coloringTime(colorArray, arraySize) << " seconds" << endl;

  return 0;
}
