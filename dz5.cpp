#include <iostream>
#include <ctime>
using namespace std;

void print_matrix(int** array, int N, int M) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}

void random_matrix(int** array, int N, int M) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			array[i][j] = rand() % (90) + 10;
		}
	}
}
//dz1

void swap(int** array, int A, int B) {
	int* mass = new int [A];
	int a = rand() % A;
	int b = rand() % A;
	for (int i = 0; i < A; i++)
	{
		mass[i] = array[a][i];
		array[a][i] = array[b][i];
		array[b][i] = mass[i];
	}
    print_matrix(array, A, B);
}


//dz2
int variable(int** array, int A, int B) {
	int count = 0;
	int x = rand() % 99 + 10;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++) {
			if (array[i][j] == x) {
				count++;
			}
		}
	}
	cout << endl << x << endl;
	return count;
}
//dz3
void sumM(int** array, int A, int B) {
	for (int i = 0; i < B; i++) {
		int sum = 0;
		for (int j = 0; j < A; j++) {
			sum += array[j][i];
		}
		cout << sum << " ";
	}
 }

int main() {
	srand(time(0));
	int A, B;
	cin >> A >> B;
	int** array = new int* [A];
	for (int i = 0; i < A; i++) {
		array[i] = new int[B];
	}
	random_matrix(array, A, B);
	print_matrix(array, A, B);
	cout << endl;
	swap(array, A, B);
	cout << endl;
	cout << variable(array, A, B);
	cout << endl;
    sumM(array, A, B);
	system("pause");
	return 0;
}