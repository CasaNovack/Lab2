

#include <iostream>
using namespace std;

int main()
{
	int znizka, premia;
	cout << "jest znizka? 1=tak, 0=nie";
	cin >> znizka;
	cout << "jest premia? 1=tak, 0=nie";
	cin >> premia;
	if (znizka != 1 || premia == 1 )
	{
		cout << "Mozesz kupic samochod! Znizki na samochod nie ma :c"<<endl;
	}
	if (znizka != 1 || premia != 1)
	{
		cout << "Zakup samochodu trzeba odlozyc na pozniej... znizki na samochod nie ma :c"<<endl;
	}
	if (znizka == 1 || premia == 1)
	{
		cout << "Mozesz kupic samochod"<<endl;
	}
	return 0;
}