#include <iostream>

using namespace std;

int main(){

    int r,n,rev=0;
    cout<<"Enter the Number\n";
    cin>>n;

    while(n!=0){
        r=n%10; //to get the last digit
        rev=rev*10+r;
        n=n/10;

    }
    cout<<"The reverse of number  is "<<rev;
    return 0;
}