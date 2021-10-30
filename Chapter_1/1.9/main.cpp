/* Chapter 1.9
 *
 */


#include <iostream>
#include <cmath>

int main() {

    const double side = 5.2;
    const double area = pow( side, 2 );
    const double perimeter = 4 * side;

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}
