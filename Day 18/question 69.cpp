#include<iostream>
using namespace std;
int main(){
    int n , arr[100];
    cout << "enter size: ";
    cin >> n;
    cout << "enter wlement: \n";
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    cout << "sorted array:\n";
    for(int i=0; i<n; i++)
    cout << arr[i] << " ";
    return 0;
}