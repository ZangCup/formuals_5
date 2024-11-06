#ifndef FORMUALS_H
#define FORMUALS_H


class formuals
{
public:
    formuals();

private:
    int a, b, c, S, h;
     bool isDataOk = true;

public:
    void setA(int a) {
        this->a = a;
        if (a <= 0) isDataOk = false;
    }

    int getA(){
        return a;
    }

    void setB(int b) {
        this->b = b;
        if (b <= 0) isDataOk = false;
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

    bool getDataOk(){
        return isDataOk;
    }

};

#endif // FORMUALS_H
