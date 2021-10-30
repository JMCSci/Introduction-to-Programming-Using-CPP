/* Chapter 6.30
 * Search a character
 */

#include <iostream>
#include <string>

void search(std::string& str, char& key);

int main(int argc, char* argv[])
{
    // User enters a string and a character and displays if the character is found
    std::string str;
    char key;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter a character: ";
    std::cin >> key;
    search(str, key);

    return 0;
}

void search(std::string& str, char& key)
{
    bool found = false;
    for(int i = 0; i < str.length(); ++i)
    {
        if(str.at(i) == key)
        {
            found = true;
        }
    }
    if( found )
    {
        std::cout << "Key found!!!" << std::endl;
    } else 
    {
        std::cout << "Key not found." << std::endl;
    }
    
}