#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point* move(int dx, int dy) {
        x += dx;
        y += dy;
        return this;
    }

    void display(){
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p(1, 2);
    p.move(2, 3)->move(-1, 4);
    p.display();
    return 0;
}