//
//  main.cpp
//  BookstoreInventory
//
//  Created by Isaac Adeleke on 11/4/24.
//

#include "BookstoreInventory.hpp"
#include <iostream>

int main() {
    BookstoreInventory inventory;

    // Adding some books
    inventory.addBook(Book("1984", "George Orwell", "1234567890", 10, 15.99));
    inventory.addBook(Book("To Kill a Mockingbird", "Harper Lee", "2345678901", 8, 12.49));
    inventory.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald", "3456789012", 5, 10.99));

    // Attempt to add a duplicate book
    inventory.addBook(Book("1984", "George Orwell", "1234567890", 10, 15.99));

    // Finding a book by ISBN
    std::string isbnToFind = "1234567890";
    Book* foundBook = inventory.findBookByISBN(isbnToFind);
    if (foundBook) {
        std::cout << "Book found: " << *foundBook << std::endl;
    }

    // Displaying all books in inventory
    std::cout << "\nCurrent Inventory:\n";
    inventory.displayInventory();

    return 0;
}
