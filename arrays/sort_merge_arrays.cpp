


void write_arr(int n, int arr[])
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Enter array elements: ";
		cin >> arr[i];
	}
}

void sort_arr(int n, int arr[])
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i; j <= n - 1; j++)
		{
			if (arr[i] >= arr[j])
			{
				int x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}

	for (int i = 0; i <= n - 1; i++)
	{
		cout << arr[i] << endl;

	}

}

void merge_arr(int n, int a[], int m, int b[], int p, int c[])
{
	int p1 = 0; //ukazatel kam arr1
	int p2 = 0; //ukazatel kam arr2
	int p3 = 0; //ukazatel kam c

	sort_arr(n, a);
	sort_arr(m, b);
		
	while (p1 <= n - 1 && p2 <= m - 1)
	{
		if (a[p1] <= b[p2])
		{
			c[p3] = a[p1];
			p3++;
			p1++;
		}

		else
		{
			c[p3] = b[p2];
			p3++;
			p2++;
		}

	}
	if (p1 > n - 1)
	{
		for (int i = p2; i <= m - 1; i++)
		{
			c[p3] = b[i];
			p3++;
		}
	}

	else
	{
		for (int i = p1; i <= n - 1; i++)
		{
			c[p3] = a[i];
			p3++;
		}
	}

	// Izvejdane na redicata
	for (int i = 0; i <= p3-1; i++)
	{
		cout << setw(10) << c[i] << endl;
	}
	

}


int main()
{
	int n;
	cin >> n;

	int m;
	cin >> m;

	int p;
	cin >> p;


	int arr[20];
	int arr2[20];
	int c[40];


	write_arr(n, arr);
	write_arr(m, arr2);


	cout << "ARR1: ";
	sort_arr(n, arr);
	cout << "ARR2: ";
	sort_arr(m, arr2);

	cout << "ARR3: ";
	merge_arr(n, arr, m, arr2, p, c);





}
