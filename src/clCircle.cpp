#include "clCircle.h"
#include <iostream>
#include <graphics.h>

using namespace std;

clCircle::clCircle()
{
}
clCircle::clCircle(int x0, int y0): x (x0), y (y0)
{
}

clCircle::~clCircle()
{
}

void clCircle::show()
{
    circle(x, y, 20);

}
