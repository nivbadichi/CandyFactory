/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#include "ChocolateSupplier.hpp"
#include <cstring>

ChocolateSupplier::ChocolateSupplier(const char* supplierName) {
    if (supplierName == nullptr) {
        chocolateName = nullptr;
        return;
    }
    int len = static_cast<int>(std::strlen(supplierName));
    chocolateName = new char[len + 1];
    std::strcpy(chocolateName, supplierName);
}

ChocolateSupplier::ChocolateSupplier(const ChocolateSupplier& other) {
    if (other.chocolateName == nullptr) {
        chocolateName = nullptr;
        return;
    }
    int len = static_cast<int>(std::strlen(other.chocolateName));
    chocolateName = new char[len + 1];
    std::strcpy(chocolateName, other.chocolateName);
}

ChocolateSupplier& ChocolateSupplier::operator=(const ChocolateSupplier& other) {
    if (this == &other) {
        return *this; // self-assignment check
    }

    delete[] chocolateName; // free existing resource
    chocolateName = nullptr;
    if (other.chocolateName == nullptr) {
        return *this;
    }

    int len = static_cast<int>(std::strlen(other.chocolateName));
    chocolateName = new char[len + 1];
    std::strcpy(chocolateName, other.chocolateName);

    return *this;
}

ChocolateSupplier::~ChocolateSupplier() {
    delete[] chocolateName;
}

const char* ChocolateSupplier::getChocolateName() const {
    return chocolateName;
}

void ChocolateSupplier::setChocolateName(const char* newName) {
    delete[] chocolateName; // free existing resource
    chocolateName = nullptr;

    if (newName == nullptr) {
        return;
    }

    int len = static_cast<int>(std::strlen(newName));
    chocolateName = new char[len + 1];
    std::strcpy(chocolateName, newName);
}

void ChocolateSupplier::supplyChocolate() {
    if (chocolateName != nullptr) {
        std::cout   << "╔══════════════════════════════════════╗\n"
                    << "║  🍫🌙 CHOCO DELIVERY BY MOONLIGHT 🌙🍫  ║\n"
                    << "╠══════════════════════════════════════╣\n"
                    << "║  Supplier: [" << chocolateName << "]\n"
                    << "║  Action  : *unfolds velvet cocoa cloak*\n"
                    << "║  Result  : CHOCOLATE FLOWS LIKE A RIVER 🍫🌊\n"
                    << "╚══════════════════════════════════════╝\n";
    } else {
        std::cout << "⚠️🍫 The chocolate truck arrived... but forgot its NAME TAG.\n"
            << "   A mysterious stranger drops chocolate dramatically and vanishes 🕵️‍♂️✨\n";
    }
}