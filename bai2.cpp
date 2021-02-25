#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,y,z=1;
    cin >> x >> y;
    for ( int i=0; i<y; i++ )
    {
        z=z*x;
    }
    cout << z << endl;
    cout << pow( x, y );
    return 0;
}
