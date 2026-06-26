#include<iostream>
using namespace std;
int main(){
    int score = 0, ans;
    cout << "Q1. capital of india\n";
    cout << "1. delhi\n 2. mumbai\n 3. chennai\n";
    cin >> ans;
    if (ans == 1)
    score++;
    cout << "Q2. 5+5 = ?\n";
    cout << "1. 8\n 2. 10\n 3. 12\n";
    cin >> ans;
    if(ans == 2)
    score++;
    cout << "Q3. c++ is a\n";
    cout << "1. programming language\n 2. game\n 3. browser";
    cin >> ans;
    if (ans == 1)
    score++;
    cout << "your score = " << score << "/3";
    return 0;
}