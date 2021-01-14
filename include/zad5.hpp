#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
bool funktor(Tagliatelle x,Tagliatelle y){
   
    return x<y;
}
template <typename T, typename Y> Tagliatelle sortujTagliatelle(T t, Y y)
{
std::sort(t,y,funktor);
}