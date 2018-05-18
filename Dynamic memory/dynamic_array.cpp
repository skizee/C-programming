int main()
{
	//	Заделяне на памет за масив от указатели към int
	int** arr = new int*[10];

	if (arr == NULL)
	{
		cout << "Not enough memory!" << endl;
		return 1;
	}

	//	Запълване на масива с указатели
	int i;
	for ( i = 0; i < 10; i++)
	{
		arr[i] = new int; //	Заделяне на памет за указателя

		if (arr[i] == NULL)
		{
			cout << "Not enough memory!" << endl;
			return 1;
		}

		*arr[i] = i;	//	Инициализиране на указваната стойност

	}

	//	ИЗвецдане на стойностите и съдържанеието на указателите

	for (i = 0; i < 10; i++)
		cout << arr[i] << " " << *arr[i] << ", ";
	cout << endl;
	//	Освобождаване на заетата динамична памет

	for (i = 0; i < 10; i++)
		delete arr[i];
	delete[] arr;
	
	return 0;

}
