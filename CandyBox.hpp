/*=========================================
    this project was created by Niv Badichi
  ========================================*/
#pragma once
#include <iostream>

template <typename T>
class CandyBox {
private:
    T* items;
    int capacity;
    int count;
public:
    CandyBox(int size);
    ~CandyBox();


    bool addItem(const T& newItem);
    bool removeItem(int index);
    void displayItems() const;

    int getCount() const;
    int getCapacity() const;

};

template <typename T>
CandyBox<T>::CandyBox(int size) : capacity(size), count(0) {
        if (size <= 0) {
            items = nullptr;
        }
        else {
            items = new T[size];
        }
}

template <typename T>
CandyBox<T>::~CandyBox() {
    delete[] items;
}

template <typename T>
bool CandyBox<T>::addItem(const T& newItem) {
    if (items == nullptr)
        return false;
    if (count >= capacity)
        return false;
    
    items[count++] = newItem;
    return true;
}

template <typename T>
bool CandyBox<T>::removeItem(int index) {
    if (items == nullptr || index < 0 || index >= count)
        return false;
    
    for (int i = index; i < count - 1; ++i) {
        items[i] = items[i + 1];
    }
    --count;
    return true;
}


template <typename T>
void CandyBox<T>::displayItems() const {
    if (items == nullptr) {
        std::cout << "📦💀 This CandyBox is a *concept*, not a container. (Not initialized)\n";
        return;
    }
    std::cout
        << "╔══════════════════════════════════════╗\n"
        << "║  📦🍬 THE BOX OPENS... DRAMATICALLY 🍬📦  ║\n"
        << "╠══════════════════════════════════════╣\n"
        << "║  Capacity: " << capacity << " | Count: " << count << "\n"
        << "╠══════════════════════════════════════╣\n";
    if (count == 0) {
        std::cout
            << "║  (empty) 🥲  The candies have escaped into the night...\n"
        return;
    }
    for (int i = 0; i < count; ++i) {
        std::cout << "║  [" << i << "] -> " << items[i] << "\n";
    }
    std::cout << "╚══════════════════════════════════════╝\n";
}

template <typename T>
int CandyBox<T>::getCount() const {
    return count;
}

template <typename T>
int CandyBox<T>::getCapacity() const {
    return capacity;
}

