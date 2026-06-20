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
    for(int j=0; j<c; j++){
        int sum =0;
         for(int i=0; i<r; i++){
            sum += A[i][j];
         }
         cout << "sum of column " << j+1 << " = " << sum << "\n";
    }
    return 0;
}