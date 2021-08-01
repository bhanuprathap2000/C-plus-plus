#include<iostream>

using namespace std;

int main(){
    
    int n1,n2;
    cout<<"Enter the number\n";
    cin>>n1>>n2;

    char op;
    cout<<"Enter the operator\n";
    cin>>op;

    switch(op){
        case '+':
                cout<<n1+n2;
                break;
        case '-':
               cout<<n1-n2;
               break;
        case '*':
               cout<<n1*n2;
               break;
        case '/':
            cout<<n1/n2;
            break;
        default :
             cout<<"Enter a valid operator";
             break;
    }
    return 0;
}