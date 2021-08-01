//this is a preprocessor directive which tells the compiler to include the header file
#include <iostream>
#include "food.h"
using namespace std;


int main(){
    int c=sum(5,3);
    cout<<c;
    return 0;
}