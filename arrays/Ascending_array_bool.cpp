
bool monam(int n, int arr[])
{
	int i = 0;
	while (arr[i] >= arr[i + 1] && i<=n-1)
	{
		i++;
	}
	return arr[i] >= arr[i + 1];
}

int main()
{
	int n;
	cin >> n;


	int arr[20];
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> arr[i];
	}

	cout<<monam(n,arr);
	
}
