/**
 * @file main.cpp
 * @author Jason Moreau
 * @brief 
 * @version 0.1
 * @date 2021-09-17
 * Chapter 4.17
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>


bool isPalindrome(std::string &text);

int main() 
{

    std::string text;
    std::cout << "Enter a string with five lowercase letters: ";
    std::cin >> text; 

    if( isPalindrome( text ) )
    {
        std::cout << text << " is a palindrome\n";
    } else 
    {
        std::cout << text << " is not a palindrome\n";
    }

    return 0;
}

bool isPalindrome(std::string &text)
{

    int j = text.length() - 1;
    if( text.length() % 2 == 0 ) // even length
    {
        for( int i = 0; i < text.length() / 2; i++, j-- )
        {
            if( text.at(i) != text.at(j) )
            {
                return false;
            }
        }
    }
 
    return true;
}