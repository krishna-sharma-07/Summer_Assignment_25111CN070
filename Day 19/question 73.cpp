#include<iostream>
using namespace std;
int main(){
    int r , c;
    cout << "enter rows and columns:";
    cin >> r >> c;
    int A[r][c] , B[r][c] , sum[r][c];
    cout << "enter first matrix:\n";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin >> A[i][j];
    cout << "enter second matrix:\n";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin >> B[i][j];
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    sum[i][j] = A[i][j] + B[i][j];
    cout << "sum matrix:\n";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cout << sum[i][j] << " ";
    cout << "\n";
    return 0;
}