int main()
{
	char str[] = "C++Language";
	char* pstr = str;
	while (*pstr)
	{
		cout << *pstr <<endl;
		*pstr++;
	}

	return 0;
}
