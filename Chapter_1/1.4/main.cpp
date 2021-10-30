#include <iostream>

int main() {
    const int p = 5;

    std::cout << "p      p*5     p*10" << std::endl;
    // 1, 2, 5, 10
    for( int i = 1; i != 11; i++ )
    {
        switch(i)
        {

            case 1: std::cout << p * 1 << "      " << p * 5 << "      " << p * 10 << std::endl; break;
            case 2: std::cout << p * i << "     " << p * i * 5 << "      " << p * i * 10 << std::endl; break;
            case 5: std::cout << p * i << "     " << p * i * 5 << "     " << p * i * 10 << std::endl; break;
            case 10: std::cout << p * i << "     " << p * i * 5 << "     " << p * i * 10 << std::endl; break;

        }
    }
    return 0;
}
