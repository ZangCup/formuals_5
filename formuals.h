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
        if (a <= 0) iscon = false;
    }

    int getA(){
        return a;
    }

    void setB(int b) {
        this->b = b;
        if (b <= 0) iscon = false;
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
        if(iscon == true)
        return h;
    }

    int getNum_C();

    int formuals_num();
    bool getBOOL(){
        return iscon;
    }

};

#endif // FORMUALS_H
