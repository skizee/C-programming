int a[20];


void write_arr(int m, int arr[])
{
	for (int i = 0; i <= m - 1; i++)
	{
		cout << arr[i] << endl;
	}
}

int *read_arr(int m)
{

	for (int i = 0; i <= m - 1; i++)
	{
		cin >> a[i];
	}
	return a;
}

int main() {

	int n;
	cin >> n;

	int *p = read_arr(n);

	cout << endl;

	write_arr(n, p);
	return 0;

}
