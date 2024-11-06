#ifndef FORMUALS_H
#define FORMUALS_H


class formuals
{
public:
    formuals();
private:
    int a, b, c, S, h;
     bool iscon = true;
public:
    void setA(int a) {
        this->a = a;
    }

    int getA(){
        return a;
    }

    void setB(int b) {
        this->b = b;
    }

    int getB(){
        return b;
    }

    int getS(){
        return S;
    }

    void setH(int h) {
        this->h = h;
    }

    int getH(){
        return h;
    }

    int getNum_C();

    int formuals_num();
    bool getBOOL(){
        return iscon;
    }

};

#endif // FORMUALS_H
