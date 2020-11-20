#include <iostream>
#include <string>
using namespace std;
#include "Student.h"

Student stud3("Ivan", Student::Gender::MALE);

int main()
{
	cout << "Count of students: " << Student::getCountOfStudents() << endl;
	stud3.print();
	cout << endl;
	/*for (size_t i = num; i >1; i--)
	{
		if (num%i==0&&denom%i==0)
		{
			num /= i;
			denom /= i;
			break;
		}
	}*/
	Student stud1("Petro", Student::Gender::MALE);
	stud1.addMark(10);
	stud1.addMark(9);
	stud1.addMark(7);
	stud1.print();
	cout << endl;

	Student* stud2=new Student("Sophia", Student::Gender::FEMALE);
	stud2->addMark(10);
	stud2->print();

	int res = Student::compareStudentsByName(stud1, *stud2);
	if (res == 0)
		cout << "Name`s a same" << endl;
	else if (res == -1)
		cout << "Name Petro" << endl;
	else if (res == 1)
		cout << "Name Sophia" << endl;

	int result = Student::compareStudentsByRate(stud1, *stud2);
	if (result == 0)
		cout << "Average`s same" << endl;
	else if (result == 1)
		cout << "Average Petra bigger" << endl;
	else if (result == -1)
		cout << "Average Sophia bigger" << endl;
	


	cout << "\nCount of students: " << Student::getCountOfStudents() << endl;
	delete stud2;

	cout << "End of main!!" << endl;
}
