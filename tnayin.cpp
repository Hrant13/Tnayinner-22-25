//amrapndoz task_22 ,tpel glxavor ankyunagci tarrer@ dinamik erkchap zangvaci mijocov

#include<iostream>
int main() {
	int size;
	std::cout << "Enter your size ";
	std::cin >> size;
	int** arr = new int* [size];
	for (int i = 0; i < size; ++i) {
		arr[i] = new int[size];
	}
	
	for (int i = 0; i < size; ++i) {
		std::cout << std::endl;
		for (int j = 0; j < size; ++j) {
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
			
		}
	}
  for (int i = 0;i<size;++i) {
    std::cout<<arr[i][i];
  }
	for (int i = 0; i < size; ++i) {
		delete[]arr[i];
	}
	delete[] arr;
	
}

//amrapndoz task_23 ,tpel ojandak ankyunagci tarrer@ dinamik erkchap zangvaci mijocov

#include<iostream>
int main() {
	std::cout << "Please enter size:";
	int size;
	std::cin >> size;
	int** arr = new int* [size];
	for (int i = 0; i < size; ++i) {
		arr[i] = new int[size];
	 }
	for (int i = 0; i < size; ++i) {
		std::cout << std::endl;
		for (int j = 0; j < size; ++j) {
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
	}
	for (int i = 0, j = size - 1; i >= 0; ++i, --j) {
		std::cout << arr[i][j] << " ";
	}
	for (int i = 0; i < size; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}


//amrapndoz task_24 ,tpel ojandak ev glxavori tarreri gumarner@
#include<iostream>
int main() {
	
	int** arr = new int*[4];
	for (int i = 0; i < 4; ++i) {
		arr[i] = new int[4];
	 }
	for (int i = 0; i < 4; ++i) {
		std::cout << std::endl;
		for (int j = 0; j < 4; ++j) {
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
	}
	std::cout << std::endl;
	for (int row1 = 0, row2 = 3, col2 = 0; row1 < 4; ++row1, --row2, ++col2) {
		std::cout << arr[row1][row1] + arr[row2][col2] << std::endl;
	}

	for (int i = 0; i < 4; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

//amrapndoz task_25 ,ojandak ev glxavori tarreri arjeqner@ texerov poxel

#include<iostream>
void swap(int*, int*);
int main() {

	int** arr = new int* [4];
	for (int i = 0; i < 4; ++i) {
		arr[i] = new int[4];
	}
	for (int i = 0; i < 4; ++i) {
		std::cout << std::endl;
		for (int j = 0; j < 4; ++j) {
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
	}
	for (int row1 = 0, row2 = 3, col2 = 0; row1 < 4; ++row1, --row2, ++col2) {
		swap(&arr[row1][row1], &arr[row2][col2]);
	}

	for (int i = 0; i < 4; ++i) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}
