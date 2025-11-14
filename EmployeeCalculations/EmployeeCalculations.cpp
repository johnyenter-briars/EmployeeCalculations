#include <iostream>
#include <vector>

#include "Employee.h"

int main()
{
    std::cout << "Hello World!\n";

    Employee* employeeArray[10] = {
            new Employee(1, 78),
            new Employee(2, 19),
            new Employee(3, 47),
            new Employee(4, 20),
            new Employee(5, 18),
            new Employee(6, 37),
            new Employee(7, 20),
            new Employee(8, 28),
            new Employee(9, 45),
            new Employee(10, 18),
    };

    std::vector<Employee*> employeesUnderDrinkingAge;

    //Step 0: Add all the employees who are under age to the employeesUnderDrinkingAge vector
    /*
        Remember, you can loop through a vector using something like this:
        for (auto e : <your vector here>) 
        {
            //Do somethign with e 
        }
    */

    //Step 1: How can you print out the count of the employees in one line? Hint - use the employeesUnderDrinkingAge vector. There's a 'size()' method!
    printf("The number of employees under drinking age: %zu\n", 0 /*Something here*/);

    //Step 2: Print out the id of oldest employee who is under drinking age. Hint - iterate through the employeesUnderDrinkingAge. You may need to keep track of the Employee!

    Employee* oldestEmployee = nullptr;
    //Loop throuth the employees who are under age. Keeping track of the oldestEmployee

    printf("Thd id of the employee who is the oldest but still under drinking age: %u\n", 0 /*Something here : )*/);

    //Step 3: Print out the id of the youngest employee who is NOT under drinking age. Hint - make a new vector!
    //Do something similar to steps 1 and 2!

    printf("Thd id of the employee who is the youngest but over the drinking age: %u\n", 0 /*Something here : )*/);

    //Step 4: Don't forget to clean up your references! Otherwise you'll have a memory leak!

    /*
        Do something like this:
        For all your vectors:

        for (auto e : <your vector here>) 
        {
            delete e;
        }
    */
}


