/*Consider a class Person with a dynamically allocated string to store the name of a person. You
are required to create both a shallow copy and a deep copy of a Person object. Write a copy
constructor and an assignment operator that implement shallow and deep copying. In your
main() function, demonstrate the difference between shallow copy and deep copy.*/
#include <iostream>
using namespace std;

class Person {
private:
    string* name;

public:
    Person(string n)
    {
        name = new string(n);
    }

    Person(const Person& other)
    {
        name = new string(*other.name);
        cout << "Deep Copy Constructor called\n";
    }

    Person& operator=(const Person& other)
    {
        if (this != &other)
        {
            delete name;               
            name = new string(*other.name);  
            cout << "Shallow Copy Assignment called\n";
        }
        return *this;
    }

    void display()
    {
        cout << "Name: " << *name << endl;
    }

    ~Person()
    {
        delete name;
    }

    void changeName(string n)
    {
        *name = n ;
    }
};


int main()
{
    cout << "Deep Copy Demonstraion:" << endl;

    Person p1("Salaar");
    Person p2 = p1;  

    p1.display(); 
    p2.display(); 
    
    cout << "\nAfter updating name : " << endl ;
    p2.changeName("A.Hadi");  

    p1.display(); 
    p2.display(); 


    cout << "\nShallow Copy Demonstration :" << endl;
    Person p3("Mohsin");
    p3 = p1;

    p1.display();  
    p3.display();

    cout << "\nAfter updating name : " << endl ;
    p3.changeName("javad"); 

    p1.display();  
    p3.display();

    return 0;
}
