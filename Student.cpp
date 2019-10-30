#include "Student.h" 



Student::Student(std::string fname,std::string iname,std::string oname,int mark)
{
	FName=fname;
	IName=iname;
	OName=oname;
	this->mark=mark;
}


std::string Student::getFName()
{
	return FName;
}

std::string Student::getIName()
{
	return IName;
}

std::string Student::getOName()
{
	return OName;
}

void Student::addGroup(Group& group)
{
	groups.push_back(&group);
}

void Student::removeGroup(Group& group)
{
	for(std::vector<Group*>::iterator it = groups.begin(); it!=groups.end(); it++)    
	{
		if(*it==&group)
		{
			groups.erase(it);
			return;
		}
	}
}

int Student::getMark()
{
	return this->mark;
}

std::vector<Group*> Student::getGroups()
{
	return groups;
}



std::ostream& operator<<(std::ostream& stream, Student& student)
{
	stream << "-----------------------------------------------------------------------------------------------" << std::endl;
	stream << "��� ��������: " << student.getIName() << " " << student.getFName() << " " << student.getMark() << std::endl;
	stream << "������������ ��������: " << static_cast<unsigned>(student.getMark()) << std::endl;
	stream << "������ �����, � ������� ��������� �������: ";

	std::vector<Group*> gr =student.getGroups();

	for (unsigned i = 0; i < gr.size(); i++)
	{
		stream << gr[i]->getNumber() << " ";
	}
	stream << std::endl;

	stream << "-----------------------------------------------------------------------------------------------" << std::endl;

	return stream;
}