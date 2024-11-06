#include "formuals.h"

formuals::formuals()
{

}
int formuals::getNum_C() {
    if(a <= 0 && b <= 0) {
        this->iscon = false;
    }
    this->c = (this->a + this->b) / 2;

    return this->c;
}
int formuals::formuals_num() {
    this->S = this->c * this->h;
    return S;
}
