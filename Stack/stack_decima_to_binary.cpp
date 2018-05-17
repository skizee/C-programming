
const int NUM = 100;

class stack
{
public:
	stack();
	void push(int);		//	Добавяне на елемент в стека
	void pop();			//	Изключване на елемент от стека
	void print();		//	Изважда елементите на стек като го разрушава
	int top() const;	//	Намира елемента от върха на стека
	bool empty() const;	//	Проверка дали стекът е празен

private:
	int n;	//	Указател към върха на стека
	int arr[NUM];	//	Представяне на стека
};

stack num_stack(int);	//	Конструира стек от двоичното представяне на указано цяло число

void main() {

	cout << "number: ";
	int n;
	cin >> n;

	num_stack(n).print();
}

stack::stack()
{
	n = 0;
	arr[0] = 0;
}

void stack::push(int x)
{
	n++;
	arr[n] = x;
}

void stack::pop()
{
	n--;
}

int stack::top() const
{
	return arr[n];
}

bool stack::empty() const
{
	return n == 0;
}

void stack::print()
{
	while (!empty())
	{
		cout << top();
		pop();
	}
	cout << endl;
}

stack num_stack(int x)
{
	stack st;
	while (x)
	{
		st.push(x % 2);
		x /= 2;
	}
	return st;
}

