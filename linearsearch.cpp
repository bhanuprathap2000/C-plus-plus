#include <iostream>

using namespace std;

int main(){

    int a[]={10,20,30,40,50};
    int key;
    cout<<"Enter the key\n";
    cin>>key;

    for(int i=0;i<5;i++)
    {
        if (key==a[i])
        {
            cout<<"Element present";
            exit(0);


        }
        
        
    }
                cout<<"Element not present";

    

    return 0;
}