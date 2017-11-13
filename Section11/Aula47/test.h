#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

class Test{
    public:
        // Variaveis comuns não podem ser alteradas
        // Porem ponteiros podem
        int x;
        int y;
        int * p;
        Test(int, int, int);
        ~Test();
};

#endif