/*You are creating a class Car that stores the car's model and year of manufacture. Write a
parameterized constructor to initialize the values. Also, write a destructor that prints a message
when an object of Car is destroyed. Demonstrate the creation and destruction of objects of the
class Car in your main program.*/
#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    int year; 

public:
    Car(string m, int y) 
    {
        model = m ;
        year = y ;

        cout << "\nCar created : " << endl ;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }

    ~Car()
    {
        cout << "\nCar Destroyed : " << endl ;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }

};

int main()
{
    Car car1("Toyota Corolla", 2020);
    Car car2("Honda Civic", 2021);
    
    return 0;
}
