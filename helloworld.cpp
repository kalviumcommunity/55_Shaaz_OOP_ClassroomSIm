#include <iostream>
using namespace std;

class Teacher{
    public:

        string name;
        string classTeacherOf;
        string subject;
        int salary;

        Teacher(string n, string c, string sub, int s){
            name = n;
            classTeacherOf = c;
            subject = sub;
            salary = s;
        }

        void displayInfo(){
            cout<<"Name - "<<name<<endl;
            cout<<"Class Teacher of - "<<classTeacherOf<<endl;
            cout<<"Subject - "<<subject<<endl;
            cout<<"Salary - "<<salary<<endl<<endl;
        }

        int increment(int num){
            salary = salary + num;
            return salary;
        }
};

class Student{
    public:
        string name;
        string className;
        int attendance;
        int score;

        Student(string n, string c,int a,int s){
            name = n;
            className = c;
            attendance = a;
            score = s;
        }

        void displayInfo(){
            cout<<"Name - "<<name<<endl;
            cout<<"Class - "<<className<<endl;
            cout<<"Attendance - "<<attendance<<endl;
            cout<<"Score - "<<score<<endl<<endl;
        }

        int increaseScore(int num){
            score = score + num;
            return score;
        }

};

int main() {

    Teacher teacher1("Shaaz Jiwani","9th C","Computer Science",30000);
    Teacher teacher2("Om Jadhav","4th B","Marathi",100);
    Teacher teacher3("Divyam Prabhu Desai","9th A","Football",20000);
    Teacher teacher4("Ayman Velani","9th B","English",25000);

    teacher1.displayInfo();
    // teacher2.displayInfo();
    // teacher3.displayInfo();
    // teacher4.displayInfo();

    Student student1("Rushikesh Zope","9th B",92,68);
    Student student2("Parth Shah","10th A",99,90);
    Student student3("Ayush Tiwari","9th C",83,66);
    Student student4("Shreya Pawar","9th A",50,88);

    student1.displayInfo();
    // student2.displayInfo();
    // student3.displayInfo();
    // student4.displayInfo();

    teacher1.increment(3333);
    teacher1.displayInfo();

    student1.increaseScore(10);
    student1.displayInfo();

    return 0;
}