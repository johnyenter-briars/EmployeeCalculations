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

    //Add all the employees who are under age to the employeesUnderDrinkingAge vector

    for (auto employee : employeeArray)
    {
        if (employee->getAge() < 21) 
        {
            employeesUnderDrinkingAge.push_back(employee);
        }
    }

    //1: How can you print out the count of the employees in one line? Hint - use the employeesUnderDrinkingAge vector
    printf("Employees under drinking age: %zu\n", employeesUnderDrinkingAge.size());

    //2: Print out the id of oldest employee who is under drinking age. Hint - iterate through the employeesUnderDrinkingAge 

    Employee* oldestEmployee = nullptr;
    for (auto employee : employeesUnderDrinkingAge)
    {
        if (oldestEmployee == nullptr)
        {
            oldestEmployee = employee;
        }

        if (employee->getAge() > oldestEmployee->getAge())
        {
            oldestEmployee = employee;
        }
    }
    
    printf("Employee who is the oldest but still under drinking age: %u\n", oldestEmployee->getEmployeeNum());

    //3: Print out the id of the youngest employee who is NOT under drinking age. Hint - make a new vector!

    //4: Calculate the sums of all the ages (use both the employeesUnderDrinkingAge and the new vector you made in #3)

    //5: Don't forget to clean up your references! Otherwise you'll have a memory leak!

    /*
        for (auto e : <your vector here>) 
        {
            delete e;
        }
    */
}



