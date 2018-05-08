void write_arr(int m, int arr[])
{
	for (int i = 0; i <= m - 1; i++)
	{
		cout << "arr: " << arr[i] << endl;
	}
}

int *read_arr(int m, int arr[])
{
	for (int i = 0; i <= m - 1; i++)
	{
		cout << "arr[i]:";
		cin >> arr[i];
	}
	return arr;
}

int main()
{ 
	int n;
	cin >> n;

	int a[20];
	int* p = read_arr(n, a);

	write_arr(n, p);
	cout << endl;

	

	return 0;

}
