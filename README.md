# Bookstore Inventory Management System

## Overview
This project is a C++ program designed to manage the inventory of a local bookstore. It allows bookstore staff to efficiently manage book records by providing functions to add and search for books.

## Features
- **Add Book**: Allows staff to add a new book to the inventory. Checks if a book with the same ISBN already exists to prevent duplicates.
- **Find Book**: Allows staff to search for a book by its ISBN.
- **Display Inventory**: Shows all books currently in the inventory.

## Files
- **Book.hpp**: Defines the `Book` class, including attributes like title, author, ISBN, quantity, and price.
- **BookstoreInventory.hpp**: Defines the `BookstoreInventory` class, which manages a collection of books.
- **main.cpp**: Main program to demonstrate the functionality of the inventory management system.

## Operator Overloading
The `Book` class overloads the `==` operator to compare books based on their ISBN, which makes searching and managing inventory more efficient.

## Compilation and Execution
To compile and run the program, use the following commands:
```bash
g++ main.cpp -o bookstore_inventory
./bookstore_inventory
License

This project is licensed under the MIT License.


This setup provides a robust yet simple inventory management system suitable for a bookstore. The design can be expanded with additional features, such as deleting a book, updating book information, or even managing customer orders. Let me know if you'd like to add further functionality!
