#include <iostream>
#include "options.h"


using namespace std;


/*
Napísať program pre zoznam - menu - 
	1. Pridaj na koniec
	2. Pridaj na začiatok
	3. Pridaj na poziciu
	4. Zobraz zoznam
	5. Odober z pozicie
	6. Odober číslo
	7. Odober párne
	8. Zotrieď
	9. Otoč poradie
	10. Odstráň duplicity
*/


int main()
{
	opt options = get_options();
	show_options();

	while(true) {
		cout << "\n>> ";
		try {
			options[input<string>()].func();
			cout << "OK" << endl;
		} 
		catch (const exception &e) {
			cout << e.what() << endl;
		}
	}
}