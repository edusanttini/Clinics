#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Paciente.h"
#include "Doutor.h"
#include "Boleto.h"


using namespace std;

class Menu{
public:
	Menu();
	char option;
	Paciente pacient;//ToDo -> declarar os atributos restantes referentes ao obj. menu
	Doutor doc;
	Boleto boleto;
	Pessoa *p;
public:
	void printMenu();
	void executeMenu();
	bool isInputCorrect();
	char getOption();
	void test();

};

void logo();
