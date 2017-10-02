#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;


void gotoxy(int x, int y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
}


int main(int argc, char*argv[])
{
    int wiersze;
    cout<<"Podaj liczbe wierszy : ";

    cin>>wiersze;
    for (int i=1;i<=wiersze; i++)
    {
        for(int j=1 ;j<=(wiersze-i)+15 ;j++)
        {

           cout<<" ";
        }
        for(int k=1 ;k<=i+1 ;k++)
        {

            cout<<" *";
        }

            cout<<" "<<endl;

    }

    return 0;
}
