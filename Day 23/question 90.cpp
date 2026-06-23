#include<iostream>
using namespace std;
int main(){
    string s = "abcdde";
    int freq[256] = {0};
    for(int i=0; i<s.length(); i++){
    freq[s[i]]++;
    if(freq[s[i]]>1){
        cout << "first repeating:" << s[i];
        break;
    }
}