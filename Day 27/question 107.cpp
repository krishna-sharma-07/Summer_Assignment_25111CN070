#include<iostream>
using namespace std;
int main(){
    string name;
    float basic , bonus , total;
    cout << "enter employee name: ";
    cin >> name;
    cout << "enter basic salary: ";
    cout << "enter bonus: ";
    cin >> bonus;
    total = basic + bonus;
    cout << "\n------ salary details ------\n";
    cout << "employee :" << name << endl;
    cout << "basic salary :" << basic << endl;
    cout << "bonus :" << bonus << endl;
    cout << "total salary :" << total << endl;
    return 0;
}