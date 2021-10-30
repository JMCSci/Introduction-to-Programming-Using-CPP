/* Chapter 5.1
 */

#include <iostream>

int main() 
{
    using namespace std;
    int num;
    unsigned int positive = 0;
    unsigned int negative = 0;
    double sum;
    double avg;

    cout << "Enter an integer, the input ends if is 0: ";
    cin >> num;

    if( num == 0 ) 
    {
        cout << "No numbers are entered except " << num << endl;
    } else 
    {
        while( num != 0 )
        {
            if( num > 0 )
            {
                positive++;
            } else 
            {
                negative++;
            }

            sum += num;
            avg = sum / ( positive + negative );

            cout << "Enter an integer, the input ends if is 0: ";
            cin >> num;
        }
    
    cout << "The number of positives is " << positive << endl;
    cout << "The number of negatives is " << negative << endl;
    cout << "The total is " << sum << endl;
    cout << "The average is " << avg << endl;

    }

    return 0;
}
