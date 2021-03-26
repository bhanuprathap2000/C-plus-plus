#include <iostream>

using namespace std;

int swap(int *a,int *b){

    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
    
}

int main(){

    int a =5,b=10;
     swap(&a,&b);

     cout<<a<<endl;
     cout<<b<<endl;


    return 0;
}