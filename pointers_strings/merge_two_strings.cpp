
int len(char *s)
{
	int br = 0;
	while (*s)
	{
		*s++;
		br++;
	}
	return br;
}

char *cat(char *s1, char *s2)
{
	int i = len(s1);

	while (*s2)
	{
		s1[i] = *s2;
		i++;
		*s2++;
	}
	s1[i] = '\n';
	
	return s1;
}

int main()
{ 
	char s1[100];
	cin >> s1;

	char s2[100];
	cin >> s2;

	cout << cat(s1, s2) << " " << s1 << endl;

	

	return 0;

}
