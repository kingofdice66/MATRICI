#include "Matrici.h"


int main()
{
	int n;
	char ch;

	for (;;)
	{
		std::cout << "Doriti sa iesiti din program? Tastati D/d pentru Da sau N/n pentru Nu:";
		std::cin >> ch;
		ch = toupper(ch);

		if (ch == 'D')
			break;

		std::cout << "Introduceti numarul de ecuatii si necunoscute: ";
		std::cin >> n;
		while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Se accepta numai numere!\n";
			std::cout << "Introduceti numarul de ecuatii si necunoscute: ";
			std::cin >> n;
		}

		while (std::cin.get() != '\n') // de exemplu daca se introduce n = 3aaa, cei trei de 'a' se ignora pana la \n si ramane numai 3
		{

		}


		matrici(n);
	}

	return 0;
}