#include <iostream>
using namespace std;
int main(){
    string book;
    int id;
    cout  << "enter book name: ";
    cin >> book;
    cout << "enter book id: ";
    cin >> id;
    cout << "\n -------- library record -------- \n";
    cout << "book name : " << book << endl;
    cout << "book id : " << id << endl;
    cout << "book issued successfully.";
    return 0;
}