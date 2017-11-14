#ifndef Point_hpp
#define Point_hpp

class Point {
    protected:
        int x;

    public:
        // O C++ aceita default values
        Point(int =0);
        ~Point();
        int getX(){return x;}
        void setX(int);
};

// Deste jeito a classe Point2D esta herdando os métodos.
class Point2D : public Point{
    protected:
        int y;

    public:
        Point2D(int = 0, int = 0);
        ~Point2D();
        int getY() { return y; }
        void setY(int);
        void setXY(int, int);
};

class Point3D : public Point2D{
    protected:
        int z;

    public:
        Point3D(int = 0, int = 0, int = 0);
        ~Point3D();
        int getZ(){return z;}
        void setZ(int);
        void setXYZ(int, int, int);
};

#endif