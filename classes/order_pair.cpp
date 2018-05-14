struct orderPair {
private:
	int a;
	int b;
public:
	void read_pair();
	void print_pair();
};

void orderPair::read_pair()
{
	cout << "Enter a ";
	cin >> a;

	cout << "Enter b ";
	cin >> b;
}

void orderPair::print_pair()
{
	cout << "(" << a << "," << b << ")" << endl;
}


int main() {

	orderPair a;

	a.read_pair();

	a.print_pair();

}
