#include <iostream>

using namespace std;

int main(){
     int N,sum=0;
    cout<<"Enter the N value\n";
     cin>>N;

     for(int i=1;i<=N;i++){

         sum=sum+i;

     }
     cout<<"Sum of First N numbers is "<<sum;
    return 0;
}