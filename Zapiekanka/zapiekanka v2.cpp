#include <iostream>
#include <conio.h>
#include <string>

// Zapiekanka 2014

int main()
{
	std::cout << "		ZAPIEKANKA 2014" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "Witaj w grze Zapiekanka! Co chcesz dzisiaj zrobic?" << std::endl;
	std::cout << std::endl;
	int nOpcja;
	menu:
	std::cout << "1. Nowa gra" << std::endl;
	std::cout << "2. Instrukcje" << std::endl;
	std::cout << "3. Autorzy" << std::endl;
	std::cout << "0. Wyjscie" << std::endl;
	std::cout << std::endl;
	std::cout << "Wybieram... ";
	std::cin >> nOpcja;
	switch (nOpcja)
	{
		case 1:
			std::cout << std::endl;
			std::cout << "No to zaczynamy!!! :)" << std::endl;
			std::cout << std::endl;
			break;
		case 2:
			std::cout << std::endl;
			std::cout << "Gra Zapiekanka polega na wpisywaniu swojej historii (odpowiadaniu na pytania)," << std::endl;
			std::cout << "ktora na koncu po wyjawieniu drugiemu graczowi uzyskuje zueplnie 'nowy sens'."<< std::endl;
			std::cout << std::endl;
			int nOpcja2;
			std::cout << "Aby powrocic do MENU wybierz 1. Aby wyjsc wybierz 0." << std::endl;
			std::cin >> nOpcja2;
			switch (nOpcja2)
			{
				case 1:
					std::cout << std::endl;
					goto menu;
				case 0:
					std::cout << std::endl;
					std::cout << "Szkoda... Do zobaczenia nastepnym razem!";
					getch();
					exit (1);
				default:
					std::cout << std::endl;
					std::cout << "Niezrozumiale polecenie. Przeczytaj jeszcze raz uwaznie menu...";
					getch();
					std::cout << std::endl;
					std::cout << std::endl;
					goto menu;
			}
		case 3:
			std::cout << std::endl;
			std::cout << "Program stworzony przez Marcina Antkowiaka w 2014 roku." << std::endl;
			std::cout << std::endl;
			int nOpcja3;
			std::cout << "Aby powrocic do MENU wybierz 1. Aby wyjsc wybierz 0." << std::endl;
			std::cin >> nOpcja3;
			switch (nOpcja3)
			{
				case 1:
					std::cout << std::endl;
					goto menu;
				case 0:
					std::cout << std::endl;
					std::cout << "Szkoda... Do zobaczenia nastepnym razem!";
					getch();
					exit (1);
				default:
					std::cout << std::endl;
					std::cout << "Niezrozumiale polecenie. Przeczytaj jeszcze raz uwaznie menu...";
					getch();
					std::cout << std::endl;
					std::cout << std::endl;
					goto menu;
			}
		case 0:
			std::cout << std::endl;
			std::cout << "Szkoda... Do zobaczenia nastepnym razem!";
			getch();
			exit (1);
		default:
			std::cout << std::endl;
			std::cout << "Niezrozumiale polecenie. Przeczytaj jeszcze raz uwaznie menu...";
			getch();
			std::cout << std::endl;
			std::cout << std::endl;
			goto menu;
	}
	
	// nie wiem dalczego tak, ale na razie pomaga
	
	std::string strBlad;
	std::getline (std::cin,strBlad);
	
	std::string strGracz1;
	std::cout << "Podaj imie pierwszego gracza: ";
	std::getline (std::cin,strGracz1);
	
	std::string strGracz2;
	std::cout << "Podaj imie drugiego gracza: ";
	std::getline (std::cin,strGracz2);
	
	std::cout << std::endl;
	std::cout << "Pierwsza zapiekanka. Zaczyna " << strGracz1 << "." << std::endl;
	std::cout << std::endl;
	
	std::string strKto1;
	std::cout << "Kto? ";
	std::getline (std::cin,strKto1);
		
	std::string strZkim1;
	std::cout << "Z kim? ";
	std::getline (std::cin,strZkim1);
	
	std::string strKiedy1;
	std::cout << "Kiedy? ";
	std::getline (std::cin,strKiedy1);
	
	std::string strGdzie1;
	std::cout << "Gdzie? ";
	std::getline (std::cin,strGdzie1);
	
	std::string strCorobili1;
	std::cout << "Co robili? ";
	std::getline (std::cin,strCorobili1);
	
	std::string strDlaczego1;
	std::cout << "Dlaczego? ";
	std::getline (std::cin,strDlaczego1);
	
	int nLicznik = 1;	
	do
	{
		std::cout << std::endl;
		nLicznik++;
	} while (nLicznik<=70);
	
	std::cout << "Dziekuje za odpowiedzi. Mozesz przekazac komputer graczowi o imieniu " << strGracz2 << "."<< std::endl;
	getch();
	std::cout << strGracz2 << "? Wcisnij ENTER gdy bedziemy mogli zaczac...";
	getch();
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::string strKto2;
	std::cout << "Kto? ";
	std::getline (std::cin,strKto2);
	
	std::string strZkim2;
	std::cout << "Z kim? ";
	std::getline (std::cin,strZkim2);
	
	std::string strKiedy2;
	std::cout << "Kiedy? ";
	std::getline (std::cin,strKiedy2);
	
	std::string strGdzie2;
	std::cout << "Gdzie? ";
	std::getline (std::cin,strGdzie2);
	
	std::string strCorobili2;
	std::cout << "Co robili? ";
	std::getline (std::cin,strCorobili2);
	
	std::string strDlaczego2;
	std::cout << "Dlaczego? ";
	std::getline (std::cin,strDlaczego2);
	
	do
	{
		std::cout << std::endl;
		nLicznik++;
	} while (nLicznik<=140);
	
	std::cout << "KONIEC !!! Przyszedl czas na odpowiedzi." << std::endl;
	std::cout << "Zapiekanka 1, ktora rozpoczynal gracz " << strGracz1 << "." << std::endl;
	std::cout << "Gotowi?" << std::endl;
	std::cout << std::endl;
	getch();
	
	std::cout << strKto1 << " " << strZkim2 << " " << strKiedy1 << " " << strGdzie2 << " " << strCorobili1 << " " << strDlaczego2 << "." << std::endl;
	getch();
	
	std::cout << std::endl;
	std::cout << "A teraz Zapiekanka nr. 2, ktora rozpoczynal gracz " << strGracz2 << "." << std::endl;
	std::cout << "Gotowi?" << std::endl;
	std::cout << std::endl;
	getch();
	
	std::cout << strKto2 << " " << strZkim1 << " " << strKiedy2 << " " << strGdzie1 << " " << strCorobili2 << " " << strDlaczego1 << "." << std::endl;
	getch();
	std::cout << std::endl;	
	std::cout << "KONIEC GRY!!!" << std::endl;
	int nOpcja4;
	menu2:
	std::cout << std::endl;
	std::cout << "1. Powrot do menu" << std::endl;
	std::cout << "0. Wyjscie" << std::endl;
	std::cout << std::endl;
	std::cout << "Wybieram... ";
	std::cin >> nOpcja4;
	switch (nOpcja4)
	{
		case 1:
			std::cout << std::endl;
			goto menu;
		case 0:
			std::cout << std::endl;
			std::cout << "Dzieki za wspolna zabawe!!! Do nastepnego razu!!!";
			break;
		default:
			std::cout << "Czy to bylo az takie trudne.... jeszcze raz..." << std::endl;
			goto menu2;
	}
	getch();
}
