#include "StudentGroup.h"

Group::Group(int number)
{
	this->Number=number;
}

bool Group::addStudent(Student& student)
{
	if ( students.size()<20 && (std::find(this->students.begin(), this->students.end(), &student) == this->students.end()))
	{
		this->students.push_back(&student);
		student.addGroup(*this);
		return true;
	}
	else return false;
}

bool Group::tryToRemoveStudent(Student& student)
{
	for(std::vector<Student*>::iterator it = students.begin(); it!=students.end(); it++)    
	{
		if(*it==&student)
		{
			student.removeGroup(*this);
			students.erase(it);
			return true;
		}
	}
	return false;
}

void Group::sortStudents(std::string sort)	
{

	if (sort == "lex")
	{
		std::sort(this->students.begin(), this->students.end(), []( Student* s1,  Student* s2){ return s1->getIName() < s2->getIName(); });
	}
	else if (sort == "marks")
	{
		std::sort(this->students.begin(), this->students.end(), [](Student* s1, Student* s2){ return s1->getMark() < s2->getMark(); });
	}

}

std::vector<Student*> Group::getStudents()
{
	return this->students;
}

int Group::getNumber ()
{
	return Number;
}

std::ostream& operator<<(std::ostream& stream, Group& group)
{
	std::vector<Student*> st = group.getStudents();
	std::vector<Group*> gr;

	for (unsigned i = 0; i < st.size(); i++)
	{
		stream << "------------------------------------------------------------------------------" << std::endl;
		stream << "ФИО студента: " << st[i]->getFName() << " " << st[i]->getIName() << " " << st[i]->getOName() << std::endl;
		stream << "Успеваемость студента: " << static_cast<unsigned>(st[i]->getMark()) << std::endl;
		stream << "Номера групп, в которых находится студент: ";

		gr=st[i]->getGroups();

		for (unsigned j = 0; j < gr.size(); j++)
		{
			stream << gr[j]->getNumber() << " ";
		}
		stream << std::endl;

		stream << "------------------------------------------------------------------------------" << std::endl;
	}

	return stream;
}