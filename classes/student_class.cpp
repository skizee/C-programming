struct student
{
private:
	int facnum;
	char name[40];

public:
	double marks[5];
	void read_student();
	void print_student();
};

void student::read_student()
{
	cout << "Enter fac. number: ";
	cin >> facnum;

	char p[100];
	cin.getline(p, 100);

	cout << "Name: ";
	cin.getline(name, 24);

	for (int i = 0; i <= NUM - 1; i++)
	{
		cout << "Enter marks: ";
		cin >> marks[i];
	}
}

void student::print_student()
{
	cout << setw(6) << facnum << setw(30) << name;

	for (int i = 0; i <= NUM - 1; i++)
	{
		cout << setw(6) << marks[i];
	}
}

double average(double *a)
{
	double s = 0;

	for (int j = 0; j <= NUM - 1; j++)
	{
		s += a[j];
	}
	return s / NUM;
}

void sortable(int n, student a[])
{
	for (int i = 0; i <= n - 2; i++)
	{
		int k = i;
		double max = average(a[i].marks);

		for (int j = i + 1; j <= n - 1; j++)
		{
			if (average(a[i].marks) > max)
			{
				max = average(a[j].marks);
				k = j;
			}
		}
			student x = a[i];
			a[i] = a[k];
			a[k] = x;
	}
}





int main() {

	student table[30];
	int n;
	cout << "Number of students: ";
	cin >> n;

	for (int i = 0; i <= n - 1; i++)
	{
		table[i].read_student();
	}
	cout << "table: \n";

	for (int i = 0; i <= n - 1; i++)
	{
		table[i].print_student();
		cout << setw(7) << average(table[i].marks) << endl;
	}

	return 0;
}
