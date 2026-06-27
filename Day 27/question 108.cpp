#include <iostream>
using namespace std;
int main(){
    string name;
    int m1 , m2 , m3;
    int total;
    float percentage;
    cout << "enter student name:";
    cin >> name;
    cout << "enter marks of 3 subjects:";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    percentage = total / 3.0;
    cout << "\n-------- marksheet -------\n";
    cout << "name: " << name << endl;
cout << "total marks: " << total << endl;
cout << "percentage: " << percentage << endl;
if (percentage >= 90)
cout << "grade : a+";
else if (percentage >= 75)
cout << "grade : a";
else if (percentage >= 60)
cout << "grade : b";
else if (percentage >= 40)
cout << "grade : c";
else 
cout << "grade : fail";
return 0;}