#include <iostream>

int main()
{

    const double pi = 3.14;
    double radius;
    double length;
    std::cout << "Enter the radius and length of a cylinder: ";
    std::cin >> radius >> length;
    double area = pow( radius, 2 ) * pi;
    double volume = area * length;
    std::cout << "The area is " << area << std::endl;
    std::cout << "The volume is " << volume << std::endl;
    return 0;

}
