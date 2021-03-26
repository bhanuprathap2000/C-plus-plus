#include <iostream>

using namespace std;

int swap(int a ,int b){
    int temp;
    //only the variables inside swap are swapped as it is pass by value or call by value formal parameters get
    //actual parameters value(just a copy)
    temp=a;
    a=b;
    b=temp;
    return 0;
}

int main(){

    int x,y;
    x=5;
    y=10;

    swap(x,y);

    cout<<x<<" "<<y;


    return 0;
}