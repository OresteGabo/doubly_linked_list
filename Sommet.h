//
// Created by oreste on 28/09/23.
//

#ifndef DOUBLY_LINKED_LIST_SOMMET_H
#define DOUBLY_LINKED_LIST_SOMMET_H


#include "Point.h"

class Sommet {
friend class Polygon;
public:
    Point coordonnees()const;
    [[nodiscard]] Sommet* suivant()const;
    [[nodiscard]] Sommet* precendent()const;
private:
    Sommet(const Point& p, Sommet* suivant=nullptr, Sommet* precendent=nullptr);
    ~Sommet();

    Point d_coordonnes;
    Sommet* d_suivant;
    Sommet* d_precendent;
};


#endif //DOUBLY_LINKED_LIST_SOMMET_H
