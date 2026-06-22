#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout << "Drawing shape" << endl;
    }
    virtual void erase(){
        cout << "Erasing shape" << endl;
    } 
};
class Circle: public Shape{
    public:
    void draw() override{
        cout << "Darwing circle" << endl;
    }
    void erase() override{
        cout << "Erasing circle" << endl;
    }
};
class Triangle : public Shape{
    public:
    void draw() override{
        cout << "Drawing triangle" << endl;
    }
    void erase() override{
        cout <<"Erasing triangle" << endl;
    }
};
class Square : public Shape{
    public:
    void draw() override{
        cout << "Drawing square" << endl;
    }
    void erase() override{
        cout << "Erasing square" << endl;
    }
};
int main(){
    Shape* circle= new Circle();
    Shape* triangle= new Triangle();
    Shape* square= new Square();
    circle->draw();
    circle->erase();
    triangle->draw();
    triangle->erase();
    square->draw();
    square->erase();
    return 0;
}
