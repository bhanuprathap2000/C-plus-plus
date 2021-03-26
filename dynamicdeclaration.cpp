#include <iostream>

using namespace std;

int main(){

    int a =5,b=10;
   

//we can use this feature to efficently use the variables which declaring them inside if only
//instaed we can wrap if with {} so that c will be visible only to that braces.
    if(int c=a+b;c>10){
        cout<<"Yahoo";
    }

    return 0;
}