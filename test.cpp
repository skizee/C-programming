Задача 1
Напишете функция, която приема масив от числа, размерът му и друго число и връща като резултат броя на срещанията на числото в масива.

Пример

Вход : {1,2,3,4,5,6,4,4,1,2}, 10, 1
Изход: 2
(Числото 1 се среща 2 пъти в масива)
Задача 2
Напишете клас counts, който :

Има конструктор, приемащ масив, размерът му и число
функция getCounts() която връща броя на срещанията на числото, подадено на конструктора, в масива.
функция `reset(array, size, number), която приема друг масив от числа, размерът му и число и подменя старите масив и число и извършва същите изчисления с новите данни.
Пример

class counts{
	public:
	...
	private:
	...
};

***
	int arr[4] = {1,2,3,4};
	counts C(arr, 4, 3);
	cout << C.getCounts() << endl; ( извежда 1 на екрана! )
	int arr_2[5] = {5,6,7,8,9};
	C.reset(arr_2, 5, 3);
	cout << C.getCounts() << endl; ( извежда 0 на екрана! )
***
Задача 3
Прочетете и разберете какво е :

Kонструктор
Деструктор
Copy-конструктор
