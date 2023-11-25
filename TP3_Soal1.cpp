/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// sendi putra alicia / 19623021

#include <iostream>
#include <iomanip>

class LinearLine {
private:
    float x1, y1, x2, y2;

public:
    LinearLine(float x1, float y1, float x2, float y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    float gradient() {
        return (y2 - y1) / (x2 - x1);
    }

    float y_intercept() {
        return y1 - gradient() * x1;
    }

    void operator+(float a) {
        y1 += a;
        y2 += a;
    }

    void printEquation() {
        float m = gradient();
        float c = y_intercept();
        std::cout << "y = " << m << "x + " << c << std::endl;
    }

    void printPoints() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "(x1, y1) = (" << x1 << ", " << y1 << ")" << std::endl;
        std::cout << "(x2, y2) = (" << x2 << ", " << y2 << ")" << std::endl;
    }
};

int main() {
    LinearLine line(1, 8, 2, 3);
    line.printPoints();

    std::cout << "gradient = " << line.gradient() << std::endl;
    std::cout << "y_intercept = " << line.y_intercept() << std::endl;
    line.printEquation();

    float shift = 15; // Ubah nilai sesuai yang diinginkan
    line + shift;
    std::cout << "Setelah digeser sejauh " << shift << ", didapatkan persamaan baru:\n";
    line.printEquation();

    return 0;
}
