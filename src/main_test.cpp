#include "Point.hpp"
#include "Couleur.hpp"
#include "FigureGeometrique.hpp"
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include <iostream>

int main(){

  Couleur C{1,0,0};
  Point p1{0,0};
  Point p2{100,200};
  
  Ligne L(C,p1,p2);
  L.afficher();

  PolygoneRegulier P{C,p2,50,5};
  P.afficher();

  PolygoneRegulier P1{C, p1,50,2};
  P1.afficher();
  
  return 0;

}
