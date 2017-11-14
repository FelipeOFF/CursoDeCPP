#include "Point.h"

Point::Point(int x){
    this->x = x;
}

Point::~Point(){

}

void Point::setX(int x){
    this->x = x;
}

// Point2D

// Podemos fazer uma chamada direta para o outro construtor.
Point2D::Point2D(int x, int y) : Point(x){
    /*
        Na pratica isso não precisa ser feito, sempre
        que é criado a classe Point2D, ela ir'a passar pela Point,
        depois
    */
    this->y = y;
}

Point2D::~Point2D(){

}

void Point2D::setY(int y){
    this->y = y;
}

void Point2D::setXY(int x, int y){
    this->x = x;
    this->y = y;
}

// Point3D

Point3D::Point3D(int x, int y, int z) : Point2D(x, y){
    this->z = z;
}

Point3D::~Point3D(){

}

void Point3D::setZ(int z){
    this->z = z;
}

void Point3D::setXYZ(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}