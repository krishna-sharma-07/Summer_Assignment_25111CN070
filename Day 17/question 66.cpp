#include<iostream>
#include<set>
using namespace std;
int main(){
    int a[] = {1 , 2 , 3};
    int b[] = {2 , 3 , 4};
    set <int> s;
    for(int i = 0; i < 3; i++)
     s.insert(a[i]);
    for(int i = 0; i < 3; i++) 
    s.insert(b[i]);
    set<int>::iterator it;
    for( it = s . begin(); it != s. end(); it++)
    cout << *it << " ";
    return 0;
}