#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "enter your age:";
    cin>>age;
    if(age>=18)
    cout << "eligible for voting.";
    else
    cout<< "not eligible for voting.";
    return 0;
}