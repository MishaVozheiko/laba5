class Car {
private:
	char* name; // Марка
	int power = 0; // Мощность
	float cost = 0.0f; // Стоимость
	void allocateChars(const char* _name);

public:
	Car();
	Car(const char* _name, int _power, float _disp);
	Car(const Car&);
	~Car();
	inline char* getName() const { return name; }
	inline int getPower() const { return power; }
	inline float getCost() const { return cost; }
	void print();
};
