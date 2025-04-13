/*You are given a class Rectangle with length and breadth as attributes. Write a copy constructor
to copy the values of one Rectangle object to another. Demonstrate the use of the copy
constructor in the main function.*/
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l ;
        breadth = b ;
    }

    Rectangle(Rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
    }

    void display()
    {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }

};

int main()
{
    Rectangle r1(10, 5);
    cout << "Rectangle 1:" << endl;
    r1.display();

    Rectangle r2 = r1;
    cout << "\nRectangle 2 (Copied from Rectangle 1):" << endl;
    r2.display();

    return 0;
}
