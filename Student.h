#pragma once

#include "StudentGroup.h"
#include <vector>
#include <string>


class Group;

class Student
{
public:
	Student(std::string fname,std::string iname,std::string oname,int mark);//конструктор 
	std::string getFName();//получить имя
	std::string getIName();//получить фамилия
	std::string getOName();//получить отчество
	void addGroup(Group& group);//добавить группу в *группы* студента
	void removeGroup(Group& group);//удалить группу из *групп* студента
	std::vector<Group*> getGroups();//получить группы студента
	int getMark();//успеваемость студента
private:
	std::vector<Group*> groups;//группы студента
	std::string  FName;//имя студента
	std::string  IName;//фамилию студента
	std::string  OName;//отчество студента
	int mark;//получить успеваемость студента
};

std::ostream& operator<<(std::ostream& stream, Student& student);//перегрузка оператора вывода
