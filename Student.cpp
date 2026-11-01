#include <iostream>
using namespace std;
class Student
{
private:
 int rollNo;
 string name;
public:
 // Constructor
 Student(int r, string n)
 {
 rollNo = r;
 name = n;
 cout << "Student object created" << endl;
 }
 // Member function
 void display()
 {
 cout << "Roll Number: " << rollNo << endl;
 cout << "Name: " << name << endl;
 }
 // Destructor
 ~Student()
 {
 cout << "Student object destroyed" << endl;
 }
};
int main()
{
    int R;
    string N;
    cout<<"Enter roll number"<<endl;
    cin>>R;
    cout<<"Enter the name:"<<endl;
    cin>>N;
 Student s1(101,"ARUN");
 Student s2(R,N);
 s1.display();
 s2.display();
 return 0;
}