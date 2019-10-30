#pragma once

#include "Student.h"
#include <vector>
#include <iterator>
#include <algorithm>

class Student;

class Group
{
private: 
	int Number;//����� ������
	std::vector<Student*> students;//�������� ������
public:
	Group(int number);//�����������
	std::vector<Student*> getStudents();//�������� ��������� ������
	bool addStudent(Student& student);//�������� �������� � ������
	int getNumber();//�������� ����� ������
	bool tryToRemoveStudent(Student& student);//������� �������� �� ������
	Student& getStudentByName(std::string FName,std::string IName,std::string OName);//�������� �������� �� ���
	void sortStudents(std::string sort);//���������� ���������
};

std::ostream& operator<<(std::ostream& stream, Group& group);//���������� ��������� ������