/***********************************
*J. Sakumoto
*Exceptions, Templates, and Standard Template Library (STL) Part B
*4/17/25
*V 1.0
************************************/

#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half( T value ) {
    return value / 2;
}

int half( int value ) {
    return static_cast< int >( round( static_cast< float >( value ) / 2 ) );
}

int main( ) {
    double d = 9.5;
    float f = 4.4f;
    int i1 = 7;
    int i2 = 8;

    cout << "half(" << d << ") = " << half( d ) << endl;
    cout << "half(" << f << ") = " << half( f ) << endl;
    cout << "half(" << i1 << ") = " << half( i1 ) << endl;
    cout << "half(" << i2 << ") = " << half( i2 ) << endl;

    system( "pause" );

    return 0;
}