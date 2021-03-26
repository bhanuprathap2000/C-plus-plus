#include <iostream>

using namespace std;

int main(){

    int a=15;

    int &b=a;
    //b is the another name to the a 
    
    a++;
    cout<<a<<endl;
    b++;
    cout<<b<<endl;

    return 0;
}