#include<iostream>
using namespace std;
int main(){
    char str[100];
    int count = 0;
    cout << "enter string:";
    cin >> str;
    while(str[count] != '\0'){
        count++;
    }
    cout << "length = " << count;
    return 0;
}