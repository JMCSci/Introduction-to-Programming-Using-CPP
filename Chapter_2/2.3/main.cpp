#include <iostream>

int main()
{

    const double foot_to_meter = 0.305;
    double feet;
    std::cout << "Enter a value for feet: ";
    std::cin >> feet;
    double meters = feet * foot_to_meter;
    std::cout << feet << " feet is " << meters << " meters" << std::endl;
    return 0;

}
