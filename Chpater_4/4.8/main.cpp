/* Chapter 4.8
 *
 */

#include <iostream>

int main()
{

    int code;
    std::cout << "Enter an ASCII code: ";
    std::cin >> code;
    if( code > 0 && code < 127 )
    {
        char ascii = code;
        std::cout << "The character is " << ascii << std::endl;

    } else
    {
        std::cout << "Code must be between 0 and 127.\n";
    }

    return 0;
}
