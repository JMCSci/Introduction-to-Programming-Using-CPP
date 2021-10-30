/* Chapter 5.52
 *
 */

#include <iostream>
#include <string>

 int main()
 {
     using namespace std;
     string text;

     cout << "Enter a string: ";
     getline( cin, text );
     
     for( auto i = 0; i < text.length(); i++ )
     {
         if( i % 2 != 0 )
         {
             cout << text.at(i);
         }
     }

     cout << "\n";
     
    return 0;
 }