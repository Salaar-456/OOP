/*Create a base class Shape with a private data member area, a protected method
calculateArea(), and a public method displayArea(). Derive a class Circle from Shape that
implements the calculateArea() method. Show how the derived class accesses the protected
base class member and displays the area of the circle. Demonstrate the inheritance and method
overriding in the main() function.*/
#include <iostream>
using namespace std ;

class Shape
{
    private: 
    float area ;

    protected:
    void setarea(float a )
    {
        area = a ;        
    }
    virtual void calc_area()
    {
        area = 0 ;
    }

    public:
    void print_area()
    {
        cout << "Area  =  " << area << endl ; 
    }
};

class Circle : public Shape 
{
    private:
    float radius ;

    protected :
    void calc_area() override 
    {
        float a = 3.14 * radius * radius ; 
        setarea(a);
    }

    public : 
    Circle (int r)
    {
        radius = r ;
    }

    void show() 
    {
        calc_area();
        print_area();
    }

};

int main()
{
    Circle c1(5);
    Circle c2(7);

    c1.show();
    c2.show();

    return 0;
}