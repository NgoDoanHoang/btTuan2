#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int count=0;
    for ( int i=0; i<=100; i++ )
    {
        if ( n%2==0 )
        {
            cout << n << " ";
        }
        n++;
        count++;
    }
    cout << "\n" <<"so lan lap = " <<count << "\n";

    int a=0;
    while ( a>=0 && a<=100 )
    {
        if( a%2==0 ) cout << a << " ";
        a++;
    }
    cout << "\n";

    int b=0;
    do
    {
        if ( b%2==0 )
        {
            cout << b <<" ";
        }
        b++;
    }
    while ( b<=100 );
}
