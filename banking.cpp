#include<iostream>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\t\t\tWelcome to NATIONAL BANK\n";
    cout << "\t\t\tAccess Granted\n";
    cout << "\t\t\t*Menu*\n";
    cout << "\t\t\t1. Transfer Money\n";
    cout << "\t\t\t2. Withdraw\n";
    cout << "\t\t\t3. Balance Inquiry\n";
    cout << "\t\t\t4. Exit\n";
    cout << "\tPlease choose an option: ";
}

// Function to display withdrawal options
void displayWithdrawalOptions() {
    cout << "How much money do you want to withdraw?\n";
    cout << "1. 500\n";
    cout << "2. 1000\n";
    cout << "3. 2000\n";
    cout << "4. 5000\n";
    cout << "5. Other amount\n";
}

int main() {
    int option, withdrawalOption, amount;
    int totalAmount = 10000;
    int password;

    cout << "Enter the password: ";
    cin >> password;

    // Password verification
    while (password != 1234) {
        cout << "Invalid password. Try again: ";
        cin >> password;
    }

    displayMenu();
    }

   