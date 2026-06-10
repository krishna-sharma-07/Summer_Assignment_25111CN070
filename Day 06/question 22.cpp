// write a program to convert binary to decimal //
#include<iostream>
using namespace std;
int main(){
    int binary;
    cout << " enter a binary number: ";
    cin >> binary;
    int decimal = 0, base = 1, remainder;
    while(binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    cout << "decimal equivalent: " << decimal;
    return 0;
}