#include<iostream>
using namespace std;
int main(){
    int balance = 10000;
    int choice , amount;
    cout << "1. check balance\n";
    cout << "2. deposit\n";
    cout << "3. withdraw\n";
    cout << "enter choice:";
    cin >> choice;
    if(choice == 1)
    {
        cout << "balance =" << balance;
    }
    else if(choice == 2)
    {
        cout << "enter amount:";
        cin >> amount;
        balance = balance + amount;
        cout << "new balance =" << balance;
    }
    else if(choice == 3)
    {
        cout << "enter amount:";
        cin >> amount;
        if(amount <= balance)
        {
            balance = balance - amount;
            cout << "new balance =" << balance;
        }
        else
        {
            cout << "insufficient balance";
        }
    }
    else
    {
        cout << "invalid choice";
    }   

        return 0;
}