#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int price;
  
  
    void displayDetails() {
        cout << "Book Details: " << endl;
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
  Book book1;
  book1.title = "LASKAR PELANGI";
  book1.author = "Andrea Hirata";
  book1.price = 600.000;
  book1.displayDetails();
  
  cout << endl;
  
  Book book2;
  book2.title = "DILAN";
  book2.author = "Pidi Baiq";
  book2.price = 750.000;
  book2.displayDetails();
  return 0;
  
}
  
