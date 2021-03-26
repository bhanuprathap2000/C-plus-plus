#include <iostream>

using namespace std;

int main(){

    int a[5]={1,2,3,4,5};

    int *p=a,*q=&a[4];


    // cout<<p<<endl;
    // cout<<p+1<<endl;
 
    //    p-1;
       cout<<q-p;
   


    return 0;
}