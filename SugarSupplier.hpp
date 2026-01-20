/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#pragma once
#include <string>
#include <iostream>

class SugarSupplier {
private:
    char* sugarName;

public:
    // Constructor, destructor, copy constructor, and assignment operator
    SugarSupplier(const char* supplierName);
    SugarSupplier(const SugarSupplier& other);
    SugarSupplier& operator=(const SugarSupplier& other);
    ~SugarSupplier();


    // getter and setter for sugarName
    const char* getSugarName() const;
    void setSugarName(const char* newName);
    
    // Method to supply sugar
    void supplySugar();
};

