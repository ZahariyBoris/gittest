#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "UKRAINIAN");

    double *Ax, *Ay, *Bx, *By, *Cx, *Cy;
    Ax = new double;
    Ay = new double;
    Bx = new double;
    By = new double;
    Cx = new double;
    Cy = new double;

    *Ax = 0; 
	*Ay = 0;
    *Bx = 4; 
	*By = 3;
    *Cx = -4;
	*Cy = 5;

    double sideAB = sqrt(pow(*Bx - *Ax, 2) + pow(*By - *Ay, 2));
    double sideBC = sqrt(pow(*Cx - *Bx, 2) + pow(*Cy - *By, 2));
    double sideCA = sqrt(pow(*Ax - *Cx, 2) + pow(*Ay - *Cy, 2));

    double semiPerimeter = (sideAB + sideBC + sideCA) / 2;
    double area = sqrt(semiPerimeter * (semiPerimeter - sideAB) * (semiPerimeter - sideBC) * (semiPerimeter - sideCA));
    double height = 2 * area / sideBC;

    double medianX = (*Ax + *Bx + *Cx) / 3;
    double medianY = (*Ay + *By + *Cy) / 3;

    cout << "Висота трикутника: " << height << endl;
    cout << "Координати точки, що ділить медіану: (" << medianX << ", " << medianY << ")" << endl;
    
    delete Ax;
    delete Ay;
    delete Bx;
    delete By;
    delete Cx;
    delete Cy;

    return 0;
}
