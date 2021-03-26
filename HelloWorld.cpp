#include <iostream>


using namespace std;

int main(){


float basic;

float allowances;

float deductions;

cout<<"Enter your basic allowances and deductions"<<endl;

cin>>basic>>allowances>>deductions;

cout<<basic<<endl<<allowances<<endl<<deductions<<endl;


float netsalary=basic+(basic*allowances)/100-(basic*deductions)/100;

cout<<"Your net income is "<<netsalary;




     
}