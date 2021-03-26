#include <iostream>

using namespace std;
int main(){

    int N,fact=1;

    cout<<"Enter the Number\n";
    cin>>N;

    for(int i=1;i<=N;i++){

        fact=fact*i;
    }

    cout<<"Factoraial of "<<N<<" is "<<fact;

    return 0;
}