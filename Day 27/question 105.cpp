#include<iostream>
using namespace std;
int main(){
    string name;
    int roll;
    float marks;
    cout << "enter name:";
    cin >> name;
    cout << "enter roll no:";
    cin >> roll ;
    cout << "enter marks";
    cin >> marks;
    cout << "\n -----student record------\n";
    cout << "name :" << name << endl;
    cout << "roll no :" << roll << endl;
    cout << "marks :" << marks << endl;
    return 0;
}