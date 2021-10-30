/* Chapter 5.48
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string text;
    int total;
    cout << "Enter a string: ";
    getline(cin, text);

    for( auto i = 0; i < text.length(); i++ )
    {
        if( isupper( text.at(i)) )
        {
            total++;
        }
        
    }

    cout << "The number of uppercase letters is " << total << endl;

    return 0;
}