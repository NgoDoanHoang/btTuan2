#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int z=x;
    if ( x > y )
    {
        z=x;
        x=y;
        y=z;
    }
    for (int i=y; i<=(x*y); i++ )
    {
        if ( i%x==0 && i%y==0 )
        {
            cout << i;
            break;
        }
    }
    return 0;
}
