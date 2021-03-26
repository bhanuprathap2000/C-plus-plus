#include <iostream>

using namespace std;

int swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}

int main(){

    int x=5,y=10;

    swap(x,y);

    cout<<x<<endl;
    cout<<y<<endl;



    return 0;
}