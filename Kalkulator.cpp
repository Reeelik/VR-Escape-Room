#include "Kalkulator.h"


double Kalkulator::dodawanie() {

	if (ileLiczb == 2) return(x + y);
	if (ileLiczb == 3) return(x + y + z);
	if (ileLiczb == 4) return(x + y + z + a);

}

double Kalkulator::odejmowanie() {

	if (ileLiczb == 2) return(x - y);
	if (ileLiczb == 3) return(x - y - z);
	if (ileLiczb == 4) return(x - y - z - a);

}

double Kalkulator::mnozenie() {

	if (ileLiczb == 2) return(x * y);
	if (ileLiczb == 3) return(x * y * z);
	if (ileLiczb == 4) return(x * y * z * a);

}

double Kalkulator::dzielenie() {

	

	if (ileLiczb == 2) { 
		if (y == 0) {
			cout << "Nie mozna dzielic przez 0" << endl;
			return 0;
		}
		return(x / y);
	}

	if (ileLiczb == 3) {
		if (z == 0 ) {
			cout << "Nie mozna dzielic przez 0" << endl;
			return 0;
		}
		return(x / y / z);
	}

	if (ileLiczb == 4) {
		if ( a == 0) {
			cout << "Nie mozna dzielic przez 0" << endl;
			return 0;
		}
		return(x / y / z / a);
	}

}

double Kalkulator::potega() {

	return(pow(x,y));

}

double Kalkulator::pierwiastek() {

	return(pow(x, (1/y)));

}

double Kalkulator::sinus() {

	return(sin(x));

}

double Kalkulator::cosinus() {

	return(cos(x));

}

double Kalkulator::tangens() {

	return(tan(x));

}

double Kalkulator::silnia() {
	double silnia = 1;
	for (int i = x; i > 1; i--)
		silnia *= i;

	return(silnia);

}

void Kalkulator::wczytajLiczby() {
	if (ileLiczb==2){
		cout << "Podaj pierwsza liczbe " << endl;
		cin >> x;
		cout << "Podaj druga liczbe " << endl;
		cin >> y;
	}
	else if(ileLiczb==1){
		cout << "Podaj  liczbe " << endl;
		cin >> x;
	}
	else if (ileLiczb == 3) {
		cout << "Podaj  liczbe " << endl;
		cin >> x;
		cout << "Podaj druga liczbe " << endl;
		cin >> y;
		cout << "Podaj trzecia liczbe " << endl;
		cin >> z;
	}
	else if (ileLiczb == 4) {
		cout << "Podaj  liczbe " << endl;
		cin >> x;
		cout << "Podaj druga liczbe " << endl;
		cin >> y;
		cout << "Podaj trzecia liczbe " << endl;
		cin >> z;
		cout << "Podaj czwarta liczbe " << endl;
		cin >> a;
	}
}

void Kalkulator::wczytajRownanie() {
	ileLiczb = 2;
	cout << "Podaj typ rownania" << endl;
	cin >> rownanie;
	
	if (rownanie.find("dodawanie") != string::npos) {
		cout << "Ile liczb potrzebujesz " << endl;
		cin >> ileLiczb;
		cout << "Dodajemy " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << dodawanie() << endl;
	}

	if (rownanie.find("odejmowanie") != string::npos) {
		cout << "Ile liczb potrzebujesz " << endl;
		cin >> ileLiczb;
		cout << "Odejmujemy " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << odejmowanie() << endl;
	}

	if (rownanie.find("mnozenie") != string::npos) {
		cout << "Ile liczb potrzebujesz " << endl;
		cin >> ileLiczb;
		cout << "Mnozymy " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << mnozenie() << endl;
	}

	if (rownanie.find("dzielenie") != string::npos) {
		cout << "Ile liczb potrzebujesz " << endl;
		cin >> ileLiczb;
		cout << "Dzielimy " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << dzielenie() << endl;
	}

	if (rownanie.find("potega") != string::npos) {
		cout << "Potegujemy " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << potega() << endl;
	}

	if (rownanie.find("pierwiastek") != string::npos) {
		cout << "Pierwiastujemy " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << pierwiastek() << endl;
	}
	
	if (rownanie.find("sin") != string::npos) {
		ileLiczb = 1;
		cout << "Sin " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << sinus() << endl;
	}

	if (rownanie.find("cos") != string::npos) {
		ileLiczb = 1;
		cout << "Cos " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << cosinus() << endl;
	}

	if (rownanie.find("tangens") != string::npos) {
		ileLiczb = 1;
		cout << "Cos " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << tangens() << endl;
	}

	if (rownanie.find("silnia") != string::npos) {
		ileLiczb = 1;
		cout << "Cos " << endl;
		wczytajLiczby();
		cout << "Twoj wynik to " << silnia() << endl;
	}
}