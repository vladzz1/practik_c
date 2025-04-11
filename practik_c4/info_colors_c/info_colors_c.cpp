#include <iostream>
#include <windows.h>
using namespace std;

void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void main()
{
	for (short i = 0; i < 40; i++)
	{
		setColor(i);
		cout << "text text text\n";
	}
	setColor(7);
	//0. чорний
	//1. синій
	//2. зелений
	//3. блакитний
	//4. червоний
	//5. фіолетовий
	//6. оранживий
	//7. білий - стандартний
	//8. сірий
	//9. інший блакитний
	//10.салатовий
	//11.світліший блакитний
	//12.рожевий
	//13.інший білий
	//14.ще інший білий
	//після 14 йде колір фону
}