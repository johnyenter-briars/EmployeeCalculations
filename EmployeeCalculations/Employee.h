#pragma once
#include <string>

class Employee {

public:
	Employee(int employeeNum, unsigned int age);

	int getEmployeeNum();
	int getAge();

private:
	int m_employeeNum;
	unsigned int m_age;
};
