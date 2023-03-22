#include<iostream>
using namespace std;
class stu
{
 private: char name[20],branch[20],subject[20];
 int roll,sem;
 public: stu();
 ~stu();
 void read();
 void display();
};
stu::stu()
{
 cout<<"\nThis is Student Details constructor called....."<<endl;
}
void stu::read()
{
 cout<<"\nEnter the student name::";
 cin>>name;
 cout<<"\nEnter branch::";
 cin>>branch;
 cout<<"\nEnter subject::";
 cin>>subject;
 cout<<"\nEnter roll number::";
 cin>>roll;
 cout<<"\nEnter semester::";
 cin>>sem;
}
void stu::display()
{
 cout<<"\nThe entered student details are shown below::......\n";
 cout<<"\nStudent name::"<<name<<endl;
 cout<<"\nBranch::"<<branch<<endl;
 cout<<"\nSubject::"<<subject<<endl;
 cout<<"\nRoll number::"<<roll<<endl;
 cout<<"\nSemester::"<<sem<<endl;
}
stu::~stu()
{
 cout<<"\n\nStudent Detail is closed.....\n";
}
int main()
{
 stu s;
 s.read();
 s.display();
 return 0;
}
