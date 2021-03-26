#include <iostream>

using namespace std;

int main(){

    int day;

    cout<<"Enter the day number";
    cin>>day;

    switch (day)
    {
    case 1:cout<<"Monday";
        break;
    case 2:cout<<"Tuesday";
        break;
    case 3:cout<<"wednesday";
        break;
    case 4:cout<<"thursday";
        break;
    case 5:cout<<"friday";
        break;
    case 6:cout<<"satarday";
        break;
    case 0:cout<<"sunday";
        break;
    
    
    default:cout<<"Not a valid day number";
        break;
    }

    return 0;
}