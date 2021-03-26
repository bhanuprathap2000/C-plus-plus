#include <iostream>

using namespace std;


int linearsearch(int A[],int key,int size){

    for(int i=0;i<size;i++){

        if(A[i]==key){
            cout<<"Found the element\n";
            return i;
        }


    }
    cout<<"Element not found\n";
    return -1;

}

int main(){

    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int key,index,size;
    size=10;

    cout<<"Enter the element to find";
    cin>>key;

    index=linearsearch(a,key,size);

    cout<<"Index "<<index;



    

    return 0;
}