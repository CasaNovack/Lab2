// zad6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int deszcz, bus;
	cout << "jest deszcz? 1=tak, 0=nie";
	cin >> deszcz;
	cout << "jest bus? 1=tak, 0=nie";
	cin >> bus;
	if (bus == 1 && deszcz == 1) 
	{
		cout << "Wez parasol. Dostaniesz sie na uczelnie";
	}
	else if(deszcz==1&&bus!=1)
	{
		cout << "Nie dostaniesz sie na uczelnie";
	}
	else if(deszcz!=1&&bus==1)
	{
		cout << "Dostaniesz sie na uczelnie. Milego dnia i pieknej pogody";
	}
	//Moja inwencja tworcza
	// 
	//else if (deszcz != 1 && bus != 1)
	//{
	//	cout << "Biegnij po rower spoznialski osobniku";
	//}

	return 0;
}
