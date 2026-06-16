#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {1 , 2 , 4 , 5};
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        sum += arr[i];
    }
    cout << "Missing number:" << total - sum;
    return 0;
}