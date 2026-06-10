//write a program to find largest prime factor //
#include<iostream>
using namespace std;
int main(){
    long long num;
    cout << " enter a number: ";
    cin >> num;
    long long largestfactor = -1;
    while (num % 2 == 0 ){
        largestfactor = 2;
        num /= 2;
    }
    for(long long i = 3 ; i*i <= num ; i += 2 ){
        while( num % i == 0){
            largestfactor = i;
            num /= i;
        }
    }
    if(num > 2){
        largestfactor = num;
    }
    cout << " largest prime factor = " << largestfactor;
    return 0;

}