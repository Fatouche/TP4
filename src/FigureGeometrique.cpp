#include "FigureGeometrique.hpp"

FigureGeometrique::FigureGeometrique(const Couleur & couleur) {
  _couleur = couleur;
}

Couleur FigureGeometrique::getCouleur() const{
  return _couleur;
}
