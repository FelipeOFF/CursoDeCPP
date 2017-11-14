#ifndef Point_hpp
#define Point_hpp

#include "iostream"

using namespace std;

template <typename T>
class Point
{
  protected:
    T x;

  public:
    // O C++ aceita default values
    Point(T = 0);
    ~Point();
    T getX() { return x; }
    void setX(T);
};

template <typename T>
Point<T>::Point(T x)
{
    this->x = x;
}

template <typename T>
Point<T>::~Point()
{
}

template <typename T>
void Point<T>::setX(T x)
{
    this->x = x;
}


template <typename T>
class Point2D : public Point<T>
{
  protected:
    T y;

  public:
    Point2D(T = 0, T = 0);
    ~Point2D();
    T getY() { return y; }
    void setX(T);
    void setY(T);
    void setXY(T, T);
    Point2D operator+(Point2D);
};

// Point2D

template <typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x)
{
    this->y = y;
}

template <typename T>
Point2D<T>::~Point2D()
{
}

template <typename T>
void Point2D<T>::setX(T x)
{
    this->x = x;
}

template <typename T>
void Point2D<T>::setY(T y)
{
    this->y = y;
}

template <typename T>
void Point2D<T>::setXY(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <typename T>
Point2D<T> Point2D<T>::operator+(Point2D o)
{
    Point2D tmp;
    tmp.setXY((this->getX() + o.getX()), (this->getY() + o.getY()));
    return tmp;
}

/*
    As classes aqui também se diferem não só pelo nome
    mais também pelo tipo que elas carregam.
*/

template <typename K>
class Point<K*>{

    public:
        Point(K a = 0){
            cout << "Você pode usar ponteiros aqui" << endl;
        }
};

#endif