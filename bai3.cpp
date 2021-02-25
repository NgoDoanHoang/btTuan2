#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if ( a+b>c && a+c>b && b+c>a )
    {
        if ( a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a )
        {
            cout << "tam giac vuong";
        }
        else if ( a==b && b==c )
        {
            cout << "tam giac deu";
        }
        else if ( (a==b && b!=c ) || (b==c && c!=a)|| (c==a && a!=b) )
        {
            cout << "tam giac can";
        } else cout << "just a tam giac ";
    } else cout <<"ko phai tam giac";
    return 0;
}
