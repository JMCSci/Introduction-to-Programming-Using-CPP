/* Chapter 1.11
 *
 */

#include <iostream>

int main() {
    // Births
    const double births_per_minute = 60 / 7;
    const double births_per_hour = births_per_minute * 60;
    const double births_per_day = births_per_hour * 24;
    const long births_per_year = births_per_day * 365;

    // Deaths
    const double deaths_per_minute = 60 / 13;
    const double deaths_per_hour = deaths_per_minute * 60;
    const double deaths_per_day = deaths_per_hour * 24;
    const long deaths_per_year = deaths_per_day * 365;

    // Immigrants
    const double immigrants_per_minute = 60 / 45;
    const double immigrants_per_hour = immigrants_per_minute * 60;
    const double immigrants_per_day = immigrants_per_hour * 24;
    const long immigrants_per_year = immigrants_per_day * 365;

    // Current population
    long current_population = 312032486L;

    std::cout << "Year 1: " << current_population << std::endl;

    for( int i = 2; i != 7; i++ )
    {

        current_population += ( births_per_year + immigrants_per_year ) - deaths_per_year;
        std::cout << "Year " << i << ": " << current_population << std::endl;

    }

    return 0;

}
