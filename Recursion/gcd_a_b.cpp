
int gcd(int a, int b)
{
	if (a == b)
	{
		return a;
	}

	else if (a > b)
	{
		return gcd(a - b, b);
	}

	else if (b > a)
	{
		return gcd(b - a, a);
	}
}



int main() {

	int n;
	cin >> n;

	int m;
	cin >> m;

	cout << gcd(n, m) << endl;


	return 0;

}
