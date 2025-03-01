#include <iostream>
#include "Inventory.h.cpp"

int main() {
    // Create an inventory of size 10
    Inventory inventory(10);

    // Create and add books to the inventory
    inventory.addBook(Book("978-0061120084", "Harper Lee", "To Kill a Mockingbird", 1, "HARPB", 14.99));
    inventory.addBook(Book("978-0451524935", "George Orwell", "1984", 1, "SIGNET", 9.99));
    inventory.addBook(Book("978-0316769488", "J.D. Salinger", "The Catcher in the Rye", 1, "LB", 10.99));

    // Print initial inventory
    inventory.printInventory();

    // Change book prices
    inventory.changePrice("978-0061120084", 50.00);
    inventory.changePrice("978-0451524935", 12.49);
    inventory.changePrice("978-0316769488", 8.99);

    // Print updated inventory
    inventory.printInventory();

    return 0;
}




  
    // Print "Hello, World!" << std::endl;
    // Return 0 to indicate successful execution, optional but good backwards compatiable 

    
  //  int hours = 5;
  //  printf("I worked %d hours. \n", hours);
    
   // std::string formatted = std::("I worked {:d} hours. \n", hours);
    //std::cout<<formatted;

