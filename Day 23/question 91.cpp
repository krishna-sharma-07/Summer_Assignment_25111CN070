#include<iostream>
using namespace std;
int main(){
    string s1 = "listen";
    string s2 = "silent";
    if(s1.length() != s2.length()){
        cout <<"not Anagram";
        return 0;
    }
    int freq[256] = {0};
    for(int i = 0; i < s1.length(); i++){
    freq[s1[i]]++;
    freq[s2[i]]--;
    }
    for(int i = 0; i <256; i++){
    if(freq[i] != 0){
        cout << "not Anagram";
        return 0;
    }
    }
    cout << "Anagram";
}