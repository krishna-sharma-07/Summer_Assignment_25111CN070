#include<iostream>
using namespace std;
int main(){
    string name;
    int roll , m1 , m2 , m3 , total;
    float percentage;
    cout << "enter student name: ";
    cin >> name;
    cout << "enter roll number";
    cin >> roll;
    cout << "enter marks of 3 subjects :";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    percentage = total / 3.0;
    cout << "\n------- student result -------\n";
    cout << "name : " << name << endl;
    cout << "roll no : "<< roll << endl;
    cout << "total : " << total << endl;
    cout << "percentage : " << percentage << "%" << endl;
    return 0;
}