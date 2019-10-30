#pragma once

#include "StudentGroup.h"
#include <vector>
#include <string>


class Group;

class Student
{
public:
	Student(std::string fname,std::string iname,std::string oname,int mark);//����������� 
	std::string getFName();//���
	std::string getIName();//�������
	std::string getOName();//��������
	void addGroup(Group& group);//�������� ������ � *������* ��������
	void removeGroup(Group& group);//������� ������ �� *�����* ��������
	std::vector<Group*> getGroups();//�������� ������ ��������
	int getMark();//������������ ��������
private:
	std::vector<Group*> groups;//������ ��������
	std::string  FName;//�������� ��� ��������
	std::string  IName;//�������� ������� ��������
	std::string  OName;//�������� �������� ��������
	int mark;//�������� ������������ ��������
};

std::ostream& operator<<(std::ostream& stream, Student& student);//���������� ��������� ������
