#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Student;
struct Class
    {
string name;
vector <Student *> s;
    };
    struct Student
    {
string name;
vector <Class *> c;
    };
void print_Student(Student *s)
    {
    cout<<"\nName : "<<s->name<<"\n"<<"Class Joined : ";
        for(int i=0;i<s->c.size();i++)
    {
    cout<<s->c[i]->name<<"\t";
    }
    }
    void print_Class(Class *c)

{
    cout<<"\nName : "<<c->name<<"\n"<<"Student Joined : ";
        for(int i=0;i<c->s.size();i++)

{
    cout<<c->s[i]->name<<"\t";
    }
}

void enroll(Student *s1,Class *c1)
{
    s1->c.push_back(c1);
    c1->s.push_back(s1);
}

int main()
{
Student *s1,*s2,*s3,*s4,*s5;

s1=(Student *)malloc(sizeof(Student));
s1->name="Tim";
s2=(Student *)malloc(sizeof(Student));
s2->name="Matt";
s3=(Student *)malloc(sizeof(Student));
s3->name="Jerry";
s4=(Student *)malloc(sizeof(Student));
s4->name="Jeremy";
s5=(Student *)malloc(sizeof(Student));
s5->name="Susan";

Class *c1,*c2,*c3,*c4,*c5;

c1=(Class *)malloc(sizeof(Class));
c1->name="Algebra";
c2=(Class *)malloc(sizeof(Class));
c2->name="Spanish";
c3=(Class *)malloc(sizeof(Class));
c3->name="Biology";
c4=(Class *)malloc(sizeof(Class));
c4->name="Computer Science";
c5=(Class *)malloc(sizeof(Class));
c5->name="History";

enroll(s1,c1);
enroll(s1,c2);
enroll(s1,c3);
enroll(s1,c4);
enroll(s1,c4);
enroll(s2,c3);
enroll(s2,c4);
enroll(s3,c5);
enroll(s4,c4);
enroll(s5,c3);

print_Student(s1);
print_Student(s2);
print_Student(s3);
print_Student(s4);
print_Student(s5);
print_Class(c1);
print_Class(c2);
print_Class(c3);
print_Class(c4);
print_Class(c5);

return 0;
}