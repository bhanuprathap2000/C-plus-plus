

class Rectangle
{

    private:
            int length;
            int breadth;
    public:
      
      

       Rectangle(int l=1,int b=1){
           length=l;
           breadth=b;
      }

      Rectangle(Rectangle &rect){
          length=rect.length;
          breadth=rect.breadth;
      }

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

   Rectangle r(5,10);

   Rectangle r2(r);

   cout<<r2.area();


    
    
    return 0;
}


