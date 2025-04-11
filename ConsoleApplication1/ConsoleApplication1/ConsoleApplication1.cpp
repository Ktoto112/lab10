#include <iostream>
#include <string>
using namespace std;


struct Transistor {
    string name;        
    float power;        
    float maxCurrent;   
    int quantity;       
};

int main() {
    const int SIZE = 4; 
    Transistor transistors[SIZE];

    
    cout << "Enter transistor data:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\ntransistor " << i + 1 << ":\n";
        cout << "name: ";
        cin >> transistors[i].name;
        cout << "Power (Вт): ";
        cin >> transistors[i].power;
        cout << "Max. current (А): ";
        cin >> transistors[i].maxCurrent;
        cout << "Number: ";
        cin >> transistors[i].quantity;
    }

  
    cout << "\nList of transistors:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "name: " << transistors[i].name
            << ", Power: " << transistors[i].power << " Вт"
            << ", Max. current: " << transistors[i].maxCurrent << " А"
            << ", Number: " << transistors[i].quantity << "\n";
    }

    
    int maxIndex = 0;
    for (int i = 1; i < SIZE; i++) {
        if (transistors[i].power > transistors[maxIndex].power) {
            maxIndex = i;
        }
    }

   
    transistors[maxIndex].quantity = 200;

    
    cout << "\nTransistor with maximum power:\n";
    cout << "name: " << transistors[maxIndex].name
        << ", power: " << transistors[maxIndex].power << " Вт"
        << ", Max. current: " << transistors[maxIndex].maxCurrent << " А"
        << ", number: " << transistors[maxIndex].quantity << "\n";

    return 0;
}
