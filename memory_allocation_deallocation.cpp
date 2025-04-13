/*You need to create a class Book that has the title of the book and the author's name. Define a
pointer variable for the Book class and allocate memory for a new Book object dynamically.
Use the pointer to display the values of the book’s title and author. Write the necessary code to
handle memory allocation and deallocation.*/
#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }

    void display()
    {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book* b1 = new Book("One Day In Fast", "Salaar Ahmed");
    Book* b2 = new Book("Second Chance", "Abdul Hadi");

    b1->display();
    b2->display();

    delete b1;
    delete b2;

    return 0;
}
