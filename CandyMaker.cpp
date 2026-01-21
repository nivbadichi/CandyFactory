/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#include "CandyMaker.hpp"
#include <iostream>

CandyMaker::CandyMaker(const char* sugarSupplierName, const char* chocolateSupplierName)
    : SugarSupplier(sugarSupplierName), ChocolateSupplier(chocolateSupplierName) {
}

void CandyMaker::makeCandy(const char* candyName) {
    if (candyName == nullptr) {
        std::cout << "Cannot make candy without a name." << std::endl;
        return;
    } 
    std::cout << "using Sugar from: " << getSugarName() << std::endl;
    std::cout << "using Chocolate from: " << getChocolateName() << std::endl;
    std::cout << "Making candy: " << candyName << "!" << std::endl;
}