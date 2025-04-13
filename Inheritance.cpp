/*Design a class Employee with attributes such as name, ID, and salary. Create a derived class
Manager that adds an additional attribute department and includes a method to display the
employee and manager details. Show how the derived class can access the attributes of the
base class. Write the necessary code to demonstrate the inheritance and display the details of
an Employee and Manager object.*/
#include <iostream>
using namespace std ;

class Employee
{	protected: 

	string name ;
	int ID ;
	int salary;

	public :
	Employee(string n , int id , int s )
	{
		name = n ;
		ID = id ;
		salary = s ;
	}

	void employee_detail()
	{
		cout << "Employee name   : " << name << endl ;
		cout << "Employee Id     : " << ID << endl ;
		cout << "Employee Salary : " << salary << endl ; 
	}
};

class Manager : public Employee
{
	string department ;

	public :
	Manager (string n , int id , int s , string dp) : Employee (n, id, s )
	{
		department = dp;
	}

	void Manager_detail()
	{
		cout << "Manager name        : " << name << endl ;
		cout << "Manager Id          : " << ID << endl ;
		cout << "Manager Salary      : " << salary << endl ; 
		cout << "Manager Department  : " << department << endl ; 
	}
};

int main()
{
	cout << "Employee Details directly from Employee Class :" << endl;
    Employee emp("Salaar", 1001, 50000);
    emp.employee_detail();

    cout << "\n--- Manager Details ---" << endl;
    Manager mgr("Jamshed", 2002, 80000, "IT");
    mgr.Manager_detail();

    cout << "\nEmployee Details accessed from Manager Class :" << endl;
    mgr.employee_detail(); 

	return 0;
}
