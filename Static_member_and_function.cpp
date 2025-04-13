/*You are tasked with creating a class to track the total number of employees in a company. The
class should have a static member variable to store the count of employees, and a static
function to increment and display the count. Write the class and a main function to
demonstrate the use of the static member and function.*/
#include <iostream>
using namespace std;

class Employee
{
    private :
    static int count ;
    string name;

    public :
    
    Employee (string n)
    {
        name = n ;
        count ++ ;
    }

    static void total_count()
    {
        cout << "The total number of employees are " << count << endl ; 
    }

};

int Employee::count = 0;

int main()
{   
    Employee::total_count();

    Employee emp1("Salaar") ;
    Employee emp2("Jamshed");
    Employee emp3("Farhan");
    Employee emp4("Jaawad");
    Employee emp5("Zainab");

    Employee::total_count();

    return 0;
}