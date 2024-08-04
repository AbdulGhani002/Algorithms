#include <stdio.h>
#include <iostream>

template<class T>
class Rectangle {
    public:
        T length;
        T breadth; 
        T area();
};

template<class T>
T Rectangle<T>::area() {
    return length * breadth;
}

int main() {
    Rectangle<int> rect;
    rect.length = 5;
    rect.breadth = 10;
    std::cout << "Area: " << rect.area() << std::endl;
    return 0;
}
