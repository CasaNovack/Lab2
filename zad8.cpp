// zad8.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	int dzialanie;
	cout << "podaj 2 liczby";
	cin >> a >> b;
	cout << "wybierz działanie:\n1.dodawanie\n2odejmowanie\n3.mnozenie\n4.dzielenie\n5.reszta z dzielenia\n";
	cin >> dzialanie;
	switch (dzialanie)
	{
	case 1: cout << "a + b = " << a + b;
	case 2: cout << "a - b = " << a - b;
	case 3: cout << "a * b = " << a * b;
	case 4:
		if (b == 0) {cout << "pamietaj cholero nie dziel przez 0"; }
		else { cout << "a / b = " << a / b; }
	case 5:
		if (b == 0) {cout << "pamietaj cholero nie dziel przez 0"; }
		else
		{
			c = fmod(a , b);
			cout << "reszta = " << c; 
		}
	}
	return 0;

}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
