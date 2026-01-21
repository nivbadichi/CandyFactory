
/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#include "CandyMaker.hpp"
#include "CandyBox.hpp"
#include "SugarSupplier.hpp"
#include "ChocolateSupplier.hpp"
#include <iostream>
#include <cstring>

int main() {
    
CandyMaker maker("SugarCo", "ChocoDelight"); // Create a CandyMaker with suppliers
    // supply ingredients and make candy
    maker.supplySugar();
    maker.supplyChocolate();
    
    // Make some candy
    maker.makeCandy("Fudge Surprise");

    std::cout << "\n--- CandyBox test ---\n";

    CandyBox<const char*> box(5); // Create a CandyBox for candy names
    box.displayItems(); // Should indicate the box is empty

    // Add some candies
    box.addItem("SourLollipop");
    box.addItem("MintChoco");
    box.addItem("GummyBear");

    // Display items
    box.displayItems();

    // should remove MintChoco
    std::cout << "\nRemoving index 1...\n";
    box.removeItem(1); 
    
    // Display items again after removal of MintChoco
    box.displayItems();
    return 0;
}
