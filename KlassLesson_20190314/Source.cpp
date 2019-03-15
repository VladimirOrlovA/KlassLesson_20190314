#include<iostream>
#include<iomanip>

using namespace std;

/*
/// ������������ ������� ////

int main()
{
	int *p, **pp;

		p = new int[5];		// ��� ��������� ��������� ����� �������� ����� ������ ��� ����������� �������
		
		pp = new int*[5];	// ���  ������� ��������� ����� �������� ����� ��� ���������� �������

		for (int i = 0; i < 5; i++)
			pp[i] = new int[n+1];    // � ������ ������ ���������� � ������ 1 ������� � �.�.

		
		///// ������� ������� ���������� ///////

		for (int i = 0; i < 5; i++)
			delete [] pp[i];		// ������� �������� ������ ������� ����������

		delete[] pp;				// ������� ����� ������ ������� ���������

}
*/


/////////////////////////////  ���� ->  C_lab5_pri17_pointertopointerand2ddynamicarrays_zp    //////////////////////////////////////



// 1.	������� �������, ����������� ������ � ��������� ������������ ������ � ��������� ������� - � ��������� �������.
/*
void add_array(int **&p, int &n, int m)
{
	int **tmp;

	//�������� ����� ��� ������� ���������� �� ���� ����� ������
	tmp = new int*[n + 1];
	
	//�������������� ������ ���� ���������� ��������
	for (int i = 0; i < n; i++)
		tmp[i] = p[i];
	
	// ��� ��������� ����� ������ �������� ���� ��� ������� ����� �����
	tmp[n] = new int[m];
	
	// ����������� ������ ��������� ������
	for (int i = 0; i < m; i++)
		tmp[n][i] = 0;

	// ������� ����� ������� ����������
	delete[]p;

	// ����� ������� ���������� ���������� � p
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
// 1.	������� �������, ����������� ������ � ��������� ������������ ������ � ��������� ������� - � ������ �������.

void add_array(int **&p, int &n, int m)
{
	int **tmp;

	//�������� ����� ��� ������� ���������� �� ���� ����� ������
	tmp = new int*[n + 1];

	//�������������� ������ ���� ���������� ��������
	for (int i = 0; i < n; i++)
		tmp[i] = p[i];

	// ��� ������ ����� ������ �������� ���� ��� ������� ����� �����
	tmp[0] = new int[m];

	// ����������� ������ ��������� ������
	for (int i = 0; i < m; i++)
		tmp[0][i] = 0;

	// ������� ����� ������� ����������
	delete[]p;

	// ����� ������� ���������� ���������� � p
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
// 1.	������� �������, ����������� ������ � ��������� ������������ ������ � ��������� k �������.

void add_to_k_position_array(int **&p, int &n, int m, int k)
{
	// ��������� � ������ ���������� ��� ���� ��������� �� ���������� ������
	int **tmp=new int*[n+1];

	// �������� �������� ����������� ������� �� k ������
	for (int i = 0; i < k; i++)
			tmp[i] = p[i];
	
	// �������� ����� ���  ����������� ������� ��� ������ ��� ������� k
	tmp[k] = new int[m];

	// ��������� ����� ������ ��������� k
	for (int i = 0; i < m; i++)
		tmp[k][i] = k;

	// �������� �������� ����������� ������� ����� k ������
	for (int i = k; i < n; i++)
		tmp[i+1] = p[i];

	
	   	
	// ������� ����� ������� ����������
	delete[]p;

	// ����� ������� ���������� ���������� � p
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
// 1.	������� �������, ����������� ��������� ����� � ��������� ������������ ������ � ��������� k �������. !!!!!!!!!!!! ��������� !!!!!!!!!

void add_to_k_position_array(int **&p, int &n, int m, int k)
{
	// ��������� � ������ ���������� ��� ���� ��������� �� ���������� ������
	int **tmp = new int*[n + 1];

	// �������� �������� ����������� ������� �� k ������
	for (int i = 0; i < k; i++)
		tmp[i] = p[i];

	// �������� ����� ���  ����������� ������� ��� ������ ��� ������� k
	tmp[k] = new int[m];

	// ��������� ����� ������ ��������� k
	for (int i = 0; i < m; i++)
		tmp[k][i] = k;

	// �������� �������� ����������� ������� ����� k ������
	for (int i = k; i < n; i++)
		tmp[i + 1] = p[i];



	// ������� ����� ������� ����������
	delete[]p;

	// ����� ������� ���������� ���������� � p
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
/// 2.	������� �������, ����������� ������� � ��������� ������������ ������ � ��������� ������� - ������ �������.

void add_first_column(int **&p, int n, int &m)
{
	// ������ ������ ���������� ������� ����������
	int **tmp = new int *[n];

	
	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
		tmp[i] = new int[m + 1];		// ��������� � ��������� ����������� ������� ��� ���� �������	


	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
	{
		for (int j = 0; j < m; j++)		// �������� �������� � ��������� ������� � ����� ����������� ������ �� ������� �� ���� �������
		{
			tmp[i][j + 1] = p[i][j];
		}
	}

	for (int i = 0; i < n; i++)			// ��������� �� ���������� �� ���������� �������
		tmp[i][0] = 0;					// � ������ ������ (�������) ������� ����� �������� �������� - � ������ ������ ����

	
	/// ������� ��������� � ������� ���������� � ��������� �� ���������� ������� ---- ����� �������� ����������� ��� ������������ ��� ///

	for (int i = 0; i < n; i++)			// ��������� �� ���������� �� ���������� �������
		delete[] p[i];					// ������� ���������(������) �� ���������� ������� � ������� ����������

	delete[] p;							// ������� ������ ����������
	p = tmp;
	m++;								// ����������� ������ ����������� ������� �� 1 �������
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

	cout << "������� ���-�� ����� -> ";
	cin >> n;

	cout << "������� ���-�� �������� -> ";
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
/// 2.	������� �������, ����������� ������� � ��������� ������������ ������ � ��������� ������� - ��������� �������.

void add_first_column(int **&p, int n, int &m)
{
	// ������ ������ ���������� ������� ����������
	int **tmp = new int *[n];


	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
		tmp[i] = new int[m + 1];		// ��������� � ��������� ����������� ������� ��� ���� �������	


	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
	{
		for (int j = 0; j < m; j++)		// �������� �������� � ��������� ������� � ����� ����������� ������
		{
			tmp[i][j] = p[i][j];
		}
	}

	for (int i = 0; i < n; i++)			// ��������� �� ���������� �� ���������� �������
		tmp[i][m] = 0;					// � ������ ��������� ������� ����� �������� �������� - � ������ ������ ����


	/// ������� ��������� � ������� ���������� � ��������� �� ���������� ������� ---- ����� �������� ����������� ��� ������������ ��� ///

	for (int i = 0; i < n; i++)			// ��������� �� ���������� �� ���������� �������
		delete[] p[i];					// ������� ���������(������) �� ���������� ������� � ������� ����������

	delete[] p;							// ������� ������ ����������
	p = tmp;
	m++;								// ����������� ������ ����������� ������� �� 1 �������
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

	cout << "������� ���-�� ����� -> ";
	cin >> n;

	cout << "������� ���-�� �������� -> ";
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
/// 2.	������� �������, ����������� ������� � ��������� ������������ ������ � ��������� ������� - �������� �������.

void add_positionK_column(int **&p, int n, int &m, int k)
{
	// ������ ������ ���������� ������� ����������
	int **tmp = new int *[n];


	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
		tmp[i] = new int[m + 1];		// ��������� � ��������� ����������� ������� ��� ���� �������	


	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
	{
		for (int j = 0; j < k; j++)		// �������� �������� � ��������� ������� � ����� ����������� ������ �� k �������
		{
			tmp[i][j] = p[i][j];
		}
	}

	for (int i = 0; i < n; i++)			// ��������� �� ���������� �� ���������� �������
		tmp[i][k] = k;					// � ������ k ������� ����� �������� �������� - � ������ ������ ����

	
	for (int i = 0; i < n; i++)			// ��������� �� ������� ����������
	{
		for (int j = k+1; j < m+1; j++)		// �������� �������� � ��������� ������� � ����� ����������� ������ c k �������
		{
			tmp[i][j] = p[i][j-1];
		}
	}


	/// ������� ��������� � ������� ���������� � ��������� �� ���������� ������� ---- ����� �������� ����������� ��� ������������ ��� ///

	for (int i = 0; i < n; i++)			// ��������� �� ���������� �� ���������� �������
		delete[] p[i];					// ������� ���������(������) �� ���������� ������� � ������� ����������

	delete[] p;							// ������� ������ ����������
	p = tmp;
	m++;								// ����������� ������ ����������� ������� �� 1 �������
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

	cout << "������� ���-�� ����� -> ";
	cin >> n;

	cout << "������� ���-�� �������� -> ";
	cin >> m;

	cout << "������� ����� ������� ���� �������� ����� ������� -> ";
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

