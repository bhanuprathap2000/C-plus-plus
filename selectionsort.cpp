#include <iostream>

using namespace std;

int main(){
     
     int a[]={64,25,12,22,11};
     
     
   int min;

   for(int i=0;i<5;i++){

 
     for(int j=i;j<5;j++){
         if(a[j+1]<a[j]){
             min=a[j+1];
         }
     }
     a[i]=min;
  }

     

    return 0;
}