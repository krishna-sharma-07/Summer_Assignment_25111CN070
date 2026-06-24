#include<iostream>
using namespace std;
int main(){
    string str = "i love programming very much";
    string word = "", maxWord ="";
    for(int i = 0; i <=str.length(); i++){
        if(str[i] != ' ' && i != str.length()){
            word+=str[i];
        }else{
            if(word.length()> maxWord.length())
            maxWord = word;
            word = " ";
        }
    } 
    cout << "longest word: " << maxWord;
    return 0;
}