#include<iostream>
using namespace std;
int main(){
    int arr[] = {2 , 4 , 3, 5, 7};
    int n = 5 , sum = 7;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                cout << arr[i] << " " << arr[j] << "\n";
            }
        }
    }
    return 0;
}