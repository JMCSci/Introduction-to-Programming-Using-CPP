/**
 * @file main.cpp
 * @author Jason Moreau
 * @brief 
 * @version 0.1
 * @date 2021-09-17
 * Chapter 4.21
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>

using namespace std;

string getMajor( char &letter );
string getYear( int &number );
string combineString( string major, string year );

int main()
{
    char letter;
    int number;
    std::cout << "Enter two characters: ";
    std::cin >> letter;
    std::cin >> number;
    string output = combineString( getMajor(letter), getYear(number) );
    std::cout << output;
    
    return 0;
}

string getMajor( char &letter )
{
    string major;
    switch( letter )
    {
        case 'M' : major = "Mathematics"; break;
        case 'C' : major = "Computer Science"; break;
        case 'I' : major = "Information Technology"; break;
        default : major = "None";
    }
    return major;
}

string getYear( int &number )
{
    string year;
    switch(number)
    {
        case 1 : year = "Freshman"; break;
        case 2 : year = "Sophomore"; break;
        case 3 : year = "Junior"; break;
        case 4 : year = "Senior"; break;
        default : year = "None"; break;
    }
    return year;
}

string combineString( string major, string year)
{

    if( major == "None" )
    {
        return "Invalid major code\n";
    } else if( year == "None" )
    {
        return "Invalid status code\n";
    }
    return major + " " + year + "\n";
}