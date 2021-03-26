#include <iostream>

using namespace std;
int main(){
    int n,n1,rev=0,r;

    cout<<"Enter the number\n";
    cin>>n;
    n1=n;
    

    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;



    }

    if(n1==rev){
        cout<<n1<<" is a palindrome\n";
    }
    else{
        cout<<n1<<" is not a palindrome\n";
    }
    return 0;
}