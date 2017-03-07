#include "Point.hpp"
#include "Couleur.hpp"
#include "FigureGeometrique.hpp"
#include "Ligne.hpp"
#include <iostream>

int main(){

  Couleur C{1,0,0};
  Point p1{0,0};
  Point p2{100,200};
  
  Ligne L(C,p1,p2);
  L.afficher();
  return 0;

}
