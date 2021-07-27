#include <iostream>

/*int add(int x, int y); // forward declaration of add() (using a function prototype)
int getInteger(); 

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3,6) << '\n'; // this works because we forward declared add() above
    
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    
    return 0;
}
*/

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // if PRINT_JOE is defined, compile this code
#endif

#ifndef PRINT_BOB
    std::cout << "Bob\n"; // if PRINT_BOB is defined, compile this code
#endif

    return 0;
}