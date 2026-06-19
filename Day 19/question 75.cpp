#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout << "enter rows and columns:";
    cin >> r >> c;
    int A[r][c];
    cout << "enter matrix:\n";
    for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
    cin >> A[i][j];
    cout << "transpose matrix:\n";
    for(int i=0; i<c; i++)
    for(int j=0; j<r; j++)
    cout << A[i][j] << " ";
    cout << "\n";
    return 0;

}