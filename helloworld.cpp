#include <iostream>
using namespace std;

class Teacher {
    public:
        string name;
        string classTeacherOf;
        string subject;
        int salary;

        Teacher(string n, string c, string sub, int s) {
            this->name = n;
            this->classTeacherOf = c;
            this->subject = sub;
            this->salary = s;
        }

        void displayInfo() {
            cout << "Name - " << this->name << endl;
            cout << "Class Teacher of - " << this->classTeacherOf << endl;
            cout << "Subject - " << this->subject << endl;
            cout << "Salary - " << this->salary << endl << endl;
        }

        int increment(int num) {
            this->salary += num;
            return this->salary;
        }
};

class Student {
    public:
        string name;
        string className;
        int attendance;
        int score;

        Student(string n, string c, int a, int s) {
            this->name = n;
            this->className = c;
            this->attendance = a;
            this->score = s;
        }

        void displayInfo() {
            cout << "Name - " << this->name << endl;
            cout << "Class - " << this->className << endl;
            cout << "Attendance - " << this->attendance << endl;
            cout << "Score - " << this->score << endl << endl;
        }

        int increaseScore(int num) {
            this->score += num;
            return this->score;
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

    Student student1("Rushikesh Shah","9th B",92,68);
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