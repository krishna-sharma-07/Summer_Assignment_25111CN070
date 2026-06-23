#include<iostream>
using namespace std;
int main(){
    string s = "aabbbccde";
    int freq[256] = {0};
    for(int i = 0; i < s.length(); i++){
        freq[s[i]]++;
    }
    int maxFreq = 0;
    char result;
    for(int i = 0; i < s.length(); i++){
        if(freq[s[i]] > maxFreq){
            maxFreq = freq[s[i]];
            result = s[i];
        }
    }
    cout << "max occurring:" << result;
}