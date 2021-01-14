#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle{
private:
double L;
double W;
double R;
const double C;
public:
    Tagliatelle(): L(0.5), W(0.5), R(0.5), C(0.5) {};
    Tagliatelle(double l,double w,double r,double c):  L(l), W(w), R(r), C(c) {};

    double ileMaki(unsigned P) const {
        return  P*L*W*(1.-R)*C;
    }


};