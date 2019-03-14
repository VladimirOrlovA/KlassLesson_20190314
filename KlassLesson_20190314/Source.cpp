#include<iostream>
#include<iomanip>

using namespace std;

/*
/// Динамические матрицы ////

int main()
{
	int *p, **pp;

		p = new int[5];		// под одинарный указатель можно выделить место только для одномерного массива
		
		pp = new int*[5];	// под  двойной указатель можно выделить место для двумерного массива

		for (int i = 0; i < 5; i++)
			pp[i] = new int[n+1];    // в первый массив указателей в массив 1 элемент и т.д.

		
		///// очистка массива указателей ///////

		for (int i = 0; i < 5; i++)
			delete [] pp[i];		// сначало удалаяем адреса массива указателей

		delete[] pp;				// удаляем адрес самого массива указатлей

}
*/


/////////////////////////////  файл ->  C_lab5_pri17_pointertopointerand2ddynamicarrays_zp    //////////////////////////////////////



// 1.	Создать функцию, вставляющую строку в двумерный динамический массив в указанную позицию.

void add_array(int **&p, int &n, int m)
{
	int **tmp;

	//выделили место для массива указателей на одно место больше
	tmp = new int*[n + 1];
	//перекопировали адреса всех одномерных массивов
	for (int i = 0; i < n; i++)
		tmp[i] = p[i];
	// под последнюю новую ячейку выделили мето для массива целых чисел
	tmp[n] = new int[m];
	// добавленную строку заполняем нулями
	for (int i = 0; i < m; i++)
		tmp[n][i] = 0;

	delete[]p;
	p = tmp;
	n++;
}

void fill_array(int **pp, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			pp[i][j] = rand() % 21;
		}
	}
}

void print_array(int **pp, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << pp[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	srand(time(NULL));
	
	int **arr;
	int n, m;

	cin >> n >> m;

	arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill_array(arr, n, m);
	print_array(arr, n, m);
	add_array(arr, n, m);

	cout <<endl<< "Array after modification" << endl<<endl;

	print_array(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	cout << endl;

	system("pause");

}