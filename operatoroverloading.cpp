#include <iostream>

using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex operator+(Complex x){

        Complex temp;
        temp.real=this->real+x.real;
        temp.img=this->img+x.img;

        return temp;

    }

};

int main(){
    Complex c1,c2,c3;
    c1.real=5;
    c1.img=5;

    c2.real=5;
    c2.img=5;

    c3=c1+c2; // c3=c1.add(c2); this is nothing but c1.function(c2) since we replaced function by operator + hence that syntax can be used.

    cout<<c3.real<<"+i"<<c3.img;

    return 0;
}