#include<iostream>
using namespace std;
int main(){
    int n , arr[100] , key;
    cout << "enter size:";
    cin >> n;
    for(int i=0; i<n; i++)
    cin >> arr[i];
    cout << "enter element to search:";
    cin >> key;
    int low = 0 , high = n-1;
    while(low <= high){
        int mid = (low + high) /2;
        if(arr[mid] == key){
            cout << "found at index" << mid;
            return 0;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    cout << "not found";
    return 0;
}