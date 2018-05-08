


void write_arr(int n, int arr[20][20])
{
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			cout << "Arr[i][j]: ";
			cin >> arr[i][j];
		}
	}
}

void read_arr(int n, int arr[20][20])
{
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
		
			if (i < j)
			{
				arr[i][j] += 5;
			}

			else if(i>j)
			{
				arr[i][j] -= 5;
			}
		}
		
	}

	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}
}




int main()
{
	int n;
	cin >> n;

	int arr[20][20];

	write_arr(n, arr);

	read_arr(n, arr);


}
