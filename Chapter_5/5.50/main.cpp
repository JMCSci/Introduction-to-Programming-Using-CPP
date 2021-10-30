/* Chapter 5.50
 */

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string text;
    string reversed;
    cout << "Enter a string: ";
    cin >> text;

    for( int i = text.length() - 1; i >= 0; i-- )
    {
        reversed += text.at(i);
    }

    cout << "The reversed string is " << reversed << endl;

    return 0;
}