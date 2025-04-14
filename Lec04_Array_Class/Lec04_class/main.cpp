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
	//music streaming service¸¦ »ý¼º
	MusicStreamingService my_service("spotify");
	my_service.addMusic("Polarloid", "ENHYPEN", "DIMENSION", 2022);
	my_service.addMusic("Ditto", "NewJeans", "ALBUM", 2023);
	my_service.addMusic("CAKE", "ITZY", "ALBUM", 2023);
	my_service.addMusic("SundayMorning", "Marron5", "ALBUM", 2023);

	//search music by title
	string music_title;
	cout << "Enter the Music Title: ";
	cin >> music_title;
	Music* result = my_service.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found: " << result->getTitle() << "by" << result->getArtist() << endl;
	}
	else {
		cout << "not found" << endl;
	}

}



