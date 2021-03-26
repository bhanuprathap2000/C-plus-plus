#include <iostream>

using namespace std;

int main(){

    int day;
    cout<<"Enter the day number";
    cout<<"Sun-0 Mon-1 Tue-2 and similarly sat-6";
    cin>>day;

    if(day==0)
    cout<<"Sunday";
    else if(day==1)
    cout<<"Monday";
    else if(day==2)
    cout<<"Tuesday";
    else if(day==3)
    cout<<"wednesday";
    else if(day==4)
    cout<<"thursday";
    else if(day==5)
    cout<<"friday";
    else if(day>6)
    cout<<"Enter a valid week day";
    else 
    cout<<"saturday";

    return 0;
}