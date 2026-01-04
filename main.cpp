#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int enteredPin;
    double balance = 5000.0;
    int choice;
    double amount;

    cout << "--- ATM SYSTEM SIMULATION ---" << endl;
    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin) {
        while (true) {
            cout << "\n1. Check Balance\n2. Withdraw Cash\n3. Exit\nChoice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    cout << "Your Balance: $" << balance << endl;
                    break;
                case 2:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    if(amount <= balance) {
                        balance -= amount;
                        cout << "Success! Remaining: $" << balance << endl;
                    } else {
                        cout << "Error: Insufficient Funds!" << endl;
                    }
                    break;
                case 3:
                    cout << "Exiting... Thank you!" << endl;
                    return 0;
                default:
                    cout << "Invalid Option!" << endl;
            }
        }
    } else {
        cout << "Wrong PIN. Access Denied." << endl;
    }
    return 0;
}
