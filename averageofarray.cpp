#include <iostream>

using namespace std;
int main(){

    int n,sum=0,avg;

    cout<<"Enter the number of elements in the array";

        cin>>n;
    int a[n];

    for (int i;i<n;i++){
        cout<<"Enter the element "<<i<<endl;
        cin>>a[i];
    }

    for(int x:a){
        sum=sum+x;
    }

    avg=(sum/n);

    cout<<"The average is "<<avg;

    return 0;
}