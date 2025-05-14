#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <math.h>

using namespace std;

class Kalkulator {
public:
	
	double dodawanie();
	double odejmowanie();
	double mnozenie();
	double dzielenie();
	double potega();
	double pierwiastek();
	double sinus();
	double cosinus();
	double tangens();
	double silnia();

	void wczytajRownanie();
	void wczytajLiczby();
	

private:
	
	double x = 0;
	double y = 0;
	double z = 0;
	double a = 0;
	int ileLiczb;
	string rownanie;
};