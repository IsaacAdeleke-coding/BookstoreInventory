//
//  BookstoreInventory.hpp
//  BookstoreInventory
//
//  Created by Isaac Adeleke on 11/4/24.
//

#ifndef BOOKSTORE_INVENTORY_HPP
#define BOOKSTORE_INVENTORY_HPP

#include "Book.hpp"
#include <vector>

class BookstoreInventory {
private:
    std::vector<Book> inventory;

public:
    // Function to add a book to the inventory
    void addBook(const Book& book);

    // Function to find a book by ISBN
    Book* findBookByISBN(const std::string& isbn);

    // Function to display all books in the inventory
    void displayInventory() const;
};

#endif // BOOKSTORE_INVENTORY_HPP
