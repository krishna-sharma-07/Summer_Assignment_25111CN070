#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "enter sentence:";
    getline(cin , str);
    int count = 1;
    for(int i=0; i < str.length(); i++){
    if(str[i] == ' ')
    count++;
    }
    cout << "total words:" << count;
    return 0;

}