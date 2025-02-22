#include <iostream> // Required for input and output
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
    // Example of creating a Book object and using its methods
    Book myBook("978-0743273565", "F. Scott Fitzgerald", "The Great Gatsby", 1, "SCRIB", 10.99);

    cout << "Title: " << myBook.getTitle() << endl;
    cout << "Author: " << myBook.getAuthor() << endl;
    cout << "Edition: " << myBook.getEdition() << endl;
    cout << "ISBN: " << myBook.getISBN() << endl;
    cout << "Publisher Code: " << myBook.getPubCode() << endl;
    cout << "Price: $" << myBook.getPrice() << endl;

    // Changing the price
    myBook.changePrice(20.99);
    cout << "New Price: $" << myBook.getPrice() << endl;

    return 0;
}


    



  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

