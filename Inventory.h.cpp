#ifndef INVENTORY_H
#define INVENTORY_H

#include "Book.h2.cpp"
#include <iostream>
#include <iomanip>

class Inventory {
private:
    Book* books;
    int nextEntry;
    int length;

public:
    // Constructor
    Inventory(int size) : nextEntry(0), length(size) {
        books = new Book[size];
    }

    // Destructor
    ~Inventory() {
        delete[] books;
    }

    // Add a book to the inventory
    bool addBook(const Book& theBook) {
        if (nextEntry < length) {
            books[nextEntry++] = theBook;
            return true;
        }
        return false;
    }

    // Change the price of a book by ISBN
    void changePrice(const std::string& isbn, double newPrice) {
        for (int i = 0; i < nextEntry; ++i) {
            if (books[i].getISBN() == isbn) {
                books[i].changePrice(newPrice);
                break;
            }
        }
    }

    // Print the inventory
    void printInventory() const {
        std::cout << "---------------------------------------------------------------------------------------" << std::endl;
        std::cout << std::left << std::setw(13) << "ISBN" << std::setw(16) << "AUTHOR" << std::setw(50) << "TITLE" << std::setw(4) << "ED" << std::setw(6) << "PUB" << std::right << std::setw(9) << "PRICE" << std::endl;
        for (int i = 0; i < nextEntry; ++i) {
            std::cout << std::left << std::setw(13) << books[i].getISBN() << std::setw(16) << books[i].getAuthor() << std::setw(50) << books[i].getTitle() << std::setw(4) << books[i].getEdition() << std::setw(6) << books[i].getPubCode() << std::right << std::setw(9) << std::fixed << std::setprecision(2) << books[i].getPrice() << std::endl;
        }
        std::cout << "---------------------------------------------------------------------------------------" << std::endl;
    }
};

#endif // INVENTORY_H



  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

