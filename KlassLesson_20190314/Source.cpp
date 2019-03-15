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



// 1.	Создать функцию, вставляющую строку в двумерный динамический массив в указанную позицию - В ПОСЛЕДНЮЮ ПОЗИЦИЮ.
/*
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

	// удаляем адрес массива указателей
	delete[]p;

	// адрес массива указателей возвращаем в p
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
*/

/*
// 1.	Создать функцию, вставляющую строку в двумерный динамический массив в указанную позицию - В ПЕРВУЮ ПОЗИЦИЮ.

void add_array(int **&p, int &n, int m)
{
	int **tmp;

	//выделили место для массива указателей на одно место больше
	tmp = new int*[n + 1];

	//перекопировали адреса всех одномерных массивов
	for (int i = 0; i < n; i++)
		tmp[i] = p[i];

	// под ПЕРВУЮ новую ячейку выделили мето для массива целых чисел
	tmp[0] = new int[m];

	// добавленную строку заполняем нулями
	for (int i = 0; i < m; i++)
		tmp[0][i] = 0;

	// удаляем адрес массива указателей
	delete[]p;

	// адрес массива указателей возвращаем в p
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
*/

/*
// 1.	Создать функцию, вставляющую строку в двумерный динамический массив в указанную k позицию.

void add_to_k_position_array(int **&p, int &n, int m, int k)
{
	// добавляем в массив указателей еще один указатель на одномерный массив
	int **tmp=new int*[n+1];

	// копируем элементы одномерного массива до k строки
	for (int i = 0; i < k; i++)
			tmp[i] = p[i];
	
	// выделяем место для  одномерного массива для строки под номером k
	tmp[k] = new int[m];

	// заполняем новую строку значением k
	for (int i = 0; i < m; i++)
		tmp[k][i] = k;

	// копируем элементы одномерного массива после k строки
	for (int i = k; i < n; i++)
		tmp[i+1] = p[i];

	
	   	
	// удаляем адрес массива указателей
	delete[]p;

	// адрес массива указателей возвращаем в p
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
	int n, m, k;

	cin >> n >> m >> k;

	arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill_array(arr, n, m);
	print_array(arr, n, m);
	add_to_k_position_array(arr, n, m, k);

	cout << endl << "Array after modification" << endl << endl;

	print_array(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	cout << endl;

	system("pause");

}
*/

/*
// 1.	Создать функцию, вставляющую несколько строк в двумерный динамический массив в указанную k позицию. !!!!!!!!!!!! НЕДОДЕЛАЛ !!!!!!!!!

void add_to_k_position_array(int **&p, int &n, int m, int k)
{
	// добавляем в массив указателей еще один указатель на одномерный массив
	int **tmp = new int*[n + 1];

	// копируем элементы одномерного массива до k строки
	for (int i = 0; i < k; i++)
		tmp[i] = p[i];

	// выделяем место для  одномерного массива для строки под номером k
	tmp[k] = new int[m];

	// заполняем новую строку значением k
	for (int i = 0; i < m; i++)
		tmp[k][i] = k;

	// копируем элементы одномерного массива после k строки
	for (int i = k; i < n; i++)
		tmp[i + 1] = p[i];



	// удаляем адрес массива указателей
	delete[]p;

	// адрес массива указателей возвращаем в p
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
	int n, m, k;

	cin >> n >> m >> k;

	arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill_array(arr, n, m);
	print_array(arr, n, m);
	add_to_k_position_array(arr, n, m, k);

	cout << endl << "Array after modification" << endl << endl;

	print_array(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	cout << endl;

	system("pause");

}*/


/*
/// 2.	Создать функцию, вставляющую столбец в двумерный динамический массив в указанную позицию - первый столбец.

void add_first_column(int **&p, int n, int &m)
{
	// меняем адреса указателям массива указателей
	int **tmp = new int *[n];

	
	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
		tmp[i] = new int[m + 1];		// добавляем к элементам одномерного массива еще один элемент	


	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
	{
		for (int j = 0; j < m; j++)		// копируем элементы с исходного массива в новый расширенный массив со сдвигом на один элемент
		{
			tmp[i][j + 1] = p[i][j];
		}
	}

	for (int i = 0; i < n; i++)			// двигаемся по указателям на одномерные массивы
		tmp[i][0] = 0;					// в каждый первый (нулевой) элемент пишем значения элемента - в данном случае ноль

	
	/// удаляем указатели в массиве указателей и указатели на одномерные массивы ---- ВАЖНО удаление обязательно для освобождения ОЗУ ///

	for (int i = 0; i < n; i++)			// двигаемся по указателям на одномерные массивы
		delete[] p[i];					// удаляем указатели(адреса) на одномерные массивы в массиве указателей

	delete[] p;							// удаляем массив указателей
	p = tmp;
	m++;								// увеличиваем размер одномерного массива на 1 элемент
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
	setlocale(LC_ALL, "");

	int **arr;
	int n, m;

	cout << "Введите кол-во строк -> ";
	cin >> n;

	cout << "Введите кол-во столбцов -> ";
	cin >> m;

	cout << endl;

	arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill_array(arr, n, m);
	print_array(arr, n, m);
	add_first_column(arr, n, m);

	cout << endl << "Array after modification" << endl << endl;

	print_array(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	cout << endl;

	system("pause");

}
*/


