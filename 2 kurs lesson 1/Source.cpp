//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//class Person
//{
//public:
//	static const size_t MAX_AGE = 122;
//	void input() 
//	{
//		cout << "Enter name: ";
//		cin >> name;
//		cout << "Enter surname: ";
//		cin >> surname;
//		cout << "Enter age: ";
//		cin >> age;
//	}
//	void print()
//	{
//		cout << "Name: " << setw(10) << name << endl;
//		cout << "Surname: " <<setw(10) << surname << endl;
//		cout << "Age: " << setw(10) << age << endl;
//	}
//	//accessors, getter & setter
//	void setName(const string &newName)// more effective(&) !!! const - without aside effect
//	{
//		if (!newName.empty())
//		{
//			name = newName;
//		}
//	}
//	void setSurname(const string &newSurname)
//	{
//		if (!newSurname.empty())
//		{
//			surname = newSurname;
//		}
//	}
//	void setAge(const size_t &newAge)
//	{
//		if (newAge<120&&newAge>0)
//		{
//			age = newAge;
//		}
//		else
//		{
//			cout << "Enter correct age!!" << endl;
//		}
//	}
//
//	const string & getName() //safe code and effective+
//	{
//		return name;
//	}
//	const string & getSurname()
//	{
//		return surname;
//	}
//	const size_t & getAge() 
//	{
//		return age;
//	}
//private: //incapsulation
//	string name="Noname";
//	string surname="Nosurname";
//	size_t age=0;
//};
//
//int main() {
//	Person person;//{"Vova","V",14}; //
//	cout << "Size of Person: " << sizeof(person) << endl;
//	/*person.print();
//	person.input();
//	cout << endl;
//	person.print();*/
//	/*person.setName("Vova");
//	person.setSurname("Miata");
//	person.setAge(30);
//	cout << endl;
//	person.print();*/
//	
//
//
//	return 0;
//}