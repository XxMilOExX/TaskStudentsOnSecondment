#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;


struct Exam {
	int d1;
	int d2;
	int d3;
	int d4;
};

struct Cred {
	int d1;
	int d2;
	int d3;
};

class StudensGrand {

private:
	int pp;
	string secondName;
	float entranceScore;
	Exam exam;
	Cred cred;
	string words;

public:
	StudensGrand();
	StudensGrand(int, string, float, Exam, Cred, string);
	~StudensGrand();
	void Print();
	void DataEntry(int, string, float, Exam, Cred, string);

	int Getpp() { return pp; };
	string GetsecondName() { return secondName; };
	float GetentranceScore() { return entranceScore; };
	Exam Getexam() { return exam; };
	Cred GetCred() { return cred; };
	string Getword() { return words; };

	StudensGrand&operator= (StudensGrand d_o);
};




int main()
{
    setlocale(LC_ALL, "Rus");

	cout << "Нажмите соответствующую клавишу:" << endl;
	cout << "1 – ввод информации" << endl;
	cout << "2 - обработка информации" << endl;
	cout << "3 - вывод информации" << endl;
	cout << "4 - выход" << endl;

	int selectetedPoint;

	cin >> selectetedPoint;

	switch (selectetedPoint) {
	case 1:
		cout << "Откуда вводить исходные данные:" << endl;
		cout << "1 - клавиатура" << endl;
		cout << "2 - файл" << endl;

		int selectedInputPoint;

		cin >> selectedInputPoint;

		switch (selectedInputPoint) {
		case 1:

			break;
		case 2:

			break;
		}
		break;
	case 2:

		break;
	case 3:
		cout << "Kуда выводить данные:" << endl;
		cout << "1 - экран" << endl;
		cout << "2 - файл" << endl;

		int selectedOutPoint;

		cin >> selectedOutPoint;

		switch (selectedOutPoint) {
		case 1:

			break;
		case 2:

			break;
		}
		break;
	case 4:
		exit(0);
	default:
		cout << "Введен неверный ключ, выход" << endl;
		exit(0);
	}
	/*
	cout << "_________________________________________________________________________________________"<<endl;
	cout << "|№ п / п |    Фамилия    |Вступительный балл|       Экзамены      | Зачеты | Примечания |"<<endl;
	cout << "-----------------------------------------------------------------------------------------"<<endl;
    cout << "|        |               |                  | D1 | D2 | D3 |  D4  |D1|D2|D3|            |"<<endl;
	*/
}