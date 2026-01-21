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
        std::cout
        << "🧙‍♂️🍭 The CandyMaker whispers: \"Name your candy, mortal...\"\n"
        << "   (No name given. The cauldron refuses to bubble.) 🫧\n";
        return;
    } else { std::cout
        << "🎩✨ WELCOME TO THE GLITTERY FACTORY OF DOOM (but cute) ✨🎩\n"
        << "   Ingredients acquired:\n"
        << "     🍬 Sugar from   [" << getSugarName() << "]\n"
        << "     🍫 Chocolate from [" << getChocolateName() << "]\n"
        << "   Process:\n"
        << "     1) *dramatic stirring noises* 🥄🥄🥄\n"
        << "     2) *sprinkle confetti into the laws of physics* 🎉\n"
        << "     3) *invoke sweetness protocol v17* ✅\n"
        << "   RESULT:\n"
        << "     🏆 [" << candyName << "] HAS BEEN FORGED! 🍭🔥✨\n";
    }
}