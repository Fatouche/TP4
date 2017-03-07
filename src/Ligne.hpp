#ifndef LIGNE_HPP
#define LIGNE_HPP
#include "FigureGeometrique.hpp"
#include "Point.hpp"

class Ligne : public FigureGeometrique{
private :
  Point _p0;
  Point _p1;
public:
  Ligne(const Couleur & couleur, const Point & p0, const Point & p1);
  void afficher();
  Point getP0();
  Point getP1();
};

#endif
