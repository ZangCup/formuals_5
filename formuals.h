#ifndef FORMUALS_H
#define FORMUALS_H


class formuals
{
public:
    formuals();
private:
    int a, b, c, S, h;
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
    void setC(int c) {
        this->c = c;
    }
    int getC(){
        return c;
    }

};

#endif // FORMUALS_H
