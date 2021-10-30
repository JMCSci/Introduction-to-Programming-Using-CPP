/* Chapter 1.6
 *
 */

#include <iostream>

int main() {
    int sum = 0;

    for( int i = 1; i != 22; i++ )
    {
        if( i % 2 != 0 )
        {
            sum += i;
        }

    }

    std::cout << sum << std::endl;

    return 0;
}
