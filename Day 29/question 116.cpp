#include<iostream>
using namespace std;
int main(){
    string product;
    int quantity;
    float price;
    cout << "enter product name : ";
    cin >> product;
    cout << "enter quantity :";
    cin >> quantity;
    cout << "enter price :";
    cin >> price;
    cout << "\n-------- inventory details --------\n";
    cout << "product :" << product << endl;
    cout << "quantity :" << quantity << endl;
    cout << "price :" << price << endl;
    return 0;
}