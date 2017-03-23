#include "PolygoneRegulier.hpp"
#include <iostream>
#include <sstream>

#define PI 3.14159265

PolygoneRegulier::PolygoneRegulier(const Couleur& couleur, const Point& centre,
				   int rayon, int nbCotes) :
  FigureGeometrique(couleur), _nbPoints(nbCotes + 1)
{
  _points = new Point[nbCotes +1];
  _points[0] = centre;
  
  double ang = (2 * PI) / nbCotes;

  for (int i = 0; i < _nbPoints; i++)
  {
    int x = centre._x + (rayon * cos(i * ang));
    int y = centre._y + (rayon * sin(i * ang));
    Point p{x, y};
    if(i !=_nbPoints -1){
      _points[i + 1] = p;
    }
  }
}

void PolygoneRegulier::afficher() const
{
  std::stringstream stream;
  stream << "Polygone Regulier "  << _couleur._r << "_" << _couleur._g << "_" << _couleur._b << " ";

  for (int i = 1; i < _nbPoints; i++)
    stream << _points[i]._x << "_" << _points[i]._y << " ";

  std::cout << stream.str() << std::endl;
}

int PolygoneRegulier::getNbPoints() const { return _nbPoints; }

Point PolygoneRegulier::getPoint(int indice) const
{
  return _points[indice];
}
