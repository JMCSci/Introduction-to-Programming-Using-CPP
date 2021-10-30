/* Chapter 1.8
 *
 */

#include <iostream>
#include <cmath>

int main() {
    const double side = 9.2;

    double area = 1.732 * pow( side, 2 ) / 4;
    double perimeter = 3 * side;

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}
