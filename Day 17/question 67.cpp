#include<iostream>
#include<set>
using namespace std;
int main(){
    int a[] = {1 , 2 , 3};
    int b[] = {2 , 3 , 4};
    set<int> s1(a , a+3);
    for(int i = 0; i < 3; i++)
    if(s1.count(b[i]))
    cout << b[i] << " ";
    return 0;
}