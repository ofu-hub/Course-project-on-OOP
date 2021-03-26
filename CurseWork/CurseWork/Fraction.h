#ifndef FRACTION_H
#define FRACTION_H

// Класс нужен для обработки дробных чисел.
// Для начала мы введем данные.
// Если у нас число имеет вид, пример: 1 целая 1/2. То приведем его к дробному виду = 3/2.
// Потом Fraction testFirst = (3, 2).
// Так же со вторым числом.
// (условно ввели второе число) Fraction testSecond = (1, 2).
// Считаем и выводим дробь в label (to string and return.. logic lol).

class Fraction {
private:
    double num; // Числитель
    double div; // Знаменатель

public:
    Fraction() = default;
    Fraction(double n, double d);
    Fraction(const Fraction& frac);

    double getNum();
    double getDiv();

    void setNum(double n);
    void setDiv(double d);

    // Переводит смешанную дробь в обычную дробную.
    void transform(double ch, Fraction& frac);

    Fraction operator+(const Fraction &other);
    Fraction operator+(double n);
    Fraction operator-(const Fraction &other);
    Fraction operator-(double n);
    Fraction operator*(const Fraction &other);
    Fraction operator*(double n);
    Fraction operator/(const Fraction &other);
    Fraction operator/(double n);
};

#endif // FRACTION_H
// Example;
// Fraction a = (1, 2)
// Fraction b = (1, 3)
// Fraction c
// c = a + b; c.getNum and c.getDiv -> text label.
// result c = (5, 6)
//
// Fraction a = (1, 2)
// Fraction b = (1, 3)
// c = a - b; c.getNum and c.getDiv -> text label.
// result c = (1, 6)
//
// Fraction a = (2, 6)
// Fraction b = (4, 9)
// c = a * b; c.getNum and c.getDiv -> text label.
// result c = (8, 54)
//
// Fraction a = (3, 2)
// Fraction b = (5, 4)
// c = a / b; c.getNum and c.getDiv -> text label.
// result c = (12, 10)
