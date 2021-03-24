#include "clNode.h"
#include <iostream>

using namespace std;

clNode::clNode(): str(new char[5])
{
}
clNode::clNode(int x0, int y0, int num):clCircle(x0, y0), str(new char[5])
{
    Setstr(num);
}

clNode::~clNode()
{
    delete [] str;
}
void clNode::show()
{
    int x = Getx()-4;
    int y = Gety() -8;
    clCircle::show();
    outtextxy(x, y, str);
}
