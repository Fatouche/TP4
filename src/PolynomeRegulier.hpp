#ifndef POLYNOMEREGULIER_HPP
#define POLYNOMEREGULIER_HPP

#include "FigureGeometrique.hpp"
#include "Point.hpp"

class PolynomeRegulier : public FigureGeometrique{
protected :
  int _nbPoints;
  int _points;
public :
  PolynomeRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes);
  void afficher() const;
  int getNbPoints() const;
  Point getPoint(int indice) const;
};
