/*Design a class Vehicle with a startEngine() function and another class Airplane that inherits
from Vehicle and overrides the startEngine() function. Demonstrate how the function is
overridden and invoked for an object of Airplane. Show the use of both base and derived class
functions.*/
#include <iostream>
using namespace std ; 

class vechile
{
    public:
    
    virtual void start_eng()
    {
        cout << "Vechile engine start : " << endl ;
    }
};

class Airplane : public vechile
{
    public: 
    void start_eng() override
    {
        cout << "Airplane turbo engine start : " << endl ;
    }

    void show()
    {
        cout << "calling Derived Class function : " << endl ;
        start_eng(); 
        
        cout << endl ;

        cout << "Calling Base Class Function : " << endl ;
        vechile::start_eng();
    }

};

int main()
{
    Airplane a1 ; 
    
    a1.show();

    return 0;
}