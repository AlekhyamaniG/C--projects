#include <iostream>

using namespace std;

int main(){

    double a,b;
    char ope;
    cout<<" enter the value of a";
    cin>> a;
    cout << "enter the value of b";
    cin>> b;
    cout << "enter the operation + or * or - or /";
    cin>> ope;
    switch(ope){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;

    }
   
}
