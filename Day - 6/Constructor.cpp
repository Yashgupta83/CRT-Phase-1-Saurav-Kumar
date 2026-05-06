#include<iostream>
using namespace std;

class Students
{
    public:
    string Name;
    int Roll_no;

    Students()
    {
        Name = "Yash Gupta";
        Roll_no = 1316;
    }
    void show()
    {
         cout << "Name: " << Name << endl;
        cout << "Roll No: " << Roll_no << endl;
    }

};
int main()
{
    Students s1;
    s1.show();
    return 0;
}