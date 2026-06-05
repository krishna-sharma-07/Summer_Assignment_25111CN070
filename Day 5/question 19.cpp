// write a program to print factors of a number //
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << " enter a number: ";
    cin >> num;
    cout << " factors are: ";
    for ( int i = 1; i <= num; i++){
        if (num % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}