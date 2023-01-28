#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int rollno;
    int marks[3];
    char grade;
    void input();
    void calcgrade();
    void display();
};
void student::input()
{
    cout<<"enter the student name : ";
    cin>>name;
    cout<<"enter student roll no. : ";
    cin>>rollno;
    cout<<"enter marks for three subjects : ";
    cin>>marks[0]>>marks[1]>>marks[2];
}
void student::calcgrade()
{
    int total= marks[0]+marks[1]+marks[2];
    float avg= total/3;
    if (avg>=90)
    {
        grade='a';
    }
    else if (avg>=80)
    {
        grade='b';
    }
    else if (avg>=70)
    {
        grade='c';
    }
    else if (avg>=60)
    {
        grade='d';
    }
    else if(avg>=50)
    {
        grade='e';
    }
    else
    {
        grade='f';
    }

}
void student::display()
{
    cout<<"name of student :"<<name<<endl;
    cout<<"roll no. : "<<rollno<<endl;
    cout<<"marks : "<<marks[0]<<","<<marks[1]<<","<<marks[2]<<endl;
    cout<<"grade: "<<grade<<endl;

}
int main()
{
   student students[22];
   int n;
   
   cout<<"enter the number of students from rl no. 1 to 22 :";
   cin>>n;
   for (int i=0;i<n;i++)
   {
    students[i].input();
    students[i].calcgrade();
   } 
   for (int i=0;i<n;i++)
   {
    students[i].display();
   }
   return 0;
}