// write a program to generate fibonacci series //

#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "enter the number of terms : ";
    cin >> n;
    int a = 0 , b = 1 ;
    cout << " fibonacci series : ";
    for ( int i = 0 ; i < n ; i++ ){
        cout << a << " ";
        int next = a + b;
        a = b;
        b= next;
    }
    return 0;
}