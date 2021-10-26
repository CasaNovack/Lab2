// zad2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	float delta, wynik1, wynik2, pdelta;
	cout << "podaj a, b i c";
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "to nie rownanie kwadratowe";
	}
	else
	{
		delta = (b * b) - (4 * a * c);
		if (delta == 0)
		{
			wynik1 = (-1 * b) / (2 * a);
			cout << "jedno rozwiazanie rowne " << wynik1;
		}
		else if (delta > 0)
		{
			pdelta = sqrt(delta);
			wynik2 = ((-1 * b) + pdelta) / (2 * a);
			wynik1 = ((-1 * b) - pdelta) / (2 * a);
			cout << "2 rozwiazania rzeczywiste:" << endl << "x1= " << wynik1 << endl << "x2= " << wynik2;
		}
		else
		{
			cout << "w zbiorze liczb rzeczywistych nie ma rozwiazan";
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
