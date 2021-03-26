#include<iostream>
using namespace std;

class Student{

    private:
    int rollnumber;
    string name;
    int total=0;
    int a[3];

    public:

    int sum();
    int grade();
    int maths;
    int physics;
    int chemistry;

    Student(int rollnumber,string name,int m,int p,int c);


};

int Student::sum(){

    for(int x:a){
        total=total+x;

    }

    return total;
    
}

int Student::grade(){

    if(total>=30 && total<50){
        cout<<"C grade\n";
    }
    else if(total>=50 && total<70){
        cout<<"B grade \n";
    }
    else if(total>=70){
        cout<<"A grade\n";
    }
    else{
        cout<<"failed";
    }

    return 0;

}


Student::Student(int rollnumber,string name,int m,int p,int c){
    //this is a pointer to the current object 
    this->rollnumber=rollnumber;
    this->name=name;
    this->maths=m;
    this->physics=p;
    this->chemistry=c;
    this->total=this->maths+this->chemistry+this->physics;
    
}





int main(){
    int m,p,c;
    cout<<"Enter your marks";

    cin>>m>>p>>c;

    
    Student s(1,"bhanu prathap",m,p,c);

    s.grade();

    cout<<s.sum();



    return 0;
}