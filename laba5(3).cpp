int main() {
	Car* Car1 = new Car("Audi A4 B7", 142, 60000.0);
	Car Car2;
	Car Car3(*Car1);

	Car1->print();
	Car2.print();
	Car3.print();

	return 0;

}
