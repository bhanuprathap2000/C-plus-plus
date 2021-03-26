#include <iostream>

using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter the numbers";
    cin>>num1>>num2;
    if (num2==0)
    cout<<"Cant divide by zero";
    else
    cout<<(num1/num2);
    return 0;
}