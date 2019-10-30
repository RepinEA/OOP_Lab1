// L1.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	Student FirstStudent("�����", "����", "����������", 4);
	Student Second("����������", "�������", "���������", 3);
	Student Thrid("������", "����", "����������", 2);
	Student Four("�����������", "������", "��������������", 5);
	Student Five("��������", "�������", "�������������", 2);
	
	Group group7091(7091);
	Group group8032(8032);
	
	group7091.addStudent(FirstStudent);
	group7091.addStudent(Second);
	group7091.addStudent(Thrid);
	group7091.addStudent(Four);
	group7091.addStudent(Five);
	group8032.addStudent(Thrid);
	
	group7091.tryToRemoveStudent(Thrid);

	group7091.sortStudents("lex");
	vector<Group*> gr;
	
	for (unsigned i = 0; i < (group7091.getStudents().size()); i++)
	{
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "��� ��������: " << group7091.getStudents()[i]->getIName() << " " << group7091.getStudents()[i]->getFName() << " " << group7091.getStudents()[i]->getOName() << endl;
		cout << "������������ ��������: " << static_cast<unsigned>(group7091.getStudents()[i]->getMark()) << endl;
		cout << "������ �����, � ������� ��������� �������: ";
		gr=group7091.getStudents()[i]->getGroups();
		for (unsigned j = 0; j < gr.size(); j++)
		{
			cout << gr[j]->getNumber() << " ";
		}
		cout << endl;

		cout << "------------------------------------------------------------------------------" << endl;
	}
	
	system("Pause");
	return 0;
}