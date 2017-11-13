#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

class User {
    private:
        int ID;
        static int counter;
    public:
        User();
        ~User();
        int getId();
        // O certo é deixa-lo como estatico
        static int getCounter(){
            return counter;
        }
};

#endif