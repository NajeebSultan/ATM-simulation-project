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
do {
        cin >> option;
        switch (option) {
            case 1: {
                cout << "Transaction Statement\n";
                int accountNumber;
                cout << "Enter the account number: ";
                cin >> accountNumber;

                if (accountNumber == 123456789) {
                    int bankOption;
                    cout << "Please select the bank:\n";
                    cout << "1. HBL\n2. Meezan\n3. MCB\n4. Allied\n";
                    cin >> bankOption;

                    cout << "How much money do you want to transfer?\n";
                    displayWithdrawalOptions();
                    cin >> withdrawalOption;

                    switch (withdrawalOption) {
                        case 1:
                            amount = 500;
                            break;
                        case 2:
                            amount = 1000;
                            break;
                        case 3:
                            amount = 2000;
                            break;
                        case 4:
                            amount = 5000;
                            break;
                        case 5:
                            cout << "Enter the amount to transfer: ";
                            cin >> amount;
                            break;
                        default:
                            cout << "Invalid option!\n";
                            continue;
                    }

                    if (amount <= totalAmount) {
                        totalAmount -= amount;
                        cout << "You transferred Rs. " << amount << ".\nRemaining balance: Rs. " << totalAmount << "\n";
                    } else {
                        cout << "Not enough balance.\n";
                    }
                } else {
                    cout << "Invalid account number.\n";
                }
                break;
            }

            case 2: {
                displayWithdrawalOptions();
                cin >> withdrawalOption;

                switch (withdrawalOption) { //Withdrawal payment option
                    case 1:
                        amount = 500;
                        break;
                    case 2:
                        amount = 1000;
                        break;
                    case 3:
                        amount = 2000;
                        break;
                    case 4:
                        amount = 5000;
                        break;
                    case 5:
                        cout << "Enter the amount to withdraw: ";
                        cin >> amount;
                        break;
                    default:
                        cout << "Invalid option!\n";
                        continue;
                }

                if (amount <= totalAmount) {
                    totalAmount -= amount;
                    cout << "You withdrew Rs. " << amount << ".\nRemaining balance: Rs. " << totalAmount << "\n";
                } else {
                    cout << "Not enough balance.\n";
                }
                break;
            }

            case 3:
                cout << "Your total balance is: Rs. " << totalAmount << "\n";
                break;

            case 4:
                cout << "Exiting. Thank you for using our service!\n";
                break;

            default:
                cout << "Invalid option. Please try again.\n";
                displayMenu();
        }
 } while (option != 4);

    return 0;
}
  