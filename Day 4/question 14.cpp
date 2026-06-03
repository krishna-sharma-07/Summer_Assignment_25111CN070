// write a program to find nth fibonacci series //

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << " enter the value of n: ";
    cin >> n;
    int a = 0 , b = 1 ;
    if( n==0 ) {
        cout << " fibonacci number at postion 0 is: 0 ";
    }
    else if ( n == 1){
        cout << " fibonacci number at postion 1 is : 1";
    }
    else {
        for (int i = 2 ; i<=n ; i++ ){
            int next = a + b ;
            a = b;
            b = next;
        }
        cout << " fibonacci number at postion " << n << " is : " << b ;
    }
    return 0;
    
}