/*
/// 2.	Создать функцию, вставляющую столбец в двумерный динамический массив в указанную позицию - последний столбец.

void add_first_column(int **&p, int n, int &m)
{
	// меняем адреса указателям массива указателей
	int **tmp = new int *[n];


	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
		tmp[i] = new int[m + 1];		// добавляем к элементам одномерного массива еще один элемент	


	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
	{
		for (int j = 0; j < m; j++)		// копируем элементы с исходного массива в новый расширенный массив
		{
			tmp[i][j] = p[i][j];
		}
	}

	for (int i = 0; i < n; i++)			// двигаемся по указателям на одномерные массивы
		tmp[i][m] = 0;					// в каждый последний элемент пишем значения элемента - в данном случае ноль


	/// удаляем указатели в массиве указателей и указатели на одномерные массивы ---- ВАЖНО удаление обязательно для освобождения ОЗУ ///

	for (int i = 0; i < n; i++)			// двигаемся по указателям на одномерные массивы
		delete[] p[i];					// удаляем указатели(адреса) на одномерные массивы в массиве указателей

	delete[] p;							// удаляем массив указателей
	p = tmp;
	m++;								// увеличиваем размер одномерного массива на 1 элемент
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
	setlocale(LC_ALL, "");

	int **arr;
	int n, m;

	cout << "Введите кол-во строк -> ";
	cin >> n;

	cout << "Введите кол-во столбцов -> ";
	cin >> m;

	cout << endl;

	arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill_array(arr, n, m);
	print_array(arr, n, m);
	add_first_column(arr, n, m);

	cout << endl << "Array after modification" << endl << endl;

	print_array(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	cout << endl;

	system("pause");

}
*/

/*
/// 2.	Создать функцию, вставляющую столбец в двумерный динамический массив в указанную позицию - заданный столбец.

void add_positionK_column(int **&p, int n, int &m, int k)
{
	// меняем адреса указателям массива указателей
	int **tmp = new int *[n];


	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
		tmp[i] = new int[m + 1];		// добавляем к элементам одномерного массива еще один элемент	


	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
	{
		for (int j = 0; j < k; j++)		// копируем элементы с исходного массива в новый расширенный массив до k позиции
		{
			tmp[i][j] = p[i][j];
		}
	}

	for (int i = 0; i < n; i++)			// двигаемся по указателям на одномерные массивы
		tmp[i][k] = k;					// в каждый k элемент пишем значения элемента - в данном случае ноль

	
	for (int i = 0; i < n; i++)			// двигаемся по массиву указателей
	{
		for (int j = k+1; j < m+1; j++)		// копируем элементы с исходного массива в новый расширенный массив c k позиции
		{
			tmp[i][j] = p[i][j-1];
		}
	}


	/// удаляем указатели в массиве указателей и указатели на одномерные массивы ---- ВАЖНО удаление обязательно для освобождения ОЗУ ///

	for (int i = 0; i < n; i++)			// двигаемся по указателям на одномерные массивы
		delete[] p[i];					// удаляем указатели(адреса) на одномерные массивы в массиве указателей

	delete[] p;							// удаляем массив указателей
	p = tmp;
	m++;								// увеличиваем размер одномерного массива на 1 элемент
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
	setlocale(LC_ALL, "");

	int **arr;
	int n, m, k;

	cout << "Введите кол-во строк -> ";
	cin >> n;

	cout << "Введите кол-во столбцов -> ";
	cin >> m;

	cout << "Введите номер столбца куда вставить новый столбец -> ";
	cin >> k;

	cout << endl;

	arr = new int *[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill_array(arr, n, m);
	print_array(arr, n, m);
	add_positionK_column(arr, n, m, k);

	cout << endl << "Array after modification" << endl << endl;

	print_array(arr, n, m);

	for (int i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;

	cout << endl;

	system("pause");

}
*/

