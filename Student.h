#pragma once

#include "StudentGroup.h"
#include <vector>
#include <string>


class Group;

class Student
{
public:
	Student(const std::string& fname,const std::string& iname,const std::string& oname,int mark);//конструктор 
	const std::string& getFName();//получить имя
	const std::string& getIName();//получить фамилию
	const std::string& getOName();//получить отчество
	void addGroup(Group& group);//добавить группу в *группы* студента
	void removeGroup(Group& group);//удалить группу из *групп* студента
	const std::vector<Group*>& getGroups();//получить группы студента
	int getMark();//успеваемость студента
private:
	std::vector<Group*> groups;//группы студента
	std::string  FName;// имя студента
	std::string  IName;// фамилию студента
	std::string  OName;// отчество студента
	int mark;//получить успеваемость студента
};

std::ostream& operator<<(std::ostream& stream, Student& student);//перегрузка оператора вывода
