int* filterEvenNumbers(int* x, int* n) {
	int evenNumbersCount = 0;
	int size = *n;

	// Count the even numbers in the array
	for (int i = 0; i < size; i++) {
		if (x[i] % 2 == 0) {
			evenNumbersCount++;
		}
	}

	// Create new array only for the even numbers
	int* newArr = new int[evenNumbersCount];
	int newArrCount = 0;
	for (int i = 0; i < size; i++) {
		if (x[i] % 2 == 0) {
			newArr[newArrCount] = x[i];
			newArrCount++;
		}
	}
	*n = newArrCount;
	return newArr;
}

int main() {
	// Enter the input array:
	int size; cin >> size;
	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	// Create new array with the filtered elements
	// and delete the old one:
	int *pointerToSize = &size;
	int *newArr = filterEvenNumbers(arr, pointerToSize);
	delete[] arr;

	for (int i = 0; i < *pointerToSize; i++) {
		cout << newArr[i] << " ";
	}
	cout << endl;
	delete[] newArr;
	return 0;
}
