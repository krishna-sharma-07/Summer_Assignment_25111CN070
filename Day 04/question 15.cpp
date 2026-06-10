// write a program to check armstrong number //
 #include <iostream>
 #include <cmath>
 using namespace std;
int main(){
    int num , original , remainder , result = 0 , n = 0 ;
    cout << " enter a number : ";
    cin >> num;
    original = num;
    int temp = num;
    while ( temp != 0){
        temp /= 10;
        n++;
    }
    temp = num;
    while ( temp != 0 ){
        remainder = temp % 10;
        result += pow(remainder , n );
        temp /= 10;
    }
    if((int)result == num)
    cout << " armstrong number ";
    else 
    cout << "not armstrong ";
    return 0;


}