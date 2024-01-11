
#include <iostream>
using namespace std;


int main()
{
    
    int deposit, withdraw, choice, toContinue;
    int balance = 1000;

    do {

        cout << "MENU\n";
        cout << "\n1. Withdraw \n2. Deposit \n3.Exit\n";
        cout << "Enter a choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nWithdraw\n";
        }
        else if (choice == 2) {
            cout << "\nDeposit\n";
        }
        else if (choice == 3) {

            return 0;

        }
   
        switch (choice) {
        case 1:
            cout << "\nWithdraw - How much would you like to withdraw? ";
            cin >> withdraw;
            balance -= withdraw;
            cout << "Your new balance after withdrawing " << withdraw << " will be " << balance;
                break;
        case 2:
            cout << "\nDeposit - How much would you like to deposit? ";
            cin >> deposit;
            balance += deposit;
            cout << "\nYour new balance after depositing " << deposit << " will be " << balance;
            break;
        case 3:
            cout << "\nExit";
            break;
        default:
            cout << "Invalid Output";
        }

        cout << "\n\nDo you want to make another transaction?\n"
            << "Press any number to continue\n"
            << "Press 0 to Exit\n";
        cin >> toContinue;
   
    } while (toContinue != 0);

       return 0;
}

