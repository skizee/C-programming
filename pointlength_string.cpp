void len(char *s)
{
	int br = 0;
	while (*s)
	{
		br++;
		*s++;
	}
	cout << br << endl;
}

void eqstr(char*s, char*q)
{
	int br = 0;
	int br1 = 0;
	while (*s)
	{
		br++;
		*s++;
	}

	while (*q)
	{
		br1++;
		*q++;
	}

	if (br == br1)
	{
		cout << "EQUAL: " << endl;
	}
	else
		cout << "NO" << endl;
}

int main()
{
	char *s;

	char p[20];
	char q[20];

	cin >> p;
	cin >> q;

	s = p;
	len(s);

	eqstr(p, q);

	
}
