#include<iostream>
using namespace std;
namespace Yash{
    void show()
    {
        cout<<"My full name is Yash Gupta"<<endl;
    }
}
namespace Ajay{
    void show()
    { 
        cout<<"My full name is Ajay Roj"<<endl;
    }
}
int main()
{
    Yash::show();
    Ajay::show();
    return 0;
}