#include <iostream>

using namespace std;

int main(){

    int N;
    cout<<"Enter the Number";
    cin>>N;

    for (int i=2;i<N;i++){

        if(N%i==0){
            cout<<N<<" Not a prime number"<<endl;
            break;
        }
        else{
            cout<<N<<" is a Prime number"<<endl;
            break;
        }
    }

    return 0;
}