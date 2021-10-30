/**
 * @brief 
 * Chapter 4.19
 * 
 */

#include <iostream>
#include <string>

using namespace std;

void sort( string array[] );
void swap( string &city1, string &city2 );

int main()
{
    string array[3];
    
    cout << "Enter the first city: ";
    getline( cin, array[0] );
    cout << "Enter the second city: ";
    getline( cin, array[1] );
    cout << "Enter the third city: ";
    getline( cin, array[2] );

    sort(array);

    cout << "The three cities in alphabetical order are " << array[0] << " " << array[1] << " " << array[2] << "\n";

    return 0;
}

void sort( string array[] ) 
{
    for( int i = 0; i < 2; i++ )
    {
        for( int j = i + 1; j <= 2; j++)
        {
            if( array[i].at(0) > array[j].at(0) )
            {
                swap( array[i], array[j] );
            }

        }

    }
}

void swap( string &city1, string &city2 )
{
    string temp = city1;
    city1 = city2;
    city2 = temp;
}
