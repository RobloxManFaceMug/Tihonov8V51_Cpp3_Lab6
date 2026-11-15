#pragma once
#include <iostream>

class Shapes {
public:
    virtual void Draw();
    virtual ~Shapes() = default;
};

class Circle: public Shapes {
    void Draw () override {
        std::cout << "circle drawn" << std::endl;
    }
};

class Rectangle: public Shapes {
    void Draw () override {
        std::cout << "rectangle drawn" << std::endl;
    }
};

class Triangle: public Shapes {
    void Draw () override {
        std::cout << "triangle drawn" << std::endl;
    }
};