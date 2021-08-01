#include <iostream>

using namespace std;

int main(){
    int pocketmoney=3000;

    for(int i=1;i<=30;i++){
        if(i%2==0){
            continue;
        }

        
        cout<<"I am going out\n"<<pocketmoney<<endl;
        pocketmoney=pocketmoney-300;
        if(pocketmoney==0){
            break;
        }
        
    }
    
    return 0;
}