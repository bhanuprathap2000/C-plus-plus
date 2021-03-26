#include <iostream>

using namespace std;

int add(int x=0,int y=0,int z=0){

    return (x+y+z);
}

int main(){

    cout<<add(12,12)<<endl;
    cout<<add(12);

     
    return 0;
}