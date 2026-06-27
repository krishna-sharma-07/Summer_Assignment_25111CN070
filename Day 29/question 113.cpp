#include<iostream>
using namespace std;
int main(){
    int a , b, choice;
    cout << "enter two number : ";
    cin >> a >> b;
    cout << "\n1. addition";
    cout << "\n2. subtraction";
    cout << "\n3. multiplication";
    cout << "\n4. division";
    cout << "\n enter choice";
    cin >> choice;
    switch(choice)
    {
        case 1:
        cout << "result = " << a+b;
        break;
        case 2:
        cout << "result = " << a-b;
        break;
        case 3:
        cout << "result = " << a*b;
        break;
        case 4:
        if(b != 0)
        cout << "result = " << a/b;
        else
        cout << "division by zero not possible";
        break;
        default:
        cout << "invalid choice ";
    }
    return 0;
}