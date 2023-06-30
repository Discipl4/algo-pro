#include <iostream>

enum Days
{
    WEEK = 7,
    MONTH = 30,
    YEAR = 365,
    DECADE = 3650,
    CENTURY = 36500,
    MILLENNIUM = 365000
};

int main()
{
    std::cout << "Days in week\t\t = " << WEEK << std::endl;
    std::cout << "Days in month\t\t = " << MONTH << std::endl;
    std::cout << "Days in year\t\t = " << YEAR << std::endl;
    std::cout << "Days in decade\t\t = " << DECADE << std::endl;
    std::cout << "Days in century\t\t = " << CENTURY << std::endl;
    std::cout << "Days in millennium\t = " << MILLENNIUM << std::endl;

    return 0;
}
