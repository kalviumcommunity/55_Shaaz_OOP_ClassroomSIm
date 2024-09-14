#include <iostream>
using namespace std;

class Teacher {
    private:
        static int totalTeachers;

    protected:
        string name;
        string classTeacherOf;
        string subject;
        int salary;

    public:

        Teacher(){
            this-> name = "";
            this-> classTeacherOf = "";
            this-> subject = "";
            this-> salary = 0;
        }

        Teacher(string n, string c, string sub, int s) {
            this->name = n;
            this->classTeacherOf = c;
            this->subject = sub;
            this->salary = s;
            totalTeachers++;
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

        static int getTotal(){
            return totalTeachers;
        }

        // ACCESSORS

        string getName(){
            return name;
        }

        string getClassTeacherOf(){
            return classTeacherOf;
        }

        string getSubject(){
            return subject;
        }

        int getSalary(){
            return salary;
        }

        // MUTATORS

        void setName(string s){
            name = s;
        }

        void setClassTeacherOf(string s){
            classTeacherOf = s;
        }

        void setSubject(string s){
            subject = s;
        }

        void setSalary(int n){
            salary = n;
        }

        ~Teacher(){
            cout << "Destructor called for Teacher : " << name << endl;
        }
        
};

class Student {
    private:
        static int totalStudents;

    protected:
        string name;
        string className;
        int attendance;
        int score;

    public:

        Student(){
            this-> name = "";
            this-> className = "";
            this-> attendance = 0;
            this-> score = 0;
        }

        Student(string n, string c, int a, int s) {
            this->name = n;
            this->className = c;
            this->attendance = a;
            this->score = s;
            totalStudents++;
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

        static int getTotal(){
            return totalStudents;
        }

        // ACCESSORS

        string getName(){
            return name;
        }

        string getClassName(){
            return className;
        }

        int getAttendance(){
            return attendance;
        }

        int getScore(){
            return score;
        }

        // MUTATORS

        void setName(string s){
            name = s;
        }

        void setClassName(string s){
            className = s;
        }

        void setAttendance(int s){
            attendance = s;
        }

        void setScore(int n){
            score = n;
        }

        ~Student(){
            cout << "Destructor called for Student : " << name << endl;
        }
};

class Principal : protected Teacher{
    private:
        int yearsOfExp;

    public:
        Principal(string n, string c, string sub, int s,int y) : Teacher(n,c,sub,s){
            this->name = n;
            this->classTeacherOf = c;
            this->subject = sub;
            this->salary = s;
            this->yearsOfExp = y;
        }

        void displayInfo() {
            cout << "Principal Name - " << this->name << endl;
            cout << "Classes Assigned - " << this->classTeacherOf << endl;
            cout << "Main Subject for Principal - " << this->subject << endl;
            cout << "Salary - " << this->salary << endl;
            cout << "Years of Experience - " << this->yearsOfExp << endl << endl;
        }

        int getExp(){
            return yearsOfExp;
        }

        void setExp(int y){
            yearsOfExp = y;
        }

        ~Principal(){
            cout << "Destructor called for Principal - " << this->name << endl;
        }
};

class ClassMonitor : public Student{
    private:
        int leadershipScore;

    public:
        ClassMonitor(string n, string c, int a, int s,int l) : Student(n,c,a,s){
            this->name = n;
            this->className = c;
            this->attendance = a;
            this->score = s;
            this->leadershipScore = l;
        }

        void displayInfo() {
            cout << "Name - " << this->name << endl;
            cout << "Class - " << this->className << endl;
            cout << "Attendance - " << this->attendance << endl;
            cout << "Score - " << this->score << endl;
            cout << "Leadership Score - " << this->leadershipScore << endl << endl;
        }

        int getLeadership(){
            return leadershipScore;
        }

        void setLeadershipScore(int l){
            leadershipScore = l;
        }

        ~ClassMonitor(){
            cout << "Destructor called for Class Monitor - " << this-> name << endl ;
        }

};

int Teacher::totalTeachers = 0;
int Student::totalStudents = 0;

int main() {

    Teacher* teachers[4];

    teachers[0]  = new Teacher("Shaaz Jiwani","9th C","Computer Science",30000);
    teachers[1]  = new Teacher("Om Jadhav","4th B","Marathi",100);
    teachers[2]  = new Teacher("Divyam Prabhu Desai","9th A","Football",20000);
    teachers[3]  = new Teacher("Ayman Velani","9th B","English",25000);

    // for(int i = 0; i < 4; i++) {
    //     teachers[i]->displayInfo();
    // }

    Student* students[4];

    students[0] = new Student("Rushikesh Zope","9th B",92,68);
    students[1] = new Student("Parth Shah","10th A",99,90);
    students[2] = new Student("Ayush Tiwari","9th C",83,66);
    students[3] = new Student("Shreya Pawar","9th A",50,88);

    // for(int i = 0; i < 4; i++) {
    //     students[i]->displayInfo();
    // }

    teachers[0]->increment(3333);
    // teachers[0]->displayInfo();

    students[0]->increaseScore(10);
    // students[0]->displayInfo();

    students[0]->setScore(666);
    // students[0]->displayInfo();

    Principal principal("Sam Basil","Squad 55","Data Science",1000000,5);
    principal.displayInfo();

    ClassMonitor classmonitor("Aditya Borhade","Squad 55",91,99,7);
    classmonitor.displayInfo();

    cout << "Total Teachers: " << Teacher::getTotal() << endl;
    cout << "Total Students: " << Student::getTotal() << endl << endl;

    for(int i = 0; i < 4; i++){
        delete teachers[i];
        delete students[i];
    }

    return 0;
}
