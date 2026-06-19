#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout << "enter rows and columns:";
    cin >> r >> c;
    int A[r][c] , B[r][c] , sub[r][c];
    cout << "enter first matrix:";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin >> A[i][j];
    cout << "enter second matrix:";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin >> B[i][j];
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    sub[i][j] = A[i][j]-B[i][j];
    cout << "subtracted matrix:";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cout << sub[i][j] << " ";
    cout << "\n";
    return 0;
}