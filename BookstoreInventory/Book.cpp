//
//  Book.cpp
//  BookstoreInventory
//
//  Created by Isaac Adeleke on 11/4/24.
//

#include "Book.hpp"
#include <iostream>

// Constructor implementation
Book::Book(std::string title, std::string author, std::string isbn, int quantity, double price)
    : title(title), author(author), isbn(isbn), quantity(quantity), price(price) {}

// Getter implementations
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }
int Book::getQuantity() const { return quantity; }
double Book::getPrice() const { return price; }

// Overloaded operator== for ISBN comparison
bool Book::operator==(const Book& other) const {
    return isbn == other.isbn;
}

// Overloaded stream output operator
std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << ", Author: " << book.author
       << ", ISBN: " << book.isbn << ", Quantity: " << book.quantity
       << ", Price: $" << book.price;
    return os;
}

