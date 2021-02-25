#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >>x >> y;
    int z=x;
    if ( x > y )
    {
        z=x;
        x=y;
        y=z;
    }
    for ( int i=x; i>0 ; i--)
    {
        if ( x%i==0 && y%i==0)
        {
            cout <<i ;
            break;
        }
    }
    return 0;
}
