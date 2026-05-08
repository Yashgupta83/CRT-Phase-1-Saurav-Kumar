#include<iostream>
using namespace std;

class Area{
    private:
    int length;
    int width;
    public:

    //contructor
    Area (int l , int w)
    { 
        length = l;
        width = w;
    }
    friend void showArea(Area a);
};
void showArea(Area b)
{
    cout<<"Area of rectangle is:"<<b.length * b.width<<endl;
}
int main()
{
    Area a(5,10);
    showArea(a);
  
    return 0;
}