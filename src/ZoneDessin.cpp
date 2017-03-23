#include "ZoneDessin.hpp"
#include "Point.hpp"
#include "Ligne.hpp"
#include "Couleur.hpp"
#include "PolygoneRegulier.hpp"

ZoneDessin::ZoneDessin(){
  Couleur C{1,0,0};
  Point p1{0,0};
  Point p2{100,200};
  
  Ligne L(C,p1,p2);
  PolygoneRegulier P{C,p2,50,5};

  _figures.push_back(&L);
  _figures.push_back(&P);

  for(int i=0; i<_figures.size();i++){
    _figures[i]->afficher();
  }
}
