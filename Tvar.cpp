#include "Tvar.h"
#include <fstream>
double Tvar::obsah() const

{


 std::ofstream kontrolni_soubor ("body.txt");
 const int N = 100;
 const double xl = x_min();
 const double xr = x_max();
 const double yl = y_min();
 const double yr = y_max();

 const double dx = (xr - xl)/double(N);
 const double dy = (yr - yl)/double(N);

 for (int i = 0; i <N; ++i)  {
      kontrolni_soubor << xl + i*dx << " " << yl + i*dy << "\n";

 }


 return -1.2;

}

