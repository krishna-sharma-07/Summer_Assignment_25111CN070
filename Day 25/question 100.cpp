#include<iostream>
using namespace std;
int main(){
    string words[] = {"apple" , "cat" , "banana" , "dog"};
    int n = 4;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(words[i].length() > words[j].length()){
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    cout << words[i] << endl;
    return 0;
}