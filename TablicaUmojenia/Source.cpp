#include <iostream>
using namespace std;

class Tablica
{
private:
	int str = 10;
	int stb = 1;
public:
	void print()
	{
		int q;
		int x,y;
		int rez;
		int kol = 0;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				x = rand() % 10 + 1;
				y = rand()%10+1;
				q = x * y;
				cout << x << "  x  " << y << " = ";
				cout << "Enter rezult: ";
				cin >> rez;
				if (q == rez)
				{
					cout << " + ";
					kol++;
				}
				else
				{
					cout << " - ";
				}
				cout << rez;
			}
			cout << "\n";
		}
		if (kol == 10)
		{
			cout << "Your rezult = " << kol<<"\n";
			cout << "It's perfect!!1\n";
		}
		else if (kol == 8 || kol == 9)
		{
			cout << "Your rezult = " << kol<<"\n";
			cout << "It's Good))0\n";
		}
		else if (kol == 7 || kol == 6)
		{
			cout << "Your rezult = " << kol<<"\n";
			cout << "It's satisfactorily..\n";
		}
		else
		{
			cout << "Your rezult = " << kol << "\n";
			cout << "It's terrible\n";
		}
	}
};
int main()
{
	srand(time(0));
	Tablica T;
	T.print();
}