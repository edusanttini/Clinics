#include <iostream>
#include "Menu.h"

int main() {

    logo();
	Menu menuController;

	/*ToDo -> debugar(se necessario) para encaixar o comando 'system("cls");' em alguma parte do loop
	*o objetivo eh limpar a tela toda vez(check for exceptions) que o user digitar algum comando...
	*/

	do {
		do {
			menuController.printMenu();
		} while (!menuController.isInputCorrect());
		menuController.executeMenu();
	} while (menuController.getOption() != '!');

	cout << "----EXITTTT----";
	return 0;
}