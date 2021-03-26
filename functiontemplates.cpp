#include <iostream>

using namespace std;

template <class T>

T add(T x ,T y){

    return x>y?x:y;
}

int main(){
            
    cout<<add(2,1)<<endl;
    cout<<add(1.2f,4.3f);
    return 0;
}