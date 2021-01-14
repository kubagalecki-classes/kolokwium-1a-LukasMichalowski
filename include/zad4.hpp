#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle> & V)
{
double M=0;
int x=V.size();
for(int i = 0; i<V.size();++i){
M+=V[i].ileMaki(x);
x-=(i+1);
}

if(M>100){
  throw 5;
}
else if(M<100 && M>50)
{
  throw 1243421.;
}
else
{
  return M;
}
}