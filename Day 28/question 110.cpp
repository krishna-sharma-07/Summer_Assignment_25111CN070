#include<iostream>
using namespace std;
int main(){
    string name;
    int accno;
    float balance;
    cout << "enter account holder name : ";
    cin >> name;
    cout << "enter account number : ";
    cin >> accno;
    cout << "enter initial balance : ";
    cin >> balance;
    cout << "\n -------- account details --------\n";
    cout << "name : " << name << endl;
    cout << "account no : "<< accno << endl;
    cout << "balance : "<< balance << endl;
    return 0;
}