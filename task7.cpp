#include <iostream>
#include <string>

using namespace std;

void convertPINToDance(string pin) {
    const string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    
    if (pin.length() != 4 || !isdigit(pin[0]) || !isdigit(pin[1]) || !isdigit(pin[2]) || !isdigit(pin[3])) {
        cout << "Invalid input." << endl;
        return;
    }

    for (int i = 0; i < 4; ++i) {
       
        int digit = pin[i] - '0';

       
        int index = (digit + i) % 10; 

        // Output the corresponding dance move
        cout << MOVES[index] << (i < 3 ? ", " : "");
    }

    cout << endl; 
}

int main() {
    string pin;

    cout << "Enter your PIN (4 digits): ";
    cin >> pin;

    convertPINToDance(pin);

    return 0;
}
