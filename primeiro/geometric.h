#ifndef GEOMETRIC_H
#define GEOMETRIC_H
#include <iostream>
#include <string>
using namespace std;
class geometric
{
     public:
         geometric() = default;
         geometric(string const &);
         ~geometric() = default;
         string info;
     protected:
         virtual double area() const = 0;
         virtual double perimeter() const = 0;
};
#endif // GEOMETRIC_H
