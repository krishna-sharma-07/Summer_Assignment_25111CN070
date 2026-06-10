// write a program to print multiplication table of a given number //

# include<iostream>
using namespace std;
int main(){
    int n , i ;
    cout << " enter a number for table ";
    cin >> n ; 
    for( i=1; i<=10; i++){
        cout << n << "x" << i << " = " << n*i << "\n" ;
    }
    return 0 ;
}