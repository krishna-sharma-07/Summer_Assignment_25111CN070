#include<iostream>
using namespace std;
 int main(){
    string name;
    int seats;
    cout << "enter name:";
    cin >> name;
    cout << "enter number of seats:";
    cin >> seats;
    cout << "\n ------- ticket details ------- \n";
    cout << "passenger : " << name << endl;
    cout << "seats booked : " << seats << endl;
    cout << "booking successfully.";
    return 0;
 }