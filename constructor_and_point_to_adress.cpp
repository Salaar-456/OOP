/*In a company, each employee has a unique ID, and their monthly salary is a constant value.
Create a class Employee that has a constant member for the salary. Write a constructor to
initialize the employee's ID and use the this pointer to print the address of the current object
and the employee’s details. Demonstrate this in your main() function.*/
#include <iostream>
using namespace std;

class Employee 
{
private:
    int ID; 
    const int salary = 45000; 

public:
    Employee(int id)
    {   
        ID = id ;   

        cout << "\nEmployee object address: " << this << endl;
        cout << "Employee ID: " << ID << endl; 
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    Employee emp1(1341);
    Employee emp2(1346);
    Employee emp3(1369);
    
    return 0;
}
