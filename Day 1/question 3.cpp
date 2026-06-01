// write a program in find factorial of a number //

#include<iostream>
using namespace std;
int main(){
    int n , i ;
    long long factorial = 1;
    cout << " enter a number : ";
    cin >> n;
    for ( i = 1 ; i <= n ; i++ ){
        factorial = factorial * i ;
    }
    cout << " factorial of " << n << " = " << factorial ;
    return 0 ;
}