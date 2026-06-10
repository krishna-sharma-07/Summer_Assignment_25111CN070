// write a program to check whether a number is prime //
#include<iostream>
using namespace std;
int main(){
    int n , i;
    bool isprime = true;
    cout << " enter a number : ";
    cin >> n;
    if(n<=1){
        isprime = false;
    }
    else{
        for(i=2 ; i<=n/2; i++){
            if (n% i ==0) {
                isprime = false;
                break;
            }
        }
    }
    if (isprime)
    cout << n << "is a prime number";
    else
    cout << n << " is not a prime number ";
    return 0;
}