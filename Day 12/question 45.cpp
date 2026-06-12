#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int original = n, reverse = 0;
    while (n > 0){
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    return original == reverse;
}
int main(){
    int n;
    cin >> n;
    if (ispalindrome(n))
    cout << "palindrome =";
    else
    cout << " not palindrome =";
    return 0;
}