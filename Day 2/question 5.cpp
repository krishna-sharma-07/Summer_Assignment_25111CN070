// write a program to find sum of digit of a number //

#include<iostream>
using namespace std;
int sumofdigit(int n){
    int sum = 0;
    while(n >0){
        sum += n % 10;
        n /=10;
    }
    return sum ;
}
int main(){
    int num;
    cout << " enter a number :";
    cin >> num ;
    cout << " sum of digits :" << sumofdigit(num) << "\n";
    return 0 ;
}