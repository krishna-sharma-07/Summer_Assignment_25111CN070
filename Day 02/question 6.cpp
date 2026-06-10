//write a program to reverse a number //

#include<iostream>
using namespace std;

int main(){
    int num , reversed = 0 ;
    cout << "enter a number:";
    while (num != 0){
        int digit = num % 10;
        reversed = reversed *10 + digit ;
        num /= 10 ;
    }
    cout << " reversed number : " << reversed << "\n";
    return 0;
}