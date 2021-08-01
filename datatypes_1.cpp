#include <iostream>

using namespace std;

int main(){

    int a;
    float b;
    double c;
    char letter;
    bool isLogin;



   //type modifiers
    unsigned int d;


    short int e;

    long int f;

    cout<<sizeof(isLogin)<<endl;
    cout<<sizeof(letter)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;//only range of value changes size remains the same
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;



    return 0;
}