#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    string train;
    cout << "enter passenger name :";
    cin >> name;
    cout << "enter age : ";
    cin >> age;
    cout << "enter train name :";
    cin >> train;
    cout << "\n--------- reservation details ---------\n";
    cout << "passenger : " << name << endl;
    cout << "age : " << age << endl;
    cout << "train : " << train << endl;
    cout << "ticket booked successfully." << endl;
    return 0;
}