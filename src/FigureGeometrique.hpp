#ifndef FIGUREGEOMETRIQUE_HPP
#define FIGUREGEOMETRIQUE_HPP

#include "Couleur.hpp"

class  FigureGeometrique{
private :
  Couleur _couleur;
public :
  FigureGeometrique(const Couleur & couleur);
  Couleur getCouleur() const;
  
};

#endif
