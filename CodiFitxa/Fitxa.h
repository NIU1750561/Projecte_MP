#ifndef FITXA_H
#define FITXA_H

#include <iostream>
#include <vector>
#include <string>
#include "Posicio.h"
#include "Moviment.h"

using namespace std;

typedef enum {
    TIPUS_NORMAL,
    TIPUS_DAMA,
    TIPUS_EMPTY
} TipusFitxa;

typedef enum {
    COLOR_NEGRE,
    COLOR_BLANC
} ColorFitxa;

class Fitxa {
private:
    TipusFitxa m_tipus;
    ColorFitxa m_color;
    vector<Moviment> m_movimentsValids;

public:
    // Constructors
    Fitxa(); // Fitxa buida
    Fitxa(ColorFitxa color, TipusFitxa tipus);

    // Getters
    TipusFitxa getTipus() const;
    ColorFitxa getColor() const;
    bool esBuida() const;
    bool esDama() const;

    // Setters
    void setTipus(TipusFitxa tipus);
    void setColor(ColorFitxa color);

    // Metodes per la gestio de moviments
    void afegeixMovimentValid(const Moviment& moviment);
    void netejaMoviments();
    const vector<Moviment>& getMovimentsValids() const;

    // Conversio a dama
    void convertirEnDama();
};

#endif