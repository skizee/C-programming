struct student {
	int facnom;
	char name[30];
	double marks[NUM];
};

void read_student(student &s)
{
	cout << "Enter facnom: ";
	cin >> s.facnom;

	char p[100];
	cin.getline(p, 100);

	cout << "Enter name: ";
	cin.getline(s.name, 20);


	for (int i = 0; i <= NUM - 1; i++)
	{
		cout << "Enter marks: ";
		cin >> s.marks[i];
	}

}

double average(double *a)		//SReden uspeh
{
	double s = 0;

	for (int j = 0; j <= NUM - 1; j++)
	{
		s += a[j];
	}
	return s / NUM;
}


void sortable(int n, student arr[])
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i; j <= n - 1; j++)
		{

			if (arr[i].marks > arr[j].marks)
			{
				student x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}

				
		}
	}
}


void print_student(student &s1)
{
	cout << s1.facnom << endl;
	cout << s1.name << endl;

	for (int i = 0; i <= NUM - 1; i++)
	{
		cout << s1.marks[i] << endl;
	}
}

int main() {

	student table[30];

	int n;
	cout << "How many students: ";

		cin >> n;


	for (int i = 0; i <= n - 1; i++)
	{
		read_student(table[i]);
	}

	cout << endl;

	for (int i = 0; i <= n - 1; i++)
	{
		print_student(table[i]);
	}

	sortable(n, table);

	cout << endl << "SORTED TABLE: " << endl;

	for (int i = 0; i <= n - 1; i++)
	{
		print_student(table[i]);
		cout << "Average mark: " << average(table[i].marks) << endl;
	}

	cout << endl;


	return 0;

}
