#include "PolynomeRegulier.hpp"

PolynomeRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes) :
  FigureGeometrique(couleur), _nbPoints(nbCotes+1)
{
  _points = new Point(nbCotes+1);
}

void PolynomeRegulier::afficher() const{

}

int PolynomeRegulier::getNbPoints() const{

}

Point PolynomeRegulier::getPoint(int indice) const{

}
