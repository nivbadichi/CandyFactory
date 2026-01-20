/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#pragma once
#ifndef CHOCOSUPPLIER_HPP
#define CHOCOSUPPLIER_HPP
#include <string>
#include <iostream>

class ChocolateSupplier {
private:
    char* chocolateName;

public:
    // Constructor, destructor, copy constructor, and assignment operator
    ChocolateSupplier(const char* supplierName);
    ChocolateSupplier(const ChocolateSupplier& other);
    ChocolateSupplier& operator=(const ChocolateSupplier& other);
    ~ChocolateSupplier();

    // getter and setter for chocolateName
    const char* getChocolateName() const;
    void setChocolateName(const char* newName);
    
    // Method to supply chocolate
    void supplyChocolate();
};

#endif // CHOCOSUPPLIER_HPP