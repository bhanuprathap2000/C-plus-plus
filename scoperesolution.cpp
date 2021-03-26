class Reactangle{

    private :
    int length;
    int breadth;

    public:
    //constructer functions
    Reactangle();
    Reactangle(int l,int b);
    Reactangle(Reactangle &rect);

    //mutator functions

    void setLength(int l);
    void setBreadth(int b);

    //accessor functions

    int getLength(){return length;};
    int getBreadth(){return breadth;};
     
     //facilitator functions
    int area();
    int perimeter();
     
     //enquiry functions

    bool isSquare();

    //destructor functions

    ~Reactangle();





};


Reactangle::Reactangle(){
    length=1;
    breadth=1;
}

Reactangle::Reactangle(int l,int b){
    length=l;
    breadth=b;
}

void Reactangle::setLength(int l){

    length=l;
}

void Reactangle::setBreadth(int b){
    breadth=b;
}

int Reactangle::area(){
    return (length*breadth);
}

int Reactangle::perimeter(){

    return 2*(length+breadth);
}

Reactangle::~Reactangle(){
   
}

bool Reactangle::isSquare(){
    if(length==breadth){
        return true;
    }
    else{
        return false;
    }
}

#include <iostream>

using namespace std;

int main(){

    Reactangle r(10,15);
    
    cout<<r.area()<<endl;

    if(r.isSquare()){
        cout<<"yes it is a square";
    }
    else{
        cout<<"Not is not a square";
    }

   

    return 0;
}