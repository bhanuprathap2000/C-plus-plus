#include <iostream>

using namespace std;

int main(){

    int N;
    cout<<"Enter the Number\n";

    cin>>N;

    for(int i=1;i<=N;i++){

        if(N%i==0){
            cout<<i<<" is a factor of "<<N<<endl;
        }
    }

    return 0;
}