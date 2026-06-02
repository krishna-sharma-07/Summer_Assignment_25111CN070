// write a program to find product of digits //

#include<iostream>
using namespace std;
int main (){
    int num , digit ;
    int product = 1;
    cout << "enter a number :";
    cin >> num;
    while (num > 0){
        digit = num % 10;
        product = product * digit;
        num = num /10 ;
    }
    cout << "product of digit = " << product;
    return 0;
}
