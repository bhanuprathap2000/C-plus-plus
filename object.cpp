

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

    Rectangle r1;
    r1.length=5;
    r1.breadth=10;

    cout<<r1.area();

    return 0;
}