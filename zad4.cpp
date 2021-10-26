// zad4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	float x, wynik1, wynik2, wynik3;
	cout << "podaj x";
	cin >> x;
	cout << "dla podpunktu a:";
	if (x == 0)
	{
		cout << "x = 0";
	}
	else if (x > 0)
	{
		wynik1 = 2 * x;
		cout << "x = " << wynik1;
	}
	else if (x < 0)
	{
		wynik1 = -3 * x;
		cout << "x = " << wynik1;
	}

	cout << "dla podpunktu b:";
	if (x > 1 || x == 1)
	{
		wynik2 = x * x;
		cout << "x = " << wynik2;
	}
	else
	{
		cout << "x = " << x;
	}
	cout << "dla podpunktu c:";
	if (x > 2)
	{
		wynik3 = x + 2;
		cout << "x = " << wynik3;
	}
	else if (x == 2)
	{
		cout << "x = 8";
	}
	else
	{
		wynik3 = x - 4;
		cout << "x = " << wynik3;
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
