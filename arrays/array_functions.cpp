
void writearr(int n, int a[])
{
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}

void readarr(int n, const int a[])
{
	cout << endl;

	for (int i = 0; i <= n - 1; i++)
	{
		cout<< a[i]<<endl;
	}
}

int gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
			b = b - a;
	}
	return a;
}

int main()
{
	int n;
	cin >> n;

	int arr[20];

	writearr(n, arr);


	int x=arr[0];
	for (int i = 1; i <= n - 1; i++)
	{
		x = gcd(x, arr[i]);
		cout << "gcd= " << x << endl;

	}

	
}
