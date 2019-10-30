#pragma once

#include "StudentGroup.h"
#include <vector>
#include <string>


class Group;

class Student
{
public:
	Student(std::string fname,std::string iname,std::string oname,int mark);//конструктор 
	std::string getFName();//имя
	std::string getIName();//фамилия
	std::string getOName();//отчество
	void addGroup(Group& group);//добавить группу в *группы* студента
	void removeGroup(Group& group);//удалить группу из *групп* студента
	std::vector<Group*> getGroups();//получить группы студента
	int getMark();//успеваемость студента
private:
	std::vector<Group*> groups;//группы студента
	std::string  FName;//получить имя студента
	std::string  IName;//получить фамилию студента
	std::string  OName;//получить отчество студента
	int mark;//получить успеваемость студента
};

std::ostream& operator<<(std::ostream& stream, Student& student);//перегрузка оператора вывода
