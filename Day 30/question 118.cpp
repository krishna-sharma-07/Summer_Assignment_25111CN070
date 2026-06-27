#include<iostream>
using namespace std;
int main(){
    string patient;
    int age;
    string disease;
    cout << "enter patient name : ";
    cin >> patient ;
    cout << "enter age: ";
    cin >> age;
    cout << "enter disease";
    cin >> disease;
    cout << "\n------- patient disease ----------\n";
    cout << "name : " << patient << endl;
    cout << "age : " << age << endl;
    cout << "disease :" << disease << endl;
    return 0;
}