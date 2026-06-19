#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of square matrix:";
    cin >> n;
    int A[n][n];
    int sum = 0;
    cout << "enter matrix:\n";
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    cin >> A[i][j];
    for(int i=0; i<n; i++)
    sum +=A[i][i] ;
    cout << "diagonal sum =" << sum ;
    return 0;
}