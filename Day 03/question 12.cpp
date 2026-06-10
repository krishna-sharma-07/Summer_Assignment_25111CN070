// write a program to find LCM of two number //

#include<iostream>
using namespace std;

int main(){
    int a, b , gcd;
    cout << " enter the two number : ";
    cin >> a >> b ;
    int x = a , y = b ;
    while (y != 0){
        int temp = y ;
        y = x % y ;
        x = temp ;
    }
    gcd = x ;
    int lcm = (a*b)/gcd ;
    cout << " lcm is : " << lcm ;
    return 0 ;
}