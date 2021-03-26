

class Rectangle
{

    public:
            int length;
            int breadth;

            int area(){
                return length*breadth;
            }

            int perimeter(){
                return 2*(length+breadth);
            }


    
};

#include <iostream>

using namespace std;

int main(){

    Rectangle *p;//creating a pointer of type rectangle
    p= new Rectangle();//this is created in the heap section earlier it was created in stack section

    p->length=15;
    p->breadth=10;

    cout<<p->area(); //using -> operator we can accsses the members of object using the pointer to the object
    //using . we can accsess members of the object using the object name
    
    return 0;
}


