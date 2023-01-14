#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	char kw[10] = {'o','1','2','3','4','5','6','7','8','9'};
	int gracz = 1;
	int wybor;
	int wynik = -1;
	do
	{


	cout<<"\tKolko i krzyzyk"<<endl<<endl;
	cout<<"Gracz 1 (X)  ||  Gracz 2 (Y)"<<endl;

		cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << kw[1] << "  |  " << kw[2] << "  |  " << kw[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << kw[4] << "  |  " << kw[5] << "  |  " << kw[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << kw[7] << "  |  " << kw[8] << "  |  " << kw[9] << endl;
	cout << "     |     |     " << endl << endl;

	cout<<"(Gracz "<<gracz<<") wybiera pole: ";
	cin>>wybor;

	if (gracz == 1)
	{
		switch(wybor)
		{
			case 1:
			if(kw[1]=='X'||kw[1]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[1] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 1"<<endl;
			}
			break;
			
			case 2:
			if(kw[2]=='X'||kw[2]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[2] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 2"<<endl;
			}
			break;

			case 3:
			if(kw[3]=='X'||kw[3]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[3] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 3"<<endl;
			}
			break;
			case 4:
			if(kw[4]=='X'||kw[4]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[4] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 4"<<endl;
			}
			break;
			case 5:
			if(kw[5]=='X'||kw[5]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[5] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 5"<<endl;
			}
			break;
			case 6:
			if(kw[6]=='X'||kw[6]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[6] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 6"<<endl;
			}
			break;
			case 7:
			if(kw[7]=='X'||kw[7]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[7] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 7"<<endl;
			}
			break;
			case 8:
			if(kw[8]=='X'||kw[8]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[8] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 8"<<endl;
			}
			break;
			case 9:
			if(kw[9]=='X'||kw[9]=='Y')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[9] = 'X';
			 gracz = 2;
			 cout<<"Gracz 1 wybiera pole 9"<<endl;
			}
			break;

			default:cout<<"Niemozliwy ruch"<<endl;
			system("pause");
			break;
		}
	}
	else
	{
		switch(wybor)
		{
			case 1:
			if(kw[1]=='Y'||kw[1]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[1] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 1"<<endl;
			}
			break;

			case 2:
			if(kw[2]=='Y'||kw[2]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[2] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 2"<<endl;
			}
			break;

			case 3:
			if(kw[3]=='Y'||kw[3]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[3] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 3"<<endl;
			}
			break;
			case 4:
			if(kw[4]=='Y'||kw[4]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[4] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 4"<<endl;
			}
			break;
			case 5:
			if(kw[5]=='Y'||kw[5]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[5] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 5"<<endl;
			}
			break;
			case 6:
			if(kw[6]=='Y'||kw[6]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[6] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 6"<<endl;
			}
			break;
			case 7:
			if(kw[7]=='Y'||kw[7]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[7] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 7"<<endl;
			}
			break;
			case 8:
			if(kw[8]=='Y'||kw[8]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[8] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 8"<<endl;
			}
			break;
			case 9:
			if(kw[9]=='Y'||kw[9]=='X')
			{
				cout<<"Niemozliwy ruch"<<endl;
				system("pause");
			}
			else
			{
			  kw[9] = 'Y';
			 gracz = 1;
			 cout<<"Gracz 2 wybiera pole 9"<<endl;
			}
			break;

			default:cout<<"Niemozliwy ruch"<<endl;
			system("pause");
			break;
		}
	}





	if (kw[1] == kw[2] && kw[2] == kw[3])
		wynik = 1;
	else if (kw[4] == kw[5] && kw[5] == kw[6])
		wynik = 1;
	else if (kw[7] == kw[8] && kw[8] == kw[9])
		wynik = 1;
	else if (kw[1] == kw[4] && kw[4] == kw[7])
		wynik = 1;
	else if (kw[2] == kw[5] && kw[5] == kw[8])
		wynik = 1;
	else if (kw[3] == kw[6] && kw[6] == kw[9])
		wynik = 1;
	else if (kw[1] == kw[5] && kw[5] == kw[9])
		wynik = 1;
	else if (kw[3] == kw[5] && kw[5] == kw[7])
		wynik = 1;
	else if (kw[1] != '1' && kw[2] != '2' && kw[3] != '3' && kw[4] != '4' &&
    kw[5] != '5' && kw[6] != '6' && kw[7] != '7' && kw[8] != '8' && kw[9] != '9')
		wynik = 0;
	else
		wynik = -1;


	 system("cls");
	}
	while(wynik == -1);

		cout<<"\tKolko i Krzyzyk"<<endl<<endl;
	cout<<"Gracz 1 (X)  ||  Gracz 2 (Y)"<<endl;

			cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << kw[1] << "  |  " << kw[2] << "  |  " << kw[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << kw[4] << "  |  " << kw[5] << "  |  " << kw[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << kw[7] << "  |  " << kw[8] << "  |  " << kw[9] << endl;
	cout << "     |     |     " << endl << endl;

	if(wynik==1)
	{
		if (gracz == 1)
		{
		 gracz = 2;
		}
		else if (gracz == 2)
		{
		 gracz = 1;
		}
		cout<<"\aGracz "<<gracz<<" wygrywa "<<endl;
	}
	else
		cout<<"\aRemis"<<endl;

	return 0;
}
