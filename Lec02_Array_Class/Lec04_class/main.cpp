#include "Complex.h"
#include"Car.h"
#include"SportsCar.h"
#include "Music.h"
/*
int main()
{
	Complex a, b, c;
	a.read("A=");
	b.read("B=");
	c.add(a, b);
	a.print(" A = ");
	b.print(" B = ");
	c.print(" A+B = ");
}
*/

int main()
{
	// Complex a, b, c;
	// a.read("A= ");
	// a.print("A= ");
	Car myCar;
	Car momsCar(10, "k5", 2);
	Car mySportsCar;

	myCar.whereAmI();
	momsCar.whereAmI();
	myCar.changeGear(3);
	momsCar.speedUp();
	momsCar.display();

	mySportsCar.speedUp();

	return 0;
}

int main()
{
	Music myMusic("");
	Music 
}

