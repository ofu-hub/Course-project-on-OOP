#include "Fraction.h"

Fraction::Fraction(double n, double d) {
    this->num = n;
    this->div = d;
}

Fraction::Fraction(const Fraction& frac) {
    this->num = frac.num;
    this->div = frac.div;
}

double Fraction::getNum() {
    return num;
}

double Fraction::getDiv() {
    return div;
}

void Fraction::setNum(double n) {
    this->num = n;
}

void Fraction::setDiv(double d) {
    this->div = d;
}

// Перевод смещанной дроби к обыкновенной.
void Fraction::transform(double ch, Fraction& frac) {
    // 1 * 1/2 => 1 * 2 + 1 => 3/2
    frac.num += ch * frac.div;
}

// --- operators ---
Fraction Fraction::operator+ (const Fraction &other) {
    Fraction temp;
    if (other.div == div) {
        temp.div = other.div;
        temp.num = this->num + other.num;
    }
    else {
        temp.div = this->div * other.div;
        temp.num = (temp.div / this->div) * this->num;
        temp.num += (temp.div / other.div) * other.num;
    }
    // ... сокращение (?)
    return temp;
}

Fraction Fraction::operator- (const Fraction &other) {
    Fraction temp;
    if (other.div == div) {
        temp.div = other.div;
        temp.num = this->num - other.num;
    }
    else {
        temp.div = this->div * other.div;
        temp.num = (temp.div / this->div) * this->num;
        temp.num -= (temp.div / other.div) * other.num;
    }
    // ... сокращение (?)
    return temp;
}

Fraction Fraction::operator* (const Fraction &other) {
    Fraction temp;
    temp.num = this->num * other.num;
    temp.div = this->div * other.div;
    // ... сокращение (?)
    return temp;
}

Fraction Fraction::operator/ (const Fraction &other) {
    Fraction temp;
    temp.num = this->div / other.div;
    temp.div = this->num / other.num;
    // ... сокращение (?)
    return temp;
}
// --- operators ---
