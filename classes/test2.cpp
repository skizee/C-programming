class counts
{

public:
	counts(int arr[], int n, int x);

	int getCounts();

	void reset(int arr2[], int m, int y);

	void print() const;

private:
	int size;
	int *arr;
	int x;
};


counts::counts(int *a, int b, int c)
{
	arr = a;
	size=b;
	x=c;
}

int counts::getCounts()
{
	int br = 0;

	for (int i = 0; i <= size - 1; i++)
	{
		if (x == arr[i])
		{
			br++;
		}
	}

	return br++;
}



void counts::print() const
{
	for (int i = 0; i <= size - 1; i++)
	{
		cout << arr[i] << endl;
	}

}

void counts::reset(int *arr2, int m, int y)
{
	counts p(arr2, 5, 3);
	p.print();
	cout << "Count: " << p.getCounts() << endl;

}

int main() {


	int b[4] = { 1,2,3,4 };

	counts c(b, 4, 3);
	c.print();
	cout <<"Count: "<< c.getCounts() << endl;

	int arr2[5] = { 5,6,7,8,9};

	c.reset(arr2, 5, 3);


	

}
