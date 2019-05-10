#include "Matrici.h"


int main()
{
	int n;
	char ch;

	for (;;)
	{
		std::cout << "Doriti ca programul sa termine executia? Tastati D/d pentru Da sau N/n pentru Nu:";
		std::cin >> ch;
		ch = toupper(ch);

		if (ch == 'D')
			break;

		std::cout << "Introduceti numarul de ecuatii si necunoscute: ";
		std::cin >> n;

		matrici(n);
	}

	return 0;
}