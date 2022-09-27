#include <iostream>
#include <memory>
#include<rectangle.h>
using namespace std;
rectangle operator*(double a, rectangle r){
 return rectangle(a*r[0], a*r[1]);
}
int main()
{
 auto rect1{make_unique<rectangle>(1,2)};
 cout << "Area==" << rect1->area() << endl; //poderiamos utilizar (*rect).area()
 cout <<"Perimetro==" << rect1->perimeter() << endl; //poderiamos utilizar (*rect).area()
 auto rect2 = 2*(*rect1);//operador que declaramos
 cout << "2*rect1==" << rect2[0] << " e " << rect2[1] << endl;
 cout << rect1->info << endl;
 //nao precisa criar uma classe para acessar métodos estáticos (não utiliza variaveis "dinamicas" da classe).
 rectangle::nameclass();
 return 0;
}
