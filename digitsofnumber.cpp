#include <iostream>

using namespace std;

int main(){

    int r,n;
    cout<<"Enter the Number\n";
    cin>>n;

    while(n!=0){
        r=n%10; //to get the last digit
        cout<<r<<endl; // to reduce a number by a digit
        n=n/10;

    }
    return 0;
}