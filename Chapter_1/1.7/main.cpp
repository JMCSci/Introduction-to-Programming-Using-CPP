/* Chapter 1.7
 *
 */

#include <iostream>
#include <cmath>

void firstApproximation()
{
    double result = 0;
    for( int i = 1; i != 6; i++ )
    {
        result += 1.0 / pow( i, 2 );
    }

    double pi = sqrt( 6 * result );
    std::cout << pi << std::endl;
}

void secondApproximation()
{
    double result = 0;
    for( int i = 1; i != 7; i++ )
    {
        result += 1.0 / pow( i, 2 );
    }

    double pi = sqrt( 6 * result );
    std::cout << pi << std::endl;
}

int main() {
    firstApproximation();
    secondApproximation();
    return 0;
}
