#include<iostream>
using namespace std;

//#define FIRST_TASK
//#define SECOND_TASK
void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef FIRST_TASK
	int num;
	int rev = 0;
	cout << "������� �����: "; cin >> num;
	int buf = num;
	while (buf)
	{
		rev = rev * 10;
		rev = rev + buf % 10;
		buf = buf / 10;
	}
	if (num == rev)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
#endif // FIRST_TASK

#ifdef SECOND_TASK
    int num, i = 0;
    cout << "������� ���������� ������ �����" << endl;
    cin >> num;

    if (num % 2 == 1) 
    {
        cout << "���������� ����� ��������" << endl;
        return;
    }

    int* numbers = new int[num];
    int sum1 = 0;
    int sum2 = 0;
    cout << "������� �����" << endl;

    while (i < num) 
    {
        cin >> numbers[i];
        if (i < num / 2)
        {
            sum1 += numbers[i];
        }
        else
        {
            sum2 += numbers[i];
        }
        ++i;
    }
    if (sum1 == sum2)
    {
        cout << "���������� �����" << endl;
    }
    else
    {
        cout << "������� �����" << endl;
    }
#endif // SECOND_TASK
}