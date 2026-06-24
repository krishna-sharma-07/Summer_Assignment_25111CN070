#include<iostream>
using namespace std;
int main(){
    string s1 = "abcde";
    string s2 = "cdeab";
    if(s1.length() == s2.length() && (s1 + s1).find(s2) != string :: npos)
    cout << "rotation hai";
    else
    cout << "rotation nahi hai";
    return 0;
}