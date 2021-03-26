#include <iostream>

using namespace std;

int main(){

    int r,n,sum=0;
    cout<<"Enter the Number\n";
    cin>>n;

    while(n!=0){
        r=n%10; //to get the last digit
        sum=sum+r;
        n=n/10;

    }
    cout<<"The sum is "<<sum;
    return 0;
}