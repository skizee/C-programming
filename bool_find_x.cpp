bool find(int n, int x, int arr[])
{
	int i = 0;

	do {
		i++;

	} while (x != arr[i] && i <= n - 1);
	return arr[i] == x;
}

int main()
{
	int n;
	cin >> n;

	int x;
	cin >> x;

	int arr[20];
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}

	cout<<find(n, x, arr);
	
}
