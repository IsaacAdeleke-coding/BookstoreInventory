//
//  Book.hpp
//  BookstoreInventory
//
//  Created by Isaac Adeleke on 11/4/24.
//

#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    int quantity;
    double price;

public:
    // Constructor
    Book(std::string title, std::string author, std::string isbn, int quantity, double price);

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    int getQuantity() const;
    double getPrice() const;

    // Overloaded operator to compare books by ISBN
    bool operator==(const Book& other) const;

    // Stream output overload for displaying book information
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};

#endif // BOOK_HPP
