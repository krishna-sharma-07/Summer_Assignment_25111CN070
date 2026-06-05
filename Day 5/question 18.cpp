// write a program to check strong number //
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
    fact *=i;
    }
return fact;
}
int main(){
    int num , temp , sum = 0;
    cout << " enter a number: ";
    cin >> num;
    temp = num;
    while (temp > 0 ){
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num){
        cout << num << " is a strong number:";
    }
    else{
        cout << num << " is not a strong number:";
    }
    return 0;
}