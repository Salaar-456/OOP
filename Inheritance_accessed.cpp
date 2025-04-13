/*You need to create a class Person with private data members name and age. Derive a class
Student that adds a new data member grade. In the main() function, create a Student object and
demonstrate the use of both public and private access members, including how data members
are inherited and accessed.*/
#include <iostream>
using namespace std ; 

class Person 
{
    private:
    string name ;
    int age ;

    public:

    Person(string n, int a)
    {
        name = n ; 
        age = a ;
    }

    void display_prsn_detail()
    {
        cout << "Name : " << name << endl ;
        cout << "Age  : " << age << endl ;
    }
};

class Student : public Person
{
    private:
    char grades ;

    public :
    Student (string n , int a , char g) : Person(n, a)
    {
        grades = g ;
    }

    void detail()
    {
        display_prsn_detail();
        cout << "Grades : " << grades << endl ; 
    }
};

int main()
{
    Student s1("Hadi", 18, 'A');
    Student s2("Salaar", 18, 'B');
    
    s1.detail();
    s2.detail();

    return 0;
}