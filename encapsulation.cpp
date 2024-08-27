// File: bank_account_encapsulation.cpp
// This program demonstrates the concept of encapsulation in C++

#include <iostream>

// Encapsulation is the bundling of data and the methods that operate on that data within a single unit or object.
// It's also often referred to as data hiding because it restricts direct access to some of an object's components.

class BankAccount {
private:
    // Private data member - demonstrates data hiding
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Getter method - provides controlled access to private data
    double getBalance() const {
        return balance;
    }

    // Setter method with validation - demonstrates controlled modification of private data
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Another method with logic - shows how the class can enforce rules
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }
};

int main() {
    // Creating an instance of BankAccount
    BankAccount account(1000);
    
    // Using public methods to interact with private data
    account.deposit(500);
    account.withdraw(200);
    
    // Accessing balance through public method
    std::cout << "Current balance: " << account.getBalance() << std::endl;

    // Direct access to balance is not allowed
    // account.balance = 2000;  // This would cause a compilation error

    return 0;
}

/* 
Key Aspects of Encapsulation demonstrated in this example:

1. Data Hiding:
   - The 'balance' is private and cannot be accessed directly from outside the class.
   - Data is accessed only through public methods.

2. Access Modifiers:
   - Use of private and public keywords to control access to class members.
   - private: 'balance' is accessible only within the class.
   - public: Methods like deposit(), withdraw(), and getBalance() are accessible from anywhere.

3. Getters and Setters:
   - getBalance() is a getter method used to access private data member.
   - deposit() and withdraw() act as setter methods with built-in validation.

Benefits of Encapsulation:
1. Improved maintainability: Changes to the internal implementation don't affect external code.
2. Flexibility: Internal representation can be changed without affecting other parts of the code.
3. Security: Prevents unauthorized access to internal data.
4. Modularity: Encapsulated code is easier to understand and maintain.


//Encapsulation definition and uses picked up from OOP using JAVA :

Hides the implementation 
details of a class
 ●
 Forces the user to use an 
interface to access data
 ●
 Makes the code more 
maintainable

Encapsulation allows you to create a clean, well-defined interface for interacting with objects 
while hiding the complexity and maintaining control over how the object's data is accessed and modified.
*/
