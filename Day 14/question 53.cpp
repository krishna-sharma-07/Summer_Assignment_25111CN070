#include<iostream>
using namespace std;
int main(){
    int n , key , found = -1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;
    for (int i = 0; i < n; i++){
        if(arr[i] == key) {
            found = i;
            break;
        }
    }
    cout << found;
    return 0;
}