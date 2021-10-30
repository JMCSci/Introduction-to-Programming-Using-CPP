/* Chapter 4.11
 *
 */

#include <iostream>
#include <string>

int main() {
    char letter;
    std::cout << "Enter an uppercase letter: ";
    std::cin >> letter;
    char lowercase = std::tolower( letter );
    std::cout << "The lowercase letter is: " << lowercase  << std::endl;

    return 0;
}
