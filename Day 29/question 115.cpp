#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int choice;
    cout << "enter string :";
    cin >> str;
    cout << "\n1. length";
    cout << "\n2. display";
    cout << "\n enter choice";
    cin >> choice;
    switch(choice)
    {
        case 1:
        cout << "length = " << str.length();
        break;
        case 2:
        cout << "string = " << str;
        break;
        default:
        cout << "invalid choice ";

    }
    return 0;
}