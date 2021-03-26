#include <iostream>

using namespace std;

int main(){

    float bill;
    cout<<"Enter your bill\n";
    cin>>bill;

    if(bill<=100){
        cout<<"Your bill is less than or equal to 100 sorry no discount";
    }
    else if(bill>100 && bill<=500){
        float discountedbill=bill-bill*0.1;
        cout<<"Thank for purchasing you have got 10% discount and your bill is "<<discountedbill;

    }
    else{
        float discountedbill=bill-bill*0.2;
        cout<<"Thank for purchasing you have got 20% discount and your bill is "<<discountedbill;
    }

    return 0;
}