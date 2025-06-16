#include <iostream>

#include "Circle.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"


int main()
{
    Rectangle R1("R1", 2.0, 3.0);
    Rectangle R2("R2", 3.0, 4.0);
    Rectangle R3;
    Square S1("S1", 5.0);
    Circle C1("C1", 5.0);
    Triangle T1("t1", 5.0);
    R1.Info();
    std::cout << std::endl;
    R2.Info();
    std::cout << std::endl;
    R3.Info();
    std::cout << std::endl;
    S1.Info();
    cout<<endl;
    C1.Info();
    cout<<endl;
    T1.Info();
    cout<<endl;
    std::cout << "Wykorzystanie wskaźnika" << std::endl;
    Figure* figures[] = {&R1, &R2, &R3, &S1, &C1, &T1};
    for (int i = 0; i <  5; i++) {
        figures[i]->Info();
        cout<<endl;
    }
    std::cout << "Wykorzystanie referencji" << std::endl;
    Figure& ref_s = S1;
    Figure& ref_r = R1;
    std::cout << std::endl;
    ref_s.Info();
    std::cout << std::endl;
    ref_r.Info();

}