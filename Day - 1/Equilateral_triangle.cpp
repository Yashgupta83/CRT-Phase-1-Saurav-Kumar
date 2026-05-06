#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool isEquilateral = (a > 0) && (a == b) && (b == c);
   
    if (isEquilateral){

        cout << "isEquilateral" << endl;
    }else{
        cout << "is not Equilateral" << endl;
    }
    return 0;
}