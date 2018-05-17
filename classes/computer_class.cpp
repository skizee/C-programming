class computer
{
public:
	computer();
	void read();
	void print() const;
	void sort(int , computer* );
	bool is_better_from(computer const &);

	double get_price() const;
	int get_score() const;

private:
	char name[20];
	double price;
	int score;
};

computer::computer()
{
	char name[20];
	price = 0;
	score = 0;

}

void computer::read()
{
	cout << "Enter model name: ";
	cin >> name;

	cout << "Enter price: ";
	cin >> price;

	cout << "Enter score: ";
	cin >> score;

	cout << endl;
}

double computer::get_price() const
{
	return price;
}

int computer::get_score() const
{
	return score;
}

void computer::print() const
{
	cout <<setw(10) <<"Model name:" << name<<endl;
	cout << setw(10) << "Model price:" << price << endl;
	cout << setw(6) << "Model score:" << score << endl;
	cout << setw(10) << endl;
}

bool computer::is_better_from(computer const &x)
{
	return score / price > x.score / x.price;
}

void sort(int n, computer* a[])
{
	for (int i = 0; i <= n - 1; i++)
	{
		int k = i;
		computer* max = a[i];

		for (int j = i + 1; j <= n - 1; j++)
			if (a[j]->is_better_from(*max))
			{
				max = a[j];
				k = j;
			}

		max = a[i];
		a[i] = a[k];
		a[k] = max;
		
	}
}


int main() {

	computer table[300];
	computer *ptable[300];

	int n;
	cout << "Enter number of computers: ";
	cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		table[i].read();
		ptable[i] = &table[i];
	}

	for (int i = 0; i <= n - 1; i++)
	{
		table[i].print();
	}

	sort(n, ptable);
	cout << "New table: " << endl;

	for (int i = 0; i <= n - 1; i++)
	{
		ptable[i]->print();
		cout << ptable[i]->get_score() / ptable[i]->get_price() << endl;
	}

	return 0;
}
