#include<iostream>
using namespace std;
int main(){
    string name;
    int room , days;
    float rent , total;
    cout << "enter customer name : ";
    cin >> name;
    cout << "enter room number : ";
    cin >> room;
    cout << "enter number of days : ";
    cin >> days;
    cout << "enter rent per day:";
    cin >> rent;
    total = rent * days;
    cout << "\n-------- booking details ----------\n";
    cout << "customer : " << name << endl;
    cout << "room no : " << room << endl;
    cout << "total bill : " << total << endl;
    return 0;
}