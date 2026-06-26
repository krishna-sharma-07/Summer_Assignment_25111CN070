#include<iostream>
using namespace std;
int main(){
    int secret = 7, guess;
    cout << "guess the number (1-10):";
    cin >> guess;
    if(guess == secret)
    cout << "correct! you win.";
    else
    cout << "wrong! correct number is " << secret;
    return 0;
}