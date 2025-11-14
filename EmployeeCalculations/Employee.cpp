#include <iostream>
#include "Employee.h"

Employee::Employee(int employeeNum, unsigned int age) :
	m_employeeNum(employeeNum),
	m_age(age)
{

}

int Employee::getEmployeeNum() {
	return m_employeeNum;
}

int Employee::getAge() {
	return m_age;
}

