void Car::allocateChars(const char* _name) { // Выделяем память
	name = new char[strlen(_name)+1];
	strcpy(name, _name);
}

Car::Car() { // Конструктор без параметров
	allocateChars("Unnamed");
	std::cout << "Create class Car without constructor params." << std::endl;
}

Car::Car(const char* _name, int _power, float _cost) { // Конструктор с 3 параметрами
	allocateChars(_name);
	power = _power;
	cost = _cost;
	std::cout << "Create class Car with 3 constructor params." << std::endl;
}

Car::Car(const Car& _Car) { // Конструктор копирования
	allocateChars(_Car.name);
	power = _Car.power;
	cost = _Car.cost;
	std::cout << "Create class Car with copy constructor." << std::endl;
}

Car::~Car() { // Деструктор
	std::cout << "Call Car class \"" << name << "\" desctructor." << std::endl;
	delete[] name;
}

void Car::print() { // Вывод
	std::cout << "\nName: " << name << "\nPower: " << power << "HP"
		<< "\nCost: " << cost << "$\n" << std::endl;
}
