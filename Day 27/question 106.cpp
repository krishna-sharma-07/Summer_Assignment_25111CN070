#include<iostream>
using namespace std;
int main(){
    string name;
    int id;
    float salary;
    cout << "enter employee name:";
    cin >> name;
    cout << "enter employee id :";
    cin >> id;
    cout << "enter salary:";
    cin >> salary;
    cout << "\n-------employee details--------\n";
    cout << "name :" << name << endl;
    cout << "id :" << id << endl;
    cout << "salary : " << salary << endl;
    return 0;
}