#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;

    void getDetails()
    {
        cout << "Enter title: ";
        cin >> ws; // To consume any leading whitespace
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
    }

    void displayDetails()
    {
        cout << "Title: " << title << ", Author: " << author << ", Price: " << price << endl;
    }
};

void sortBooks(Book books[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (books[j].price > books[j + 1].price)
            {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;

    // Book *books = new Book[numBooks];
    Book Bookdetail[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        Bookdetail[i].getDetails();
    }

    sortBooks(Bookdetail, n);

    cout << "\nBooks details in ascending order of price:" << endl;
    for (int i = 0; i < numBooks; i++)
    {
        books[i].displayDetails();
    }

    delete[] books;
    return 0;
}
