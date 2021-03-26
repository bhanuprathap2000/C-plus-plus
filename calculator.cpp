#include <iostream>

using namespace std;

int main(){

    int option,a,b,c;

    cout<<"Enter the option\n 1.Add\n 2.Sub \n 3.Mul \n 4 Div\n";
    cin>>option;
    cout<<"Enter the two numbers";
    cin>>a>>b;

    switch(option){

        case 1:cout<<(c=a+b);
               break;
        case 2:cout<<(c=a-b);
               break;
        case 3:cout<<(c=a*b);
               break;
        case 4:cout<<(c=a/b);
               break;
        
    }


    return 0;
}