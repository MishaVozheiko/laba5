#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "employer.h"

void employer::allocName(const char* _name) { // Выделяем память
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
}

employer::employer() { // Конструктор без параметров
	allocName("Untitled");
	std::cout << "Create class " << name << " without constructor parametrs." << std::endl;
}

employer::employer(const char* _name, int _age, int _stage) { // Конструктор с 3 параметрами
	allocName(_name);
	age = _age;
	stage = _stage;
	std::cout << "Create class " << name << " with 3 constructor parametrs." << std::endl;
}

employer::employer(const employer& _empl) { // Конструктор копирования
	allocName(_empl.name);
	age = _empl.age;
	stage = _empl.stage;
	std::cout << "Create class " << name << " with copy constructor." << std::endl;
}

employer::~employer() { // Деструктор
	std::cout << "Call employer class \"" << name << "\" desctructor." << std::endl;
	delete[] name;
}

void employer::print() { // Вывод
	std::cout << "\nName: " << name <<
		"\nAge: " << age <<
		"\nStage: " << stage << "\n" << std::endl;
}
