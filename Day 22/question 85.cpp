#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "enter string:";
    cin >> str;
    int start = 0, end = str.length() - 1;
    bool isPalindrome = true;
    while(start < end){
        if(str[start] != str[end]){
            isPalindrome = false; 
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome)
    cout << "palindrome";
    else
    cout << "not palindrome";
    return 0;
}