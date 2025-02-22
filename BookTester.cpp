#include <iostream> // Required for input and output
#include <iomanip>
#include <string>

using namespace std;

class Book {
private:
    string codeNum;
    string author;
    string title;
    int edition;
    string pubCode;
    double price;

public:
    // Constructor
    Book(string cn, string au, string ti, int ed, string pc, double pr) {
        codeNum = cn;
        author = au;
        title = ti;
        edition = ed;
        pubCode = pc;
        price = pr;
    }

    // Accessor methods (getters)
    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }

    int getEdition() {
        return edition;
    }

    string getISBN() {
        return codeNum;
    }

    string getPubCode() {
        return pubCode;
    }

    // Mutator method (setter)
    void changePrice(double newPrice) {
        price = newPrice;
    }
};

int main() {
    // Example books
    Book book1("978-0061120084", "Harper Lee", "To Kill a Mockingbird", 1, "HARPB", 14.99);
    Book book2("978-0451524935", "George Orwell", "1984", 1, "SIGNET", 9.99);
    Book book3("978-0316769488", "J.D. Salinger", "The Catcher in the Rye", 1, "LB", 10.99);

    // Print the original table
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << left << setw(13) << "ISBN" << setw(16) << "AUTHOR" << setw(50) << "TITLE" << setw(4) << "ED" << setw(6) << "PUB" << right << setw(9) << "PRICE" << endl;
    cout << left << setw(13) << book1.getISBN() << setw(16) << book1.getAuthor() << setw(50) << book1.getTitle() << setw(4) << book1.getEdition() << setw(6) << book1.getPubCode() << right << setw(9) << fixed << setprecision(2) << book1.getPrice() << endl;
    cout << left << setw(13) << book2.getISBN() << setw(16) << book2.getAuthor() << setw(50) << book2.getTitle() << setw(4) << book2.getEdition() << setw(6) << book2.getPubCode() << right << setw(9) << fixed << setprecision(2) << book2.getPrice() << endl;
    cout << left << setw(13) << book3.getISBN() << setw(16) << book3.getAuthor() << setw(50) << book3.getTitle() << setw(4) << book3.getEdition() << setw(6) << book3.getPubCode() << right << setw(9) << fixed << setprecision(2) << book3.getPrice() << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    // Change prices
    book1.changePrice(17.99);
    book2.changePrice(12.49);
    book3.changePrice(8.99);

    // Print the updated table
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << left << setw(13) << "ISBN" << setw(16) << "AUTHOR" << setw(50) << "TITLE" << setw(4) << "ED" << setw(6) << "PUB" << right << setw(9) << "PRICE" << endl;
    cout << left << setw(13) << book1.getISBN() << setw(16) << book1.getAuthor() << setw(50) << book1.getTitle() << setw(4) << book1.getEdition() << setw(6) << book1.getPubCode() << right << setw(9) << fixed << setprecision(2) << book1.getPrice() << endl;
    cout << left << setw(13) << book2.getISBN() << setw(16) << book2.getAuthor() << setw(50) << book2.getTitle() << setw(4) << book2.getEdition() << setw(6) << book2.getPubCode() << right << setw(9) << fixed << setprecision(2) << book2.getPrice() << endl;
    cout << left << setw(13) << book3.getISBN() << setw(16) << book3.getAuthor() << setw(50) << book3.getTitle() << setw(4) << book3.getEdition() << setw(6) << book3.getPubCode() << right << setw(9) << fixed << setprecision(2) << book3.getPrice() << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

    return 0;
}



  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

