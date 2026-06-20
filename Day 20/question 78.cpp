#include<iostream>
using namespace std;
int main(){
    int n; 
    cout << "enter size of square matrix:";
    cin >> n;
    int A[n][n];
    cout << "enter matrix:\n";
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin >> A[i][j];
    bool isSymmetric = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i][j] != A[i][j]){
                isSymmetric = false;
                break;
            }
        }
    }
    if(isSymmetric)
    cout << "Symmetric matrix";
    else
    cout << "Not Symmetric";
    return 0;
}