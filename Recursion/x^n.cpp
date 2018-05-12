int pows(int x, int n)
{
	if (n == 0)
	{
		return x = 1;
	}

	else if (n > 0)
	{
		return x * pows(x, n - 1);
	}

	else if (n < 0)
	{
		return 1 / pows(x, -n);
	}
}



int main() {

	int x;
	cin >> x;

	int n;
	cin >> n;

	

	cout << pows(x, n) << endl;


	return 0;

}
