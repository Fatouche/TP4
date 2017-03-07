#include "Ligne.hpp"

Ligne::Ligne(const Couleur & couleur, const Point & p0, const Point & p1) :
  FigureGeometrique(couleur), _p0(po), _p1(p1)
{}

Ligne::void afficher(){

  std::cout << "Ligne " <<  _r << "_" <<
    _g << "_" << _b << " " << p0._x << "_" <<
    p0._y << " " << p1._x << "_" << p1._y << std::endl;
  
}

Ligne::Point getP0(){
  return _p0;
}

Ligne::Point getP1(){
  return _p1;
}
