#include <iostream>

using namespace std;

int main(){

    int a[]={1,2,3,4,5};
    int sum=0;

    for(int x:a){
        sum=sum+x;
    }

    cout<<sum;


    return 0;
}