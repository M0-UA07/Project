#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int H, M, S;
	cout << "Hours :" << endl;
	cin >> H;
	cout << "Minutes :" << endl;
	cin >> M;
	cout << "Second :" << endl;
	cin >> S;
	while (1) {
		system("cls");

		if (S > 59) {
			M++;
			S = 0;
		}
		if (M > 59) {
			H++;
			M = 0;
		}
		if (H > 23)
		{
			H = 0;
		}
		cout << H << ":" << M << ":" << S << endl;
		S++;
		Sleep(900);
	}
}
