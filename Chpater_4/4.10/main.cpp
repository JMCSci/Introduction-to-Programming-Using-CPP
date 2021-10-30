#include <iostream>
#include <string>

int main()
{

    const std::string consonant = " is a consonant";
    const std::string vowel = " is a vowel";
    char letter;
    std::cout << "Enter a letter: ";
    std::cin >> letter;


    if( std::isalpha( letter) )
    {
        switch( std::toupper( letter ) )
        {

            case 'A' : std::cout << letter << vowel << "\n"; break;
            case 'E' : std::cout << letter << vowel << "\n"; break;
            case 'I' : std::cout << letter << vowel << "\n"; break;
            case 'O' : std::cout << letter << vowel << "\n"; break;
            case 'U' : std::cout << letter << vowel << "\n"; break;
            default : std::cout << letter << consonant << "\n"; break;

        }
    } else
    {
        std::cout << "Invalid input\n";
    }

    return 0;

}
