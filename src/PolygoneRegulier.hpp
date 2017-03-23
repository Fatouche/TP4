#ifndef POLYGONEREGULIER_HPP
#define POLYGONEREGULIER_HPP

#include "FigureGeometrique.hpp"
#include "Point.hpp"
#include "Couleur.hpp"
#include <cmath>

class PolygoneRegulier : public FigureGeometrique{
protected :
  int _nbPoints;
  Point* _points;
public :
  PolygoneRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes);
  void afficher() const;
  int getNbPoints() const;
  Point getPoint(int indice) const;
};

#endif
