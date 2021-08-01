#include <iostream>


using std::cout;
using std::endl;//using these we are specifying the address of these.
namespace myspace1{
      int age=25;
      int hello(){
          cout<<"hello\n";
          return 0;
      }
}

namespace ourspace1{
    int age=26;
}

using namespace myspace1;

int main(){

   cout<<age<<endl;
   hello();
    
    return 0;
}