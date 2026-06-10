// write a program to print armstrong number in a range //

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int start , end;
    cout << " enter start and end of range :";
    cin >> start >> end;
    for ( int i = start ; i <= end ; i++ ){
        int num = i;
        int sum = 0;
        int digits = 0;
        int temp = num;
        while (temp>0){
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp > 0){
            int digit = temp % 10;
            sum += pow(digit , digits);
            temp /= 10;
        }
        if (sum == num ){
            cout << num << " ";
        }
    }
    return 0;
}