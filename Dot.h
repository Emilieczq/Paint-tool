
#ifndef DOT_H
#define DOT_H

#include <iostream>
#include <string>
using namespace std;

class Dot
{
public:
  Dot();
  Dot(int, int, float, float, float);
  ~Dot();

  int getX();
  int getY();
  float getR();
  float getG();
  float getB();

  void setPosition(int, int);
  void setColour(float, float, float);

private:
  int newX;
  int newY;
  float newR;
  float newG;
  float newB;
};

#endif