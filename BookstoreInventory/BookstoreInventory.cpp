//
//  BookstoreInventory.cpp
//  BookstoreInventory
//
//  Created by Isaac Adeleke on 11/4/24.
//

#include "BookstoreInventory.hpp"
#include <iostream>
#include <algorithm>

// Function to add a book to the inventory
void BookstoreInventory::addBook(const Book& book) {
    auto it = std::find(inventory.begin(), inventory.end(), book);
    if (it != inventory.end()) {
        std::cout << "Book with ISBN " << book.getISBN() << " already exists.\n";
    } else {
        inventory.push_back(book);
        std::cout << "Book added successfully.\n";
    }
}

// Function to find a book by ISBN
Book* BookstoreInventory::findBookByISBN(const std::string& isbn) {
    for (auto& book : inventory) {
        if (book.getISBN() == isbn) {
            return &book;
        }
    }
    std::cout << "Book not found.\n";
    return nullptr;
}

// Function to display all books in the inventory
void BookstoreInventory::displayInventory() const {
    if (inventory.empty()) {
        std::cout << "No books in inventory.\n";
    } else {
        for (const auto& book : inventory) {
            std::cout << book << std::endl;
        }
    }
}
