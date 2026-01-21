/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#include "SugarSupplier.hpp"
#include <cstring>

SugarSupplier::SugarSupplier(const char* supplierName) {
    if (supplierName == nullptr) {
        sugarName = nullptr;
        return;
    }
    int len = static_cast<int>(std::strlen(supplierName));
    sugarName = new char[len + 1];
    std::strcpy(sugarName, supplierName);
}

SugarSupplier::SugarSupplier(const SugarSupplier& other) {
    if (other.sugarName == nullptr) {
        sugarName = nullptr;
        return;
    }
    int len = static_cast<int>(std::strlen(other.sugarName));
    sugarName = new char[len + 1];
    std::strcpy(sugarName, other.sugarName);
}

SugarSupplier& SugarSupplier::operator=(const SugarSupplier& other) {
    if (this == &other) {
        return *this; // self-assignment check
    }

    delete[] sugarName; // free existing resource
    sugarName = nullptr;

    if (other.sugarName == nullptr) {
        return *this;
    }

    int len = static_cast<int>(std::strlen(other.sugarName));
    sugarName = new char[len + 1];
    std::strcpy(sugarName, other.sugarName);

    return *this;
}

SugarSupplier::~SugarSupplier() {
    delete[] sugarName;
}

const char* SugarSupplier::getSugarName() const {
    return sugarName;
}

void SugarSupplier::setSugarName(const char* newName) {
    delete[] sugarName; // free existing resource
    sugarName = nullptr;

    if (newName == nullptr) {
        return;
    }

    int len = static_cast<int>(std::strlen(newName));
    sugarName = new char[len + 1];
    std::strcpy(sugarName, newName);
}

void SugarSupplier::supplySugar() {
    if (sugarName != nullptr) { 
        std::cout   << "╔══════════════════════════════════════╗\n"
                    << "║  🍬✨ SUGAR SUMMONING CEREMONY ✨🍬║\n"
                    << "╠══════════════════════════════════════╣\n"
                    << "║  Supplier: [" << sugarName << "]\n"
                    << "║  Action  : *opens portal of sprinkles*\n"
                    << "║  Result  : SUGAR is now raining!!! ☁️🍭\n"
                    << "╚══════════════════════════════════════╝\n";  
                } else {
                std::cout << "⚠️🍬 The sugar truck arrived... but forgot its NAME TAG.\n"
            << "   A mysterious stranger drops sugar dramatically and vanishes 🕵️‍♂️✨\n";
    }
}