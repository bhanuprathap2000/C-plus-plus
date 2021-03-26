#include <iostream>

using namespace std;

int add(int x,int y){

    return x+y;
}

float add(float x,float y){
    return x+y;
}

int add(int x,int y,int z){
    return (x+y+z);
}
int main(){
    cout<<add(1,2)<<endl;
    cout<<add(1.2f,1.2f)<<endl;
    cout<<add(1,2,3);
    return 0;
}