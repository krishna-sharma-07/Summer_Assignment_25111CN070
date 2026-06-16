#include<iostream>
using namespace std;
int main(){
    int arr[] = {1 , 3 , 2 , 1 , 4 , 1};
    int n= 6;
    int maxCount = 0, element;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j])
            count++;
        }
        if( count > maxCount){
            maxCount = count;
            element = arr[i];
        }
    }
    cout << "Max frequency element:" << element;
    return 0;
}