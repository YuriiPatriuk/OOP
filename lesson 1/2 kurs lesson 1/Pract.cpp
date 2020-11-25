#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//Реализуйте класс “Студент”.Необходимо хранить в переменных - членах класса : ФИО, дату рождения, 
//контактный телефон, город, страну, название учебного заведения, город и страну(где находится учебное заведение), 
//номер группы.Реализуйте функции - члены класса для ввода данных+, вывода данных+, реализуйте аксессоры для доступа 
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
				if (day > 0 && day <= 28 && month > 0 && month <= 12 && year<=CURR_YEAR-18)
				{
					cout << "Enter date successfull!" << endl;
					break;
				}
				else if (month == 2 && day == 29 && isLeap(year))
				{
					cout << "Enter date successfull!" << endl;
					break;
				}
				if (day<0 || day>28) cout << "DAY ERROR\n";
				if (month <= 0 || month > 12) cout << "MONTH ERROR \n";
				if (year < 0 || year > CURR_YEAR-18) cout << "YEAR ERROR \n";
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
		cout << "Enter date of birthday: \n";
		date.input();
		cout << "Enter number: ";
		cin >> number;
		cout << "Enter city: ";
		cin >> city;
		cout << "Enter country: ";
		cin >> country;
		cout << "Enter your univercity: ";
		cin >> univercity;
		cout << "Enter city of your univercity: ";
		cin >> cityUnivercity;
		cout << "Enter country of your univercity: ";
		cin >> countryUnivercity;
		cout << "Enter group number: ";
		cin >> numberGroup;
	}
	void print() {
		cout << "Name: "<<name<<endl;
		cout << "Surname: "<<surname<<endl;
		cout << "Fathername: "<<fathername<<endl;
		date.print();
		cout << "Number: "<<number<<endl;
		cout << "City: "<<city<<endl;
		cout << "Country: "<<country<<endl;
		cout << "Univercity: "<<univercity<<endl;
		cout << "City of univercity: "<<cityUnivercity<<endl;
		cout << "Country of univercity: "<<countryUnivercity<<endl;
		cout << "Group number: "<<numberGroup<<endl;
	}
	void setName(const string& newName)
	{
		if (!newName.empty())
		{
			name = newName;
		}
		else
		{
			cout << "Name Error!" << endl;
		}
	}
	void setSurname(const string &newSurname)
	{
		if (!newSurname.empty())
		{
			surname = newSurname;
		}
		else
		{
			cout << "Surname Error!" << endl;
		}
	}
	void setFathername(const string& newFathername)
	{
		if (!newFathername.empty())
		{
			fathername = newFathername;
		}
		else
		{
			cout << "Fathername Error!" << endl;
		}
	}
	void setNumber(const string& newNumber)
	{
		number = newNumber;
	}
	void setCity(const string& newCity)
	{
		if (!newCity.empty())
		{
			city = newCity;
		}
		else
		{
			cout << "City Error!" << endl;
		}
	}
	void setCountry(const string& newCountry)
	{
		if (!newCountry.empty())
		{
			country = newCountry;
		}
		else
		{
			cout << "Country Error!" << endl;
		}
	}
	void setUniver(const string& newUniver)
	{
		if (!newUniver.empty())
		{
			univercity = newUniver;
		}
		else
		{
			cout << "Univercity Error!" << endl;
		}
	}
	void setCityUniver(const string& newCityUniver)
	{
		if (!newCityUniver.empty())
		{
			cityUnivercity = newCityUniver;
		}
		else
		{
			cout << "CityUnivercity Error!" << endl;
		}
	}
	void setCountryUniver(const string& newCountryUniver)
	{
		if (!newCountryUniver.empty())
		{
			countryUnivercity = newCountryUniver;
		}
		else
		{
			cout << "CountryUnivercity Error!" << endl;
		}
	}
	void setNumberGroup(const size_t& newNumberGroup)
	{
		if (newNumberGroup >0)
		{
			numberGroup = newNumberGroup;
		}
		else
		{
			cout << "NumberGroup Error!" << endl;
		}
	}

	string getName() {
		return name;
	}
	string getSurname() {
		return surname;
	}
	string getFathername() {
		return fathername;
	}
	string getNumber() {
		return number;
	}
	string getCity() {
		return city;
	}
	string getCountry() {
		return country;
	}
	string getUnivercity() {
		return univercity;
	}
	string getCityUnivercity() {
		return cityUnivercity;
	}
	string getCountryUnivercity() {
		return countryUnivercity;
	}
	string getNumberGroup() {
		return numberGroup;
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
	string str;
	Student student;
	student.input();
	cout << endl;
	student.print();

	cout<<"Name: "<<student.getName() << endl;

	return 0;
}