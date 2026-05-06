#include<iostream>
using namespace std;
class students
{
    public:
    int ID;
    string Name;
    void show()
    {
        cout<<"ID : "<<ID<<endl;
        cout<<"Name : "<<Name<<endl;

    }
};
int main()
{
    students s1;
    s1.ID =101;
    s1.Name ="John";
    s1.show();
    return 0;

}