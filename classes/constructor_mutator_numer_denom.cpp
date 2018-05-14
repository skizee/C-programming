struct rat
{
private:
	int numer;
	int denom;

public:
	//konstruktor
	rat();
	rat(int, int);
	//mutator
	void read();
	//funkcii za dostap
	int get_numer() const;
	int get_denom() const;
	void print() const;
};

int rat::get_numer() const {
	return numer;
}

int rat::get_denom() const {
	return denom;
}

void rat::print() const
{
	cout << numer << "/" << denom << endl;
}

void rat::read()
{
	cout << "Numer: ";
	cin >> numer;

	cout << "denom: ";
	cin >> denom;
}

rat::rat()
{
	numer = 0;
	denom = 1;
}

rat::rat(int x, int y)
{
	numer = x;
	denom = y;
}

int main() {

	rat p;

	rat p1(1, 2);

	rat p2;

	p.print();
	p1.print();

	p2.read();
	p2.print();
}
