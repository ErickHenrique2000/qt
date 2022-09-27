#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <geometric.h>
#include <array>
using namespace std;

class rectangle : public geometric, public array<double,2>{
//private: //poderiamos declarar algo assim, em vez de herdar o vetor. Mas é um exemplo. Assim, evitariamos a sintaxe com "this"
// array<double,2> _v;
public:
 rectangle(string const & s = "Euclidean Geometry: Dimension 2");
 rectangle(double, double, string const & s = "Euclidean Geometry: Dimension 2");
 ~rectangle();
 double area() const override final;
 double perimeter() const override final;
 //metodo estatico
 static void nameclass();
};
#endif
