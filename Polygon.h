//
// Created by oreste on 28/09/23.
//

#ifndef DOUBLY_LINKED_LIST_POLYGON_H
#define DOUBLY_LINKED_LIST_POLYGON_H


#include "Sommet.h"

class Polygon {
public:
    Polygon();
    ~Polygon();
    Sommet* premier()const;
    Sommet* ajouteSommet(const Point&, Sommet* prec=nullptr);
    void supprimeSommet(Sommet *s);
    void dessine()const;

private:
    Sommet* d_premier;
};


#endif //DOUBLY_LINKED_LIST_POLYGON_H
