#include "rectangle.h"
rectangle::rectangle(string const & s) : geometric(s) {}
rectangle::rectangle(double a, double b, string const &s) :
geometric(s){
 (*this)[0] = a;
 (*this)[1] = b;
}
rectangle::~rectangle(){}
double rectangle::area() const{
 return (*this)[0]*(*this)[1];
}
double rectangle::perimeter() const{
 return 2*(*this)[0] + 2*(*this)[1];
}
void rectangle::nameclass(){
 cout << "rectangle" << endl;
}
