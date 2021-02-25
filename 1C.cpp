#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int z=0;
    if ( n==2 ) cout << "yes";
    if ( n<2 ) cout << "no";
    if ( n > 2 )
    {
        for ( int i=2; i<n; i++)
        {
            if ( n%i == 0 )
            {
                z++;
            }
        }
        if ( z!=0 ) cout << "no";
        if ( z==0 ) cout << "yes";
    }

    return 0;
}
