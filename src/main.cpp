#include <gtkmm.h>
#include "ViewerFigures.hpp"
#include "ZoneDessin.hpp"

int main(int argc, char* argv[]){

  ViewerFigures OW(argc,argv);
  OW.run();
  
  return 0;
}
