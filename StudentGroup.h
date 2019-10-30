#pragma once

#include "Student.h"
#include <vector>
#include <iterator>
#include <algorithm>

class Student;

class Group
{
private: 
	int Number;//номер группы
	std::vector<Student*> students;//студенты группы
public:
	Group(int number);//конструктор
	std::vector<Student*> getStudents();//получить студентов группы
	bool addStudent(Student& student);//добавить студента в группу
	int getNumber();//получить номер группы
	bool tryToRemoveStudent(Student& student);//удалить студента из группы
	Student& getStudentByName(std::string FName,std::string IName,std::string OName);//получить студента по ФИО
	void sortStudents(std::string sort);//сортировка студентов
};

std::ostream& operator<<(std::ostream& stream, Group& group);//перегрузка оператора вывода