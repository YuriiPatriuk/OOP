#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//Реализуйте класс “Студент”.Необходимо хранить в переменных - членах класса : ФИО, дату рождения, 
//контактный телефон, город, страну, название учебного заведения, город и страну(где находится учебное заведение), 
//номер группы.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа 
//к отдельным переменным - членам.

class Student 
{
public:
	class Date
	{
		static const size_t CURR_YEAR = 2020;
		bool isLeap(size_t year) {
			return year % 4 == 0 && year % 100 != 0 && year % 400 == 0;
		}
	private:
		size_t day, month, year;
	public:
		void setMonth(const size_t & month_)
		{
			if (month_>=1&&month_<=12)
			{
				month = month_;
			}
		}
		void setYear(const size_t& year_)
		{
			if (year_>=CURR_YEAR-18)
			{
				year = year_;
			}
		}
		void setDay(size_t& day_)
		{
			size_t dayInMonth[]{31,28,31,30,31,30,31,31,30,31,30,31};
			if (day_ >= 1 && day_ <= dayInMonth[month - 1])
			{
				day = day_;
			}
			else if (month == 2 && day_ == 29 && isLeap(year) )
			{
				day = day_;
			}
		}
		void input()
		{
			do {
				cout << "Enter day: ";
				cin >> day;
				cout << "Enter month: ";
				cin >> month;
				cout << "Enter year: ";
				cin >> year;
				if (day > 0 && day <= 28 && month > 0 && month <= 12 && year>CURR_YEAR-18)
				{
					cout << "Enter date successfull!" << endl;
					break;
				}
				else if (month == 2 && day == 29 && isLeap(year))
				{
					cout << "Enter date successfull!" << endl;
					break;
				}
				if (day<0 || day>28) cout << "DAY ERROR ";
				if (month <= 0 || month > 12) cout << "MONTH ERROR ";
				if (year < 0 || year > CURR_YEAR-18) cout << "YEAR ERROR ";
			} while (true);
		}
		void print()
		{
			cout << day << "." << month << "." << year << endl;
		}
	};
	void input() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter surname: ";
		cin >> surname;
		cout << "Enter fathername: ";
		cin >> fathername;
		cout << "Enter date of birthday: ";
		date.input();
		cout << "Enter number: ";
		cin >> number;
	}
	void setName(const string& newName)
	{
		if (!newName.empty())
		{
			name = newName;
		}
	}
	void setSurname(const string &newSurname)
	{
		if (!newSurname.empty())
		{
			surname = newSurname;
		}
	}
	void setFathername(const string& newFathername)
	{
		if (!newFathername.empty())
		{
			fathername = newFathername;
		}
	}
	void setCity(const string& newCity)
	{
		if (!newCity.empty())
		{
			city = newCity;
		}
	}

private:
	string name;
	string surname;
	string fathername;
	Date date;
	string number;
	string city;
	string country;
	string univercity;
	string cityUnivercity;
	string countryUnivercity;
	string numberGroup;
	bool checkDigit(string check) {
		for (int i = 0; i < size(check); i++)
		{
			if (isdigit(check[i]))
			{
				return false;
			}
		}
		return true;
	}
};

int main() {


	return 0;
}