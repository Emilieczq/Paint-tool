#include "Dot.h"


Dot::Dot(){

}

Dot::Dot(int x, int y, float r, float g, float b){
    newX = x;
    newY = y;
    newR = r;
    newG = g;
    newB = b;
}

Dot::~Dot(){

}
int Dot::getX(){
    return newX;
}

int Dot::getY(){
    return newY;
}

float Dot::getR(){
    return newR;
}

float Dot::getG(){
    return newG;
}

float Dot::getB(){
    return newB;
}

void Dot::setPosition(int x, int y){
    newX = x;
    newY = y;
}
void Dot::setColour(float r, float g, float b){
    newR = r;
    newG = g;
    newB = b;
}
