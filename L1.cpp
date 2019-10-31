// L1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <clocale>
#include "Student.h"
#include "StudentGroup.h"

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");

	Student FirstStudent("Репин", "Иван", "Дмитриевич", 4);
	Student Second("Колесников", "Дмитрий", "Андреевич", 3);
	Student Thrid("Ветров", "Иван", "Михайлович", 2);
	Student Four("Калиновский", "Степан", "Константинович", 5);
	Student Five("Шемякина", "Валерия", "Александровна", 2);
	
	Group group7091(7091);
	Group group8032(8032);
	
	group7091.addStudent(FirstStudent);
	group7091.addStudent(Second);
	group7091.addStudent(Thrid);
	group7091.addStudent(Four);
	group7091.addStudent(Five);
	group8032.addStudent(Thrid);
	
	group7091.tryToRemoveStudent(Thrid);

	group7091.sortStudents(byMarks);
	vector<Group*> gr;
	
	for (unsigned i = 0; i < (group7091.getStudents().size()); i++)
	{
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "Имя студента: " << group7091.getStudents()[i]->getIName() << " " << group7091.getStudents()[i]->getFName() << " " << group7091.getStudents()[i]->getOName() << endl;
		cout << "Успеваемость студента: " << static_cast<unsigned>(group7091.getStudents()[i]->getMark()) << endl;
		cout << "Номера групп, в которых находится студент: ";
		gr=group7091.getStudents()[i]->getGroups();
		for (unsigned j = 0; j < gr.size(); j++)
		{
			cout << gr[j]->getNumber() << " ";
		}
		cout << endl;

		cout << "------------------------------------------------------------------------------" << endl;
		gr.clear();
	}
	
	system("Pause");
	return 0;
}
