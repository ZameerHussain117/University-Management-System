#include<iostream>
#include<vector>
#include<string>
#include<regex>
#include<limits>
#include<stdlib.h>
#include<fstream>
using namespace std;
class Faculity {
private:
    const int ID;
    string name, username, email, password, phone;
    int yearofexperience;
    string qualification;
    string rank;
    string department;
    float salary = 0;

public:
    Faculity(int id, string n, string un, string em, string ps, string ph, int ey, string q, string r, string dept)
        : ID(id), name(n), username(un), email(em), password(ps), phone(ph),
        yearofexperience(ey), qualification(q), rank(r), department(dept) {}

    Faculity(int id, string n, string un, string em, string ps, string ph, int ey, string q, string r, string dept, float sal)
        : ID(id), name(n), username(un), email(em), password(ps), phone(ph),
        yearofexperience(ey), qualification(q), rank(r), department(dept),salary(sal) {}

    int GetID() const { return ID; }
    string Getname() const { return name; }
    string Getusername() const { return username; }
    string Getemail() const { return email; }
    string Getpassword() const { return password; }
    string Getphone() const { return phone; }
    int Getexperience() const { return yearofexperience; }
    string Getqualification() const { return qualification; }
    string GetRank() const { return rank; }

    void Setname(string a) { name = a; }
    void Setusername(string a) { username = a; }
    void Setemail(string a) { email = a; }
    void Setpassword(string a) { password = a; }
    void Setphone(string a) { phone = a; }
    void Setyearofexperience(int a) { yearofexperience = a; }
    void Setqualification(string a) { qualification = a; }
    void SetRank(string a) { rank = a; }
    string GetDepartment() const { return department; }
    void SetDepartment(string dept) { department = dept; }
    float Getsalary() const { return salary; }
    void Setsalary(float a) { salary = a; }
    void showteacherDetail() {
        cout << "\n------------------------------------------------------------------------\n";
        cout << "Teacher ID              \t:\t\t " << ID << endl;
        cout << "Teacher name            \t:\t\t " << name << endl;
        cout << "Teacher username        \t:\t\t " << username << endl;
        cout << "Teacher email           \t:\t\t " << email << endl;
        cout << "Teacher password        \t:\t\t " << password << endl;
        cout << "Teacher phone           \t:\t\t " << phone << endl;
        cout << "Teacher experience year \t:\t\t " << yearofexperience << endl;
        cout << "Teacher qualification   \t:\t\t " << qualification << endl;
        cout << "Student department      \t:\t\t " << department << endl;
        cout << "Teacher rank            \t:\t\t " << rank << endl;
        cout << "Teacher salary          \t:\t\t " << salary << endl;
        cout << "\n------------------------------------------------------------------------\n";
        cin.ignore();
    }
};
class Student {
protected:
    const int ID;
    string name, username, email, password, phone, DOB, address;
    float CGPA = 0;
    string department;
    float fees = 0;

public:
    Student(int id, string n, string un, string em, string pas, string ph, string dob, string add, string dept)
        : ID(id), name(n), username(un), email(em), password(pas), phone(ph), DOB(dob), address(add), department(dept) {}

	Student(int id, string n, string un, string em, string pas, string ph, string dob,
        string add, string dept,float gpa,float fee):ID(id), name(n), username(un), email(em), password(pas), phone(ph), DOB(dob),
	address(add), department(dept),CGPA(gpa),fees(fee) {}
    int GetID() const { return ID; }
    string Getname() const { return name; }
    string Getusername() const { return username; }
    string Getemail() const { return email; }
    string Getpassword() const { return password; }
    string Getphone() const { return phone; }
    string GetDOB() const { return DOB; }
    string Getaddress() const { return address; }
    float GetCGPA() const { return CGPA; }

    void Setname(string a) { name = a; }
    void Setusername(string a) { username = a; }
    void Setemail(string a) { email = a; }
    void Setpassword(string a) { password = a; }
    void Setphone(string a) { phone = a; }
    void SetDOB(string a) { DOB = a; }
    void Setaddress(string a) { address = a; }
    void SetCGPA(float a) { CGPA = a; }

    string GetDepartment() const { return department; }
    void SetDepartment(string dept) { department = dept; }
    float Getfees() const { return fees; }
    void Setfees(float a) { fees = a; }
    void showStudentDetail() {
        cout << "Student ID              \t:\t\t " << ID << endl;
        cout << "Student name            \t:\t\t " << name << endl;
        cout << "Student username        \t:\t\t " << username << endl;
        cout << "Student email           \t:\t\t " << email << endl;
        cout << "Student password        \t:\t\t " << password << endl;
        cout << "Student phone           \t:\t\t " << phone << endl;
        cout << "Student date of birth   \t:\t\t " << DOB << endl;
        cout << "Student address         \t:\t\t " << address << endl;
        cout << "Teacher department      \t:\t\t " << department << endl;
        cout << "Student CGPA            \t:\t\t " << CGPA << endl;
    }
};
class UndergraduateStudent : public Student {
private:
    string internship;
    float c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
public:
    UndergraduateStudent(int id, string n, string un, string em, string pas, string ph, string dob, string add, string dept, string intern)
        :Student(id, n, un, em, pas, ph, dob, add, dept), internship(intern) {}


	UndergraduateStudent(int id,string n,string un,string em,string pas,string ph,string dob,string add,
        string dept,float gpa,float fee,string intern,float cr1, float cr2, float cr3, float cr4,
        float cr5, float cr6 ) :Student(id,n,un,em,pas,ph,dob,add,dept,gpa,fee),internship(intern),
    c1(cr1), c2(cr2), c3(cr3), c4(cr4), c5(cr5), c6(cr6){}


    string Getinternship() { return internship; }
    void Setinternship(string a) { internship = a; }
    void showdata()
    {
        showStudentDetail();
        cout << "Internship              \t:\t\t " << internship << endl;
    }
    float Getcourse1() { return c1; }
    float Getcourse2() { return c2; }
    float Getcourse3() { return c3; }
    float Getcourse4() { return c4; }
    float Getcourse5() { return c5; }
    float Getcourse6() { return c6; }
    void Setcourse1(float a) { c1 = a; }
    void Setcourse2(float a) { c2 = a; }
    void Setcourse3(float a) { c3 = a; }
    void Setcourse4(float a) { c4 = a; }
    void Setcourse5(float a) { c5 = a; }
    void Setcourse6(float a) { c6 = a; }
    void showfulldetail()
    {
        showdata();
        detailofcoursesandcgpa();
        cin.ignore();
    }
    void detailofcoursesandcgpa()
    {
        string gradeC1, gradeC2, gradeC3, gradeC4, gradeC5, gradeC6;

        if (c1 >= 85) gradeC1 = "A+";
        else if (c1 >= 80 && c1 < 85) gradeC1 = "A";
        else if (c1 >= 75 && c1 < 80) gradeC1 = "B+";
        else if (c1 >= 70 && c1 < 75) gradeC1 = "B";
        else if (c1 >= 65 && c1 < 70) gradeC1 = "B-";
        else if (c1 >= 61 && c1 < 65) gradeC1 = "C+";
        else if (c1 >= 58 && c1 < 61) gradeC1 = "C";
        else if (c1 >= 55 && c1 < 58) gradeC1 = "C-";
        else if (c1 >= 50 && c1 < 55) gradeC1 = "D";
        else gradeC1 = "F";

        if (c2 >= 85) gradeC2 = "A+";
        else if (c2 >= 80 && c2 < 85) gradeC2 = "A";
        else if (c2 >= 75 && c2 < 80) gradeC2 = "B+";
        else if (c2 >= 70 && c2 < 75) gradeC2 = "B";
        else if (c2 >= 65 && c2 < 70) gradeC2 = "B-";
        else if (c2 >= 61 && c2 < 65) gradeC2 = "C+";
        else if (c2 >= 58 && c2 < 61) gradeC2 = "C";
        else if (c2 >= 55 && c2 < 58) gradeC2 = "C-";
        else if (c2 >= 50 && c2 < 55) gradeC2 = "D";
        else gradeC2 = "F";

        if (c3 >= 85) gradeC3 = "A+";
        else if (c3 >= 80 && c3 < 85) gradeC3 = "A";
        else if (c3 >= 75 && c3 < 80) gradeC3 = "B+";
        else if (c3 >= 70 && c3 < 75) gradeC3 = "B";
        else if (c3 >= 65 && c3 < 70) gradeC3 = "B-";
        else if (c3 >= 61 && c3 < 65) gradeC3 = "C+";
        else if (c3 >= 58 && c3 < 61) gradeC3 = "C";
        else if (c3 >= 55 && c3 < 58) gradeC3 = "C-";
        else if (c3 >= 50 && c3 < 55) gradeC3 = "D";
        else gradeC3 = "F";

        if (c4 >= 85) gradeC4 = "A+";
        else if (c4 >= 80 && c4 < 85) gradeC4 = "A";
        else if (c4 >= 75 && c4 < 80) gradeC4 = "B+";
        else if (c4 >= 70 && c4 < 75) gradeC4 = "B";
        else if (c4 >= 65 && c4 < 70) gradeC4 = "B-";
        else if (c4 >= 61 && c4 < 65) gradeC4 = "C+";
        else if (c4 >= 58 && c4 < 61) gradeC4 = "C";
        else if (c4 >= 55 && c4 < 58) gradeC4 = "C-";
        else if (c4 >= 50 && c4 < 55) gradeC4 = "D";
        else gradeC4 = "F";

        if (c5 >= 85) gradeC5 = "A+";
        else if (c5 >= 80 && c5 < 85) gradeC5 = "A";
        else if (c5 >= 75 && c5 < 80) gradeC5 = "B+";
        else if (c5 >= 70 && c5 < 75) gradeC5 = "B";
        else if (c5 >= 65 && c5 < 70) gradeC5 = "B-";
        else if (c5 >= 61 && c5 < 65) gradeC5 = "C+";
        else if (c5 >= 58 && c5 < 61) gradeC5 = "C";
        else if (c5 >= 55 && c5 < 58) gradeC5 = "C-";
        else if (c5 >= 50 && c5 < 55) gradeC5 = "D";
        else gradeC5 = "F";

        if (c6 >= 85) gradeC6 = "A+";
        else if (c6 >= 80 && c6 < 85) gradeC6 = "A";
        else if (c6 >= 75 && c6 < 80) gradeC6 = "B+";
        else if (c6 >= 70 && c6 < 75) gradeC6 = "B";
        else if (c6 >= 65 && c6 < 70) gradeC6 = "B-";
        else if (c6 >= 61 && c6 < 65) gradeC6 = "C+";
        else if (c6 >= 58 && c6 < 61) gradeC6 = "C";
        else if (c6 >= 55 && c6 < 58) gradeC6 = "C-";
        else if (c6 >= 50 && c6 < 55) gradeC6 = "D";
        else gradeC6 = "F";

        cout << "\n----------------------------------------------------------------\n";
        cout << "COURSES                 \t  MARKS \t GRADES" << endl;
        cout << "COURSE 1                \t: " << c1 << "\t\t " << gradeC1 << endl;
        cout << "COURSE 1                \t: " << c2 << "\t\t " << gradeC2 << endl;
        cout << "COURSE 1                \t: " << c3 << "\t\t " << gradeC3 << endl;
        cout << "COURSE 1                \t: " << c4 << "\t\t " << gradeC4 << endl;
        cout << "COURSE 1                \t: " << c5 << "\t\t " << gradeC5 << endl;
        cout << "COURSE 1                \t: " << c6 << "\t\t " << gradeC6 << endl;
        cout << "      CGPA              \t:\t\t " << CGPA << endl;
        cout << "\n----------------------------------------------------------------\n";
    }
};
class PostgraduateStudent : public Student {
private:
    string thesis;
    float MC1 = 0, MC2 = 0, MC3 = 0, MC4 = 0;
public:
    PostgraduateStudent(int id, string n, string un, string em, string pas, string ph, string dob, string add, string dept, string th)
        :Student(id, n, un, em, pas, ph, dob, add, dept), thesis(th) {}

    PostgraduateStudent(int id, string n, string un, string em, string pas, string ph, string dob, string add,
        string dept, float gpa, float fee, string thes, float cr1, float cr2, float cr3, float cr4)
	:Student(id, n, un, em, pas, ph, dob, add, dept, gpa, fee), thesis(thes),
        MC1(cr1), MC2(cr2), MC3(cr3), MC4(cr4) {}

	string Getthesis() { return thesis; }
    void Setthesis(string a) { thesis = a; }
    void showdata()
    {
        showStudentDetail();
        cout << "THESIS                  \t:\t\t " << thesis << endl;
    }
    float GetMastercourse1() { return MC1; }
    float GetMastercourse2() { return MC2; }
    float GetMastercourse3() { return MC3; }
    float GetMastercourse4() { return MC4; }
    void SetMastercourse1(float a) { MC1 = a; }
    void SetMastercourse2(float a) { MC2 = a; }
    void SetMastercourse3(float a) { MC3 = a; }
    void SetMastercourse4(float a) { MC4 = a; }

    void showfulldetail()
    {
        showdata();
        detailoffcoursesandcgpa();
        cin.ignore();
    }
    void detailoffcoursesandcgpa()
    {
        string gradeMC1, gradeMC2, gradeMC3, gradeMC4;

        if (MC1 >= 85) gradeMC1 = "A+";
        else if (MC1 >= 80 && MC1 < 85) gradeMC1 = "A";
        else if (MC1 >= 75 && MC1 < 80) gradeMC1 = "B+";
        else if (MC1 >= 70 && MC1 < 75) gradeMC1 = "B";
        else if (MC1 >= 65 && MC1 < 70) gradeMC1 = "B-";
        else if (MC1 >= 61 && MC1 < 65) gradeMC1 = "C+";
        else if (MC1 >= 58 && MC1 < 61) gradeMC1 = "C";
        else if (MC1 >= 55 && MC1 < 58) gradeMC1 = "C-";
        else if (MC1 >= 50 && MC1 < 55) gradeMC1 = "D";
        else gradeMC1 = "F";

        if (MC2 >= 85) gradeMC2 = "A+";
        else if (MC2 >= 80 && MC2 < 85) gradeMC2 = "A";
        else if (MC2 >= 75 && MC2 < 80) gradeMC2 = "B+";
        else if (MC2 >= 70 && MC2 < 75) gradeMC2 = "B";
        else if (MC2 >= 65 && MC2 < 70) gradeMC2 = "B-";
        else if (MC2 >= 61 && MC2 < 65) gradeMC2 = "C+";
        else if (MC2 >= 58 && MC2 < 61) gradeMC2 = "C";
        else if (MC2 >= 55 && MC2 < 58) gradeMC2 = "C-";
        else if (MC2 >= 50 && MC2 < 55) gradeMC2 = "D";
        else gradeMC2 = "F";

        if (MC3 >= 85) gradeMC3 = "A+";
        else if (MC3 >= 80 && MC3 < 85) gradeMC3 = "A";
        else if (MC3 >= 75 && MC3 < 80) gradeMC3 = "B+";
        else if (MC3 >= 70 && MC3 < 75) gradeMC3 = "B";
        else if (MC3 >= 65 && MC3 < 70) gradeMC3 = "B-";
        else if (MC3 >= 61 && MC3 < 65) gradeMC3 = "C+";
        else if (MC3 >= 58 && MC3 < 61) gradeMC3 = "C";
        else if (MC3 >= 55 && MC3 < 58) gradeMC3 = "C-";
        else if (MC3 >= 50 && MC3 < 55) gradeMC3 = "D";
        else gradeMC3 = "F";

        if (MC4 >= 85) gradeMC4 = "A+";
        else if (MC4 >= 80 && MC4 < 85) gradeMC4 = "A";
        else if (MC4 >= 75 && MC4 < 80) gradeMC4 = "B+";
        else if (MC4 >= 70 && MC4 < 75) gradeMC4 = "B";
        else if (MC4 >= 65 && MC4 < 70) gradeMC4 = "B-";
        else if (MC4 >= 61 && MC4 < 65) gradeMC4 = "C+";
        else if (MC4 >= 58 && MC4 < 61) gradeMC4 = "C";
        else if (MC4 >= 55 && MC4 < 58) gradeMC4 = "C-";
        else if (MC4 >= 50 && MC4 < 55) gradeMC4 = "D";
        else gradeMC4 = "F";

        cout << "\n----------------------------------------------------------------\n";
        cout << "COURSES                 \t  MARKS \t GRADES"<<endl;
        cout << "MASTER COURSE 1         \t: " << MC1 << "\t " << gradeMC1 << endl;
        cout << "MASTER COURSE 2         \t: " << MC2 << "\t " << gradeMC2 << endl;
        cout << "MASTER COURSE 3         \t: " << MC3 << "\t " << gradeMC3 << endl;
        cout << "MASTER COURSE 4         \t: " << MC4 << "\t " << gradeMC4 << endl;
        cout << "      CGPA              \t:\t\t " << CGPA << endl;
        cout << "\n----------------------------------------------------------------\n";
    }
};
class Department {
protected:
    string DepartmenName;

public:
    Department(string a) : DepartmenName(a) {}
    string Getdeptname() { return DepartmenName; }
    void Setdeptname(string a) { DepartmenName = a; }
};
class Rank {
protected:
    string RankName;

public:
    Rank(string a) : RankName(a) {}
    string GetRankName() { return RankName; }
    void SetRankName(string a) { RankName = a; }
};
class Qualification {
protected:
    string QualificationName;

public:
    Qualification(string a) : QualificationName(a) {}
    string GetQualificationName() { return QualificationName; }
    void SetQualificationName(string a) { QualificationName = a; }
};
class AccountOffice
{
    string username = "acc";
    string password = "acc";
    double fees = 100000;
    double salary = 100000;
public:
    string GetUsername() { return username; }
    string Getpassword() { return password; }
	void addundergraduatestudentfees(vector<UndergraduateStudent>& students)
    {
        int a;
        double discount;
        double studentfees;
        const double fees =100000 ;  

        cout << "Enter the ID of student = ";
        cin >> a;

        for (UndergraduateStudent& stu : students)
        {
            if (a == stu.GetID())
            {
                cout << "CGPA OF STUDENT IS " << stu.GetCGPA() << endl;
                cout << "Calculating fees for student\n";

                if (stu.GetCGPA() >= 3.7)
                {
                    discount = fees * 0.60;
                    studentfees = fees - discount;
                    stu.Setfees(studentfees);
                    cout << "Student got 60 percent off due to excellent cgpa!" << endl;
                }
                else if (stu.GetCGPA() >= 3.4 && stu.GetCGPA() < 3.7)
                {
                    discount = fees * 0.40;
                    studentfees = fees - discount;
                    stu.Setfees(studentfees);
                    cout << "Student got 40 percent off due to good cgpa!" << endl;
                }
                else if (stu.GetCGPA() >= 3.0 && stu.GetCGPA() < 3.4)
                {
                    discount = fees * 0.20;
                    studentfees = fees - discount;
                    stu.Setfees(studentfees);
                    cout << "Student got 20 percent off due to better cgpa!" << endl;
                }
                else
                {
                    stu.Setfees(fees);
                }
                cout << "fees added successfully" << endl;
                cin.ignore();
                return;
            }
        }

        cout << "Student with ID " << a << " not found!" << endl;
        cin.ignore();
        return;
        
    }
    void addpostgraduatestudentfees(vector<PostgraduateStudent>& students)
    {
        int a;
        double discount;
        double studentfees;
        const double fees = 80000;  

        cout << "Enter the ID of student = ";
        cin >> a;

        for (PostgraduateStudent& stu : students)
        {
            if (a == stu.GetID())
            {
                cout << "CGPA OF STUDENT IS " << stu.GetCGPA() << endl;
                cout << "Calculating fees for student\n";

                if (stu.GetCGPA() >= 3.7)
                {
                    discount = fees * 0.60;
                    studentfees = fees - discount;
                    stu.Setfees(studentfees);
                    cout << "Student got 60 percent off due to excellent cgpa!" << endl;
                }
                else if (stu.GetCGPA() >= 3.4 && stu.GetCGPA() < 3.7)
                {
                    discount = fees * 0.40;
                    studentfees = fees - discount;
                    stu.Setfees(studentfees);
                    cout << "Student got 40 percent off due to good cgpa!" << endl;
                }
                else if (stu.GetCGPA() >= 3.0 && stu.GetCGPA() < 3.4)
                {
                    discount = fees * 0.20;
                    studentfees = fees - discount;
                    stu.Setfees(studentfees);
                    cout << "Student got 20 percent off due to better cgpa!" << endl;
                }
                else
                {
                    stu.Setfees(fees);
                }
                cout << "fees added successfully" << endl;
                cin.ignore();
                return;
            }
        }
        cout << "Student with ID " << a << " not found!" << endl;
        cin.ignore();
        return;
    }
    void AddFacultySalary(vector<Faculity>& teachers)
    {
        int a;
        float rankbonus;
        float experiencebonus;
        float FaculitySalary = 70000;
        cout << "Enter the ID of teacher = ";
        cin >> a;

        for (Faculity& teach : teachers) 
        {
            if (a == teach.GetID())
            {
                cout << "Teacher rank is: " << teach.GetRank() << endl;
                cout << "Teacher experience is: " << teach.Getexperience() << endl;
                cout << "Teacher Qualification is: " << teach.Getqualification() << endl;
                cout << "Calculating salary for teacher\n";

                if (teach.GetRank() == "HOD")
                {
                    float duration;

                    cout << "Enter the time spent on this specific rank in years:\n  " << endl;
                    cin >> duration;

                    if (duration < 1)
                        FaculitySalary = 200000;
                    else if (duration == 1)
                        FaculitySalary = 210000;
                    else if (duration == 2)
                        FaculitySalary = 220000;
                    else
                        FaculitySalary = 230000;
                }
                else if (teach.GetRank() == "Assistant Professor")
                {
                    FaculitySalary = 90000;

                    if (teach.Getexperience() >= 1)
                    {
                        FaculitySalary += 5000;
                        if (teach.Getqualification() == "PHD")
                            FaculitySalary += 10000;
                        else if (teach.Getqualification() == "Master")
                            FaculitySalary += 4000;
                    }
                    else if (teach.Getexperience() <= 1)
                    {
                        if (teach.Getqualification() == "PHD")
                            FaculitySalary += 10000;
                        else if (teach.Getqualification() == "Master")
                            FaculitySalary += 4000;
                    }
                }
                else if (teach.GetRank() == "Professor")
                {
                    FaculitySalary = 110000;

                    if (teach.Getexperience() >= 1)
                    {
                        FaculitySalary += 5000;
                        if (teach.Getqualification() == "PHD")
                            FaculitySalary += 10000;
                        else if (teach.Getqualification() == "Master")
                            FaculitySalary += 4000;
                    }
                    else if (teach.Getexperience() <= 1)
                    {
                        if (teach.Getqualification() == "PHD")
                            FaculitySalary += 10000;
                        else if (teach.Getqualification() == "Master")
                            FaculitySalary += 4000;
                    }
                }
                else if (teach.GetRank() == "Senior Professor")
                {
                    FaculitySalary = 140000;

                    if (teach.Getexperience() >= 1)
                    {
                        FaculitySalary += 5000;
                        if (teach.Getqualification() == "PHD")
                            FaculitySalary += 10000;
                        else if (teach.Getqualification() == "Master")
                            FaculitySalary += 4000;
                    }
                    else if (teach.Getexperience() <= 1)
                    {
                        if (teach.Getqualification() == "PHD")
                            FaculitySalary += 10000;
                        else if (teach.Getqualification() == "Master")
                            FaculitySalary += 4000;
                    }
                }
                else
                {
                    cout << "Faculty with ID " << a << " not found!" << endl;
                    return;
                }
                teach.Setsalary(FaculitySalary);
                cout << "Calculated salary: " << FaculitySalary << endl;
                cin.ignore();
                return;
            }
        }
        cout << "Faculty with ID " << a << " not found!" << endl;
        cin.ignore();
        return;
    }

};
class Admin {
    const string loginusername = "admin";
    const string loginpassword = "admin";

public:
    string getloginusername() const { return loginusername; }
    string getloginpassword() const { return loginpassword; }

    void addUndergraduateStudent(vector<UndergraduateStudent>& students, vector<Department>& deptt) {
        int a;
        string b, c, d, e, f, g, h, dept, intern;
        try {
            cout << "Enter student ID constant : ";
            cin >> a;
            for (const UndergraduateStudent& student : students) {
                if (student.GetID() == a) {
                    cout << "Student with ID " << a << " already exists! Try entering a different ID." << endl;
                    return;
                }
            }
            if (cin.fail()) {
                throw invalid_argument("Invalid input. Please enter a valid integer for student ID.");
            }
            cin.ignore();
            cout << "Enter name of student : ";
            getline(cin, b);
            cout << "Enter username of student : ";
            getline(cin, c);
            cout << "Enter email of student : ";
            do {
                getline(cin, d);
                if (!regex_match(d, regex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b"))) {
                    cout << "Invalid email format. Please enter a valid email: ";
                }
            } while (!regex_match(d, regex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b")));
            cout << "Enter password of student : ";
            getline(cin, e);
            cout << "Enter the phone of student : ";
            getline(cin, f);
            cout << "Enter the date of birth of student : ";
            getline(cin, g);
            cout << "Enter the address of student : ";
            getline(cin, h);
        again:
            cout << "Choose department from the following!!";
            for (Department& d : deptt) {
                cout << d.Getdeptname() << "\t";
            }
            cout << "\nEnter the department of student: ";
            getline(cin, dept);

            bool validDept = false;
            for (Department& d : deptt) {
                if (dept == d.Getdeptname()) {
                    validDept = true;
                    break;
                }
            }

            if (!validDept) {
                cout << "The department does not exist. Try again!" << endl;
                goto again;

            }
            cout << "Enter the internship of student = ";
            getline(cin, intern);

            students.push_back(UndergraduateStudent(a, b, c, d, e, f, g, h, dept, intern));
            cout << "Student added successfully!!!" << endl;
            cin.ignore();
        }
        catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    void addPostgraduateStudent(vector<PostgraduateStudent>& students, vector<Department>& deptt) {
        int a;
        string b, c, d, e, f, g, h, dept, thesis;
        try {
            cout << "Enter student ID constant : ";
            cin >> a;
            for (const PostgraduateStudent& student : students) {
                if (student.GetID() == a) {
                    cout << "Student with ID " << a << " already exists! Try entering a different ID." << endl;
                    return;
                }
            }
            if (cin.fail()) {
                throw invalid_argument("Invalid input. Please enter a valid integer for student ID.");
            }
            cin.ignore();
            cout << "Enter name of student : ";
            getline(cin, b);
            cout << "Enter username of student : ";
            getline(cin, c);
            cout << "Enter email of student : ";
            do {
                getline(cin, d);
                if (!regex_match(d, regex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b"))) {
                    cout << "Invalid email format. Please enter a valid email: ";
                }
            } while (!regex_match(d, regex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b")));
            cout << "Enter password of student : ";
            getline(cin, e);
            cout << "Enter the phone of student : ";
            getline(cin, f);
            cout << "Enter the date of birth of student : ";
            getline(cin, g);
            cout << "Enter the address of student : ";
            getline(cin, h);
        again:
            cout << "Choose department from the following!!";
            for (Department& d : deptt) {
                cout << d.Getdeptname() << "\t";
            }
            cout << "\nEnter the department of student: ";
            getline(cin, dept);

            bool validDept = false;
            for (Department& d : deptt) {
                if (dept == d.Getdeptname()) {
                    validDept = true;
                    break;
                }
            }

            if (!validDept) {
                cout << "The department does not exist. Try again!" << endl;
                goto again;

            }
            cout << "Enter the thesis of student = ";
            getline(cin, thesis);

            students.push_back(PostgraduateStudent(a, b, c, d, e, f, g, h, dept, thesis));
            cout << "Student added successfully!!!" << endl;
            cin.ignore();
        }
        catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    void editUndergraduatestudentdata(vector<UndergraduateStudent>& students) {
        int a;
        int option;
        bool studentFound = false;  

        try {
            cout << "Enter the ID of the student you want to show & edit: ";
            cin >> a;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore();
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }
        m:
        for (UndergraduateStudent& student : students) {
            if (student.GetID() == a) {
                studentFound = true;  // Set the boolean variable to true when a match is found
                student.showdata();
                cout << "-------------------------------------------" << endl;
                cout << "Press 1 to edit name" << endl;
                cout << "Press 2 to edit username" << endl;
                cout << "Press 3 to edit email" << endl;
                cout << "Press 4 to edit password" << endl;
                cout << "Press 5 to edit phone" << endl;
                cout << "Press 6 to edit dateofbirth" << endl;
                cout << "Press 7 to edit address" << endl;
                cout << "Press 8 to edit internship" << endl;
                cout << "Enter your choice = ";
                cin >> option;

                string b;
                switch (option) {
                case 1:
                    cout << "Name = " << student.Getname() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setname(b);
                    break;
                case 2:
                    cout << "Username = " << student.Getusername() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setusername(b);
                    break;
                case 3:
                    cout << "Email = " << student.Getemail() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setemail(b);
                    break;
                case 4:
                    cout << "Password = " << student.Getpassword() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setpassword(b);
                    break;
                case 5:
                    cout << "phone = " << student.Getphone() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setphone(b);
                    break;
                case 6:
                    cout << "date of birth = " << student.GetDOB() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.SetDOB(b);
                    break;
                case 7:
                    cout << "Address = " << student.Getaddress() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setaddress(b);
                    break;
                case 8:
                    cout << "Intership = " << student.Getinternship() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setinternship(b);
                case 0:
                    break;
                default:
                    cout << "Wrong choice!!try again";
                    cin.ignore();
                    system("cls");
                    goto m;
                }
            
            }
        }

        if (!studentFound) {
            cout << "Student with ID " << a << " not found!!\n";
        }
    }

    void showfullUndergraduatestudentdata(vector<UndergraduateStudent>& students) {
        int a;
        int option;
        bool studentFound = false;
        try {
            cout << "Enter the ID of the student you want to see detail: ";
            cin >> a;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore(); 
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }
        for (UndergraduateStudent& student : students) {
            studentFound = true;
            if (student.GetID() == a)
            {
                student.showfulldetail();
                cin.ignore();
            }
            if (!studentFound) {
                cout << "Student with ID " << a << " not found!!\n";
            }
        }
    }
    void editPostgraduatestudentdata(vector<PostgraduateStudent>& students)
    {
        int a;
        int option;
        bool studentFound = false;
        try {
            cout << "Enter the ID of the student you want to show & edit: ";
            cin >> a;

            if (cin.fail()) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore(); 
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }

    m:
        for (PostgraduateStudent& student : students) {
            if (student.GetID() == a) {
                studentFound = true;
                student.showdata();

                cout << "-------------------------------------------" << endl;
                cout << "Press 1 to edit name" << endl;
                cout << "Press 2 to edit username" << endl;
                cout << "Press 3 to edit email" << endl;
                cout << "Press 4 to edit password" << endl;
                cout << "Press 5 to edit phone" << endl;
                cout << "Press 6 to edit dateofbirth" << endl;
                cout << "Press 7 to edit address" << endl;
                cout << "Press 8 to edit thesis" << endl;
                cout << "Enter your choice = ";
                cin >> option;

                string b;
                switch (option) {
                case 1:
                    cout << "Name = " << student.Getname() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setname(b);
                    break;
                case 2:
                    cout << "Username = " << student.Getusername() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setusername(b);
                    break;
                case 3:
                    cout << "Email = " << student.Getemail() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setemail(b);
                    break;
                case 4:
                    cout << "Password = " << student.Getpassword() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setpassword(b);
                    break;
                case 5:
                    cout << "phone = " << student.Getphone() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setphone(b);
                    break;
                case 6:
                    cout << "date of birth = " << student.GetDOB() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.SetDOB(b);
                    break;
                case 7:
                    cout << "Address = " << student.Getaddress() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setaddress(b);
                    break;
                case 8:
                    cout << "Thesis = " << student.Getthesis() << endl;
                    cout << "Enter new = ";
                    cin.ignore();
                    getline(cin, b);
                    student.Setthesis(b);
                case 0:
                    break;
                default:
                    cout << "Wrong choice!!try again";
                    cin.ignore();
                    system("cls");
                    goto m;
                }
            }
            if (!studentFound) {
                cout << "Student with ID " << a << " not found!!\n";
            }
        }
    }

    void showfullPostgraduatestudentdata(vector<PostgraduateStudent>& students) {
        int a;
        int option;
        bool studentFound = false;

        try {
            cout << "Enter the ID of the student you want to see detail: ";
            cin >> a;

            if (cin.fail()) {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore(); 
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }
        for (PostgraduateStudent& student : students) {
            if (student.GetID() == a)
            {
                studentFound = true;
                student.showfulldetail();
                cin.ignore();
            }
            if (!studentFound) {
                cout << "Student with ID " << a << " not found!!\n";
            }
        }
    }
    void showallPostgraduatestudent(vector<PostgraduateStudent>& students)
    {
        cout << "\n                         POSTGRADUATE STUDENTS                  \n\n";

        cout << "\n--------------------------------------------------------------------------\n";
    	for (const PostgraduateStudent& student : students) {
    		cout << "ID = " << student.GetID() << "\t NAME = " << student.Getname() << "\t DEPARTMENT = " << student.GetDepartment() << endl;
    	}
        cout << "\n--------------------------------------------------------------------------\n";
        cin.ignore();
    }

    void showallUndergraduatestudent(vector<UndergraduateStudent>& students)
    {
        cout << "\n                         UNDERGRADUATE STUDENTS                  \n\n";

        cout << "\n--------------------------------------------------------------------------\n";
    	for (UndergraduateStudent student : students)
        {
            cout << "ID = " << student.GetID() << "\t NAME = " << student.Getname() << "\t DEPARTMENT = " << student.GetDepartment() << endl;
        }
        cout << "\n--------------------------------------------------------------------------\n";
        cin.ignore();
    }
    void addFaculitymember(vector<Faculity>& teachers, vector<Department>& deptt, vector<Rank>& ranks, vector<Qualification>& qualifications)
    {
        int a, g;
        string b, c, d, e, f, dept, r, q;
        try
        {
            cout << "Enter teacher ID constant : ";
            cin >> a;
            for (const Faculity& teacher : teachers) {
                if (teacher.GetID() == a) {
                    cout << "Teacher with ID " << a << " already exists! Try entering a different ID." << endl;
                    return;
                }
            }
            if (cin.fail()) {
                throw invalid_argument("Invalid input. Please enter a valid integer for teacher ID.");
            }

            cin.ignore();
            cout << "Enter name of teacher : ";
            getline(cin, b);

            cout << "Enter username of teacher : ";
            getline(cin, c);

            cout << "Enter email of teacher : ";
            do {
                getline(cin, d);
                if (!regex_match(d, regex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b"))) {
                    cout << "Invalid email format. Please enter a valid email: ";
                }
            } while (!regex_match(d, regex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b")));

            cout << "Enter password of teacher : ";
            getline(cin, e);

            cout << "Enter the phone of teacher : ";
            getline(cin, f);

            cout << "Enter number of experience of teacher : ";
            cin >> g;
            cin.ignore();
            do {
                cout << "Enter the qualifications of teacher =";
                for (Qualification qual : qualifications) {
                    cout << qual.GetQualificationName() << "\t";
                }
                cout << "\nEnter the qualifications of teacher =";

                getline(cin, q);
            } while (findQualification(qualifications, q) == "");

            do {

                for (Rank rank : ranks) {
                    cout << rank.GetRankName() << "\t";
                }
                cout << "\nEnter the Rank of teacher ";

                getline(cin, r);
            } while (findRank(ranks, r) == "");

        again:
            cout << "Choose department from the following!!";
            for (Department& d : deptt) {
                cout << d.Getdeptname() << "\t";
            }
            cout << "\nEnter the department of student: ";
            getline(cin, dept);

            bool validDept = false;
            for (Department& d : deptt) {
                if (dept == d.Getdeptname()) {
                    validDept = true;
                    break;
                }
            }

            if (!validDept) {
                cout << "The department does not exist. Try again!" << endl;
                goto again;
            }

            if (r == "HOD" && isHODExists(teachers, dept)) {
                cout << "HOD already exists in the " << dept << " department. Setting rank to Senior Professor." << endl;
                r = "Senior Professor";
            }

            if (r == "Assistant Professor") {
                if (g >= 10 && q == "PHD") {
                    r = "Senior Professor";
                }
                else if (g >= 5 && q == "Bachelors") {
                    r = "Senior Professor";
                }
                else if (g >= 2 && q == "Master") {
                    r = "Professor";
                }
            }
            else if (r == "Professor") {
                if (g >= 10) {
                    r = "Senior Professor";
                }
            }
            else if (r == "Senior Professor") {
                if (g < 10 && q == "PHD") {
                    r = "Professor";
                }
            }

            teachers.push_back(Faculity(a, b, c, d, e, f, g, q, r, dept));
        }
        catch (const exception& e)
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    string findQualification(const vector<Qualification>& qualifications, const string& target)
    {
        for (Qualification qual : qualifications) {
            if (qual.GetQualificationName() == target) {
                return qual.GetQualificationName();
            }
        }
        return "";
    }

    string findRank(const vector<Rank>& ranks, const string& target)
    {
        for (Rank r : ranks) {
            if (r.GetRankName() == target) {
                return r.GetRankName();
            }
        }
        return "";
    }

    bool isHODExists(const vector<Faculity>& teachers, const string& dept)
    {
        for (const Faculity& teacher : teachers) {
            if (teacher.GetDepartment() == dept && teacher.GetRank() == "HOD") {
                return true;
            }
        }
        return false;
    }
    void showfaculitydetail(vector<Faculity>& teachers)
    {
        try
        {
            int a;
            cout << "Enter the ID of the teacher you want to show: ";
            cin >> a;

            bool teacherFound = false;

            for (Faculity teacher : teachers) {
                if (teacher.GetID() == a) {
                    teacher.showteacherDetail();
                    cin.ignore();
                    teacherFound = true;
                    break;
                }
            }

            if (!teacherFound) {
                cout << "Teacher with ID " << a << " not found!!";
            }
        }
        catch (const exception& e)
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    void editteacherdata(vector<Faculity>& teachers)
    {
        try
        {
            int a;
            int option;

            cout << "Enter the ID of the teacher you want to show & edit: ";
            cin >> a;

            bool teacherFound = false;

            for (Faculity& teacher : teachers) {
                if (teacher.GetID() == a) {
                    teacher.showteacherDetail();
                    cout << "-------------------------------------------" << endl;
                    cout << "Press 1 to edit name" << endl;
                    cout << "Press 2 to edit username" << endl;
                    cout << "Press 3 to edit email" << endl;
                    cout << "Press 4 to edit password" << endl;
                    cout << "Press 5 to edit phone" << endl;
                    cout << "Press 6 to edit yearofexperience" << endl;
                    cout << "Press 7 to edit qualification" << endl;
                    cout << "Enter your choice: ";
                    cin >> option;

                    string b;
                    int c;
                    switch (option)
                    {
                    case 1:
                        cout << "Name = " << teacher.Getname() << endl;
                        cout << "Enter new = ";
                        cin.ignore();
                        getline(cin, b);
                        teacher.Setname(b);
                        break;
                    case 2:
                        cout << "Username = " << teacher.Getusername() << endl;
                        cout << "Enter new = ";
                        cin.ignore();
                        getline(cin, b);
                        teacher.Setusername(b);
                        break;
                    case 3:
                        cout << "Email = " << teacher.Getemail() << endl;
                        cout << "Enter new = ";
                        cin.ignore();
                        getline(cin, b);
                        teacher.Setemail(b);
                        break;
                    case 4:
                        cout << "Password = " << teacher.Getpassword() << endl;
                        cout << "Enter new = ";
                        cin.ignore();
                        getline(cin, b);
                        teacher.Setpassword(b);
                        break;
                    case 5:
                        cout << "Phone = " << teacher.Getphone() << endl;
                        cout << "Enter new = ";
                        cin.ignore();
                        getline(cin, b);
                        teacher.Setphone(b);
                        break;
                    case 6:
                        cout << "Year of Experience = " << teacher.Getexperience() << endl;
                        cout << "Enter new = ";
                        cin >> c;
                        teacher.Setyearofexperience(c);
                        break;
                    case 7:
                        cout << "Qualification = " << teacher.Getqualification() << endl;
                        cout << "Enter new = ";
                        cin.ignore();
                        getline(cin, b);
                        teacher.Setqualification(b);
                        break;
                    default:
                        cout << "Wrong choice!!";
                        break;
                    }

                    teacherFound = true;
                }
            }

            if (!teacherFound) {
                cout << "Teacher with ID " << a << " not found!!";
            }
        }
        catch (const exception& e)
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    void showStudentDetails(vector<Student>& students)
    {
        try
        {
            int studentID;
            cout << "Enter the ID of the student you want to show: ";
            cin >> studentID;

            if (cin.fail()) {
                throw runtime_error("Invalid input. Please enter a valid integer for student ID.");
            }

            for (Student& student : students) {
                if (student.GetID() == studentID) {
                    student.showStudentDetail();
                    return;
                }
            }

            cerr << "Student with ID " << studentID << " not found." << endl;
        }
        catch (const exception& a)
        {
            cerr << "Error: " << a.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    void showallundergraduatestudentinsamedepartment(vector<UndergraduateStudent>& students, vector<Department>& deptt)
    {
        string dept;
    again:
        cout << "Choose department from the following!!\n";
        for (Department& d : deptt) {
            cout << d.Getdeptname() << "\t";
        }
        cout << "\nEnter the department name : ";
        cin.ignore();

        getline(cin, dept);

        bool validDept = false;
        for (Department& d : deptt) {
            if (dept == d.Getdeptname()) {
                validDept = true;
                break;
            }
        }
        if (!validDept) {
            cout << "The department does not exist. Try again!" << endl;
            goto again;
        }
        else {
            cout << "\n                         UNDERGRADUATE STUDENTS IN " << dept << " DEPARTMENT                  \n\n";
            for (UndergraduateStudent& student : students) {
                if (student.GetDepartment() == dept) {
                    cout << "ID = " << student.GetID() << "\t NAME = " << student.Getname() << "\t DEPARTMENT = " << student.GetDepartment() << endl;
                }
            }
            cout << "\n--------------------------------------------------------------------------\n";
            cin.ignore();
        }
    }
    void showallpostgraduatestudentinsamedepartment(vector<PostgraduateStudent>& students, vector<Department>& deptt)
    {
        string dept;
    again:
        cout << "Choose department from the following!!\n";
        for (Department& d : deptt) {
            cout << d.Getdeptname() << "\t";
        }
        cout << "\nEnter the department name : ";
        cin.ignore();

        getline(cin, dept);

        bool validDept = false;
        for (Department& d : deptt) {
            if (dept == d.Getdeptname()) {
                validDept = true;
                break;
            }
        }
        if (!validDept) {
            cout << "The department does not exist. Try again!" << endl;
            goto again;
        }
        else {
            cout << "\n                         POSTGRADUATE STUDENTS IN " << dept << " DEPARTMENT                  \n\n";
            for (PostgraduateStudent& student : students) {
                if (student.GetDepartment() == dept) {
                    cout << "ID = " << student.GetID() << "\t NAME = " << student.Getname() << "\t DEPARTMENT = " << student.GetDepartment() << endl;
                }
            }
            cout << "\n--------------------------------------------------------------------------\n";
            cin.ignore();
        }
    }
    void showfaculityindepartment(vector<Faculity>& teachers, vector<Department>& deptt)
    {
        string dept;
        try
        {
        again:
            cout << "Choose department from the following!!\n";
            for (Department& d : deptt) {
                cout << d.Getdeptname() << "\t";
            }
            cout << "\nEnter the department name : ";

            cin.ignore();

            getline(cin, dept);

            bool validDept = false;
            for (Department& d : deptt) {
                if (dept == d.Getdeptname()) {
                    validDept = true;
                    break;
                }
            }
            if (!validDept) {
                cout << "The department does not exist. Try again!" << endl;
                goto again;
            }
            else {
                cout << "\n                         FACULTY IN " << dept << " DEPARTMENT                  \n\n";
                for (Faculity& teacher : teachers) {
                    if (teacher.GetDepartment() == dept) {
                        cout << "ID = " << teacher.GetID() << "\t\t NAME = " << teacher.Getname() << "\t\t DEPARTMENT = " << teacher.GetRank() << endl;
                    }
                }
                cout << "\n--------------------------------------------------------------------------\n";
                cin.ignore();
            }
        }
        catch (const exception& e)
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    void addundergraduatestudentmarks(vector<UndergraduateStudent>& students)
    {
        int a;
        float marks[6];
        try {
            cout << "Enter the ID of the student : ";
            cin >> a;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore();
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }

        bool studentFound = false; 

        for (UndergraduateStudent& student : students)
        {
            if (student.GetID() == a)
            {
                studentFound = true;  
                float totalMarks = 0;

                for (int i = 0; i < 6; ++i)
                {
                    do
                    {
                        cout << "Enter marks for Course " << (i + 1) << " (out of 100): ";
                        cin >> marks[i];

                        if (cin.fail() || marks[i] < 0 || marks[i] > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            totalMarks += marks[i];
                            break;
                        }
                    } while (true);
                }

                float cgpa = (totalMarks / 600) * 100 / 25;
                student.SetCGPA(cgpa);
                student.Setcourse1(marks[0]);
                student.Setcourse2(marks[1]);
                student.Setcourse3(marks[2]);
                student.Setcourse4(marks[3]);
                student.Setcourse5(marks[4]);
                student.Setcourse6(marks[5]);

                cout << "Marks added successfully for student with ID " << a << endl;
            }
        }

        if (!studentFound)
        {
            cout << "Student with ID " << a << " not found!!\n";
        }
    }
    void addPostgraduatestudentmarks(vector<PostgraduateStudent>& students)
    {
        int a;
        float marks[4];
        try {
            cout << "Enter the ID of the student : ";
            cin >> a;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore();
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }
        bool studentFound = false;
        for (PostgraduateStudent& student : students)
        {
            if (student.GetID() == a)
            {
                studentFound = true; 
                float totalMarks = 0;

                for (int i = 0; i < 4; ++i)
                {
                    do
                    {
                        cout << "Enter marks for Course " << (i + 1) << " (out of 100): ";
                        cin >> marks[i];

                        if (cin.fail() || marks[i] < 0 || marks[i] > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            totalMarks += marks[i];
                            break;
                        }
                    } while (true);
                }

                float cgpa = (totalMarks / 400) * 100 / 25;
                student.SetCGPA(cgpa);
                student.SetMastercourse1(marks[0]);
                student.SetMastercourse2(marks[1]);  
                student.SetMastercourse3(marks[2]);  
                student.SetMastercourse4(marks[3]);  

                cout << "Marks added successfully for student with ID " << a << endl;
            }
        }

        if (!studentFound)
        {
            cout << "Student with ID " << a << " not found!!\n";
        }
    }
    void editUndergraduatestudentmarks(vector<UndergraduateStudent>& students) {
        int a;
        int option;
        float marks, total, percent, gpa;
        bool studentFound = false;

        try {
            cout << "Enter the ID of the student : ";
            cin >> a;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore();
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }
        m:
        for (UndergraduateStudent& student : students) {
            if (student.GetID() == a) {
                studentFound = true;
                student.detailofcoursesandcgpa();
                cout << "-------------------------------------------" << endl;
                cout << "Press 1 to edit course 1 marks" << endl;
                cout << "Press 2 to edit course 2 marks" << endl;
                cout << "Press 3 to edit course 3 marks" << endl;
                cout << "Press 4 to edit course 4 marks" << endl;
                cout << "Press 5 to edit course 5 marks" << endl;
                cout << "Press 6 to edit course 6 marks" << endl;
                cout << "Press 0 to exit" << endl;
                cout << "Enter your choice = ";
                cin >> option;

                switch (option) {
                case 1:
                    do {
                        cout << "Enter marks for Course 1 (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else {
                            break;
                        }
                    } while (true);
                    student.Setcourse1(marks);
                    total = student.Getcourse1() + student.Getcourse2() + student.Getcourse3() + student.Getcourse4() + student.Getcourse5() + student.Getcourse6();
                    percent = total / 600;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 2:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.Setcourse2(marks);
                    total = student.Getcourse1() + student.Getcourse2() + student.Getcourse3() + student.Getcourse4() + student.Getcourse5() + student.Getcourse6();
                    percent = total / 600;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 3:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.Setcourse3(marks);
                    total = student.Getcourse1() + student.Getcourse2() + student.Getcourse3() + student.Getcourse4() + student.Getcourse5() + student.Getcourse6();
                    percent = total / 600;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 4:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.Setcourse4(marks);
                    total = student.Getcourse1() + student.Getcourse2() + student.Getcourse3() + student.Getcourse4() + student.Getcourse5() + student.Getcourse6();
                    percent = total / 600;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 5:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.Setcourse5(marks);
                    total = student.Getcourse1() + student.Getcourse2() + student.Getcourse3() + student.Getcourse4() + student.Getcourse5() + student.Getcourse6();
                    percent = total / 600;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 6:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.Setcourse6(marks);
                    total = student.Getcourse1() + student.Getcourse2() + student.Getcourse3() + student.Getcourse4() + student.Getcourse5() + student.Getcourse6();
                    percent = total / 600;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                default:
                    cout << "Wrong choice!! Try again";
                    cin.ignore();
                    system("cls");
                    goto m;
                }
            }
        }

        if (!studentFound) {
            cout << "Student with ID " << a << " not found!!\n";
            cin.ignore();
        }
    }
    void editPostgraduatestudentmarks(vector<PostgraduateStudent>& students) {
        int a;
        int option;
        float marks, total, percent, gpa;
        bool studentFound = false;

        try {
            cout << "Enter the ID of the student : ";
            cin >> a;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error("Invalid input. Please enter a valid integer ID.");
            }

            cin.ignore();
        }
        catch (const exception& e) {
            cerr << e.what() << endl;
            return;
        }
        m:
        for (PostgraduateStudent& student : students) {
            if (student.GetID() == a) {
                studentFound = true;
                student.detailoffcoursesandcgpa();
                cout << "-------------------------------------------" << endl;
                cout << "Press 1 to edit course 1 marks" << endl;
                cout << "Press 2 to edit course 2 marks" << endl;
                cout << "Press 3 to edit course 3 marks" << endl;
                cout << "Press 4 to edit course 4 marks" << endl;
                cout << "Press 0 to exit" << endl;
                cout << "Enter your choice = ";
                cin >> option;

                switch (option) {
                case 1:
                    do {
                        cout << "Enter marks for Course 1 (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else {
                            break;
                        }
                    } while (true);
                    student.SetMastercourse1(marks);
                    total = student.GetMastercourse1() + student.GetMastercourse2() + student.GetMastercourse3() + student.GetMastercourse4();
                    percent = total / 400;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 2:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.SetMastercourse2(marks);
                    total = student.GetMastercourse1() + student.GetMastercourse2() + student.GetMastercourse3() + student.GetMastercourse4();
                    percent = total / 400;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 3:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.SetMastercourse3(marks);
                    total = student.GetMastercourse1() + student.GetMastercourse2() + student.GetMastercourse3() + student.GetMastercourse4();
                    percent = total / 400;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;
                case 4:
                    do
                    {
                        cout << "Enter marks for Course  (out of 100): ";
                        cin >> marks;

                        if (cin.fail() || marks < 0 || marks > 100)
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cerr << "Invalid input. Please enter a valid mark between 0 and 100." << endl;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    student.SetMastercourse4(marks);
                    total = student.GetMastercourse1() + student.GetMastercourse2() + student.GetMastercourse3() + student.GetMastercourse4();
                    percent = total / 400;
                    gpa = percent / 25;
                    student.SetCGPA(gpa);
                    break;

                default:
                    cout << "Wrong choice!! Try again";
                    cin.ignore();
                    system("cls");
                    goto m;
                }
            }
        }

        if (!studentFound) {
            cout << "Student with ID " << a << " not found!!\n";
            cin.ignore();
        }
    }

};
void storeundergraduatestudentdata(vector<UndergraduateStudent>&students,const string&filename)
{
    ofstream file(filename,ios::trunc);
    if(file.is_open())
    {
        for(UndergraduateStudent student : students)
        {
            file << student.GetID() << ",";
            file << student.Getname()<< ",";
            file << student.Getusername() << ",";
            file << student.Getemail() << ",";
            file << student.Getpassword() << ",";
            file << student.Getphone() << ",";
            file << student.GetDOB() << ",";
            file << student.Getaddress() << ",";
            file << student.GetDepartment() << ",";
            file << student.GetCGPA() << ",";
            file << student.Getfees() << ",";
            file << student.Getinternship() << ",";
            file << student.Getcourse1() << ",";
            file << student.Getcourse2() << ",";
            file << student.Getcourse3() << ",";
            file << student.Getcourse4() << ",";
            file << student.Getcourse5() << ",";
            file << student.Getcourse6() << ","<<endl;
        }
        file.close();
    }
    else
    {
        cout << "Error opening file : " << filename << endl;
        cin.ignore();
    }
}

void storepostgraduatestudentdata(vector<PostgraduateStudent>& students, const string& filename)
{
    ofstream file(filename, ios::trunc);
    if (file.is_open())
    {
        for (PostgraduateStudent student : students)
        {
            file << student.GetID() << ",";
            file << student.Getname() << ",";
            file << student.Getusername() << ",";
            file << student.Getemail() << ",";
            file << student.Getpassword() << ",";
            file << student.Getphone() << ",";
            file << student.GetDOB() << ",";
            file << student.Getaddress() << ",";
            file << student.GetDepartment() << ",";
            file << student.GetCGPA() << ",";
            file << student.Getfees() << ",";
            file << student.Getthesis() << ",";
            file << student.GetMastercourse1() << ",";
            file << student.GetMastercourse2() << ",";
            file << student.GetMastercourse3() << ",";
            file << student.GetMastercourse4() << "," << endl;
        }
        file.close();
    }
    else
    {
        cout << "Error opening file : " << filename << endl;
        cin.ignore();
    }
}

void storefacultydata(vector<Faculity>& teachers, const string& filename)
{
    ofstream file(filename, ios::trunc);
    if (file.is_open())
    {
        for (Faculity teacher : teachers)
        {
            file << teacher.GetID() << ",";
            file << teacher.Getname() << ",";
            file << teacher.Getusername() << ",";
            file << teacher.Getemail() << ",";
            file << teacher.Getpassword() << ",";
            file << teacher.Getphone() << ",";
            file << teacher.Getexperience() << ",";
            file << teacher.Getqualification() << ",";
            file << teacher.GetRank() << ",";
            file << teacher.GetDepartment() << ",";
            file << teacher.Getsalary() << ","<<endl;
            
        }
        file.close();
    }
    else
    {
        cout << "Error opening file : " << filename << endl;
        cin.ignore();
    }
}
void readundergraduatestudentdata(vector<UndergraduateStudent>&students,const string&filename)
{
    ifstream file(filename);
    if(file.is_open())
    {
        string line;
        while(getline(file,line))
        {

            int id;
            string name, username, email, password, phone, dob, address, department, internship;
            float cgpa, fees, course1, course2, course3, course4, course5, course6;
        	size_t pos = 0;
        	string temp;
        	int count = 0;
        	while((pos =line.find(','))!=string::npos)
            {
                temp = line.substr(0, pos);
                switch(count)
                {
        		case 0:
                    id = stoi(temp);
                    break;
        		case 1:
                    name = temp;
                    break;

                case 2:
                    username = temp;
                    break;

                case 3:
                    email = temp;
                    break;

                case 4:
                    password = temp;
                    break;

                case 5:
                    phone = temp;
                    break;

                case 6:
                    dob = temp;
                    break;

                case 7:
                    address = temp;
                    break;
                case 8:
                    department = temp;
                    break;
                case 9:
                    cgpa = stof(temp);
                    break;

                case 10:
                    fees = stof(temp);
                    break;
                case 11:
                    internship = temp;
                    break;

                case 12:
                    course1 = stof(temp);
                    break;

                case 13:
                    course2 = stof(temp);
                    break;

                case 14:
                    course3 = stof(temp);
                    break;

                case 15:
                    course4 = stof(temp);
                    break;

                case 16:
                    course5 = stof(temp);
                    break;

                case 17:
                    course6 = stof(temp);
                    break;
                }
                line.erase(0, pos + 1);
                count++;
            }
            students.push_back(UndergraduateStudent(id,name,username,email,password,
                phone,dob,address,department,cgpa,fees,internship,course1,course2,
                course3,course4,course5,course6));
        }
        file.close();
    }
    else
    {
	    cout<<"File not found with name "<<filename<<endl;
    }

}
void readpostgraduatestudentdata(vector<PostgraduateStudent>& students, const string& filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {

            int id;
            string name, username, email, password, phone, dob, address, department,thesis;
            float cgpa, fees, course1, course2, course3, course4;
            size_t pos = 0;
            string temp;
            int count = 0;
            while ((pos = line.find(',')) != string::npos)
            {
                temp = line.substr(0, pos);
                switch (count)
                {
                case 0:
                    id = stoi(temp);
                    break;
                case 1:
                    name = temp;
                    break;

                case 2:
                    username = temp;
                    break;

                case 3:
                    email = temp;
                    break;

                case 4:
                    password = temp;
                    break;

                case 5:
                    phone = temp;
                    break;

                case 6:
                    dob = temp;
                    break;

                case 7:
                    address = temp;
                    break;
                case 8:
                    department = temp;
                    break;
                case 9:
                    cgpa = stof(temp);
                    break;

                case 10:
                    fees = stof(temp);
                    break;
                case 11:
                    thesis = temp;
                    break;

                case 12:
                    course1 = stof(temp);
                    break;

                case 13:
                    course2 = stof(temp);
                    break;

                case 14:
                    course3 = stof(temp);
                    break;

                case 15:
                    course4 = stof(temp);
                    break;
                }
                line.erase(0, pos + 1);
                count++;
            }
            students.push_back(PostgraduateStudent(id, name, username, email, password,
                phone, dob, address, department, cgpa, fees, thesis, course1, course2,
                course3, course4));
        }
        file.close();
    }
    else
    {
        cout << "File not found with name " << filename << endl;
    }

}
void readFacultydata(vector<Faculity>& teachers, const string& filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {

            int id,exp;
            string name, username, email, password, phone, qual,rank, department;
            float salary;
            size_t pos = 0;
            string temp;
            int count = 0;
            while ((pos = line.find(',')) != string::npos)
            {
                temp = line.substr(0, pos);
                switch (count)
                {
                case 0:
                    id = stoi(temp);
                    break;
                case 1:
                    name = temp;
                    break;

                case 2:
                    username = temp;
                    break;

                case 3:
                    email = temp;
                    break;

                case 4:
                    password = temp;
                    break;

                case 5:
                    phone = temp;
                    break;

                case 6:
                    exp = stoi(temp);
                    break;

                case 7:
                    qual = temp;
                    break;

                case 8:
                    rank = temp;
                    break;
                case 9:
                    department = temp;
                    break;
                case 10:
                    salary = stof(temp);
                    break;
                }
                line.erase(0, pos + 1);
                count++;
            }
            teachers.push_back(Faculity(id, name, username, email, password,
                phone, exp, qual, rank,department, salary));
        }
        file.close();
    }
    else
    {
        cout << "File not found with name " << filename << endl;
    }

}

void stuform()
{
    system("cls");
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "------------------               S T U D E N T  - P O R T A L                   ---------------- \n";
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << endl;
    cout << "PRESS 1----------------SEE OWN DETAIL\n";
    cout << "PRESS 2----------------CHANGE OWN EMAIL/PASSWORD\n";
    cout << "PRESS 0----------------EXIT\n";
    cout << "Enter your choice: ";
}
void Mainpage()
{
    system("cls");
    Admin admin;
    vector<UndergraduateStudent> undergraduatestudents;
    vector<PostgraduateStudent> postgraduatestudents;
    vector<Faculity> teachers;

    readpostgraduatestudentdata(postgraduatestudents, "PS.txt");
    readundergraduatestudentdata(undergraduatestudents, "US.txt");
   readFacultydata(teachers, "F.txt");
    vector<Department> dept{ Department("CS"),
                            Department("IT"),
                            Department("AI"),
                            Department("BBA"),
                            Department("LLB") };
    vector<Rank> rank{ Rank("Asistant Professor"),
                       Rank("Professor"),
                       Rank("Senior Professor"),
                       Rank("HOD") };
    vector<Qualification> qualification{ Qualification("Bachelors"),
                                        Qualification("Master"),
                                        Qualification("PHD") };
    AccountOffice account;
    string a, b;
    string studentUsername, studentPassword;
s:
    try
    {
        system("cls");
        int choice;
        cout << "------------------------------------------------------------------------------------------------\n";
        cout << "------------------------------------------------------------------------------------------------\n";
        cout << "------------------               UNIVERSITY MANAGEMENT SYSTEM                  ---------------- \n";
        cout << "------------------------------------------------------------------------------------------------\n";
        cout << "------------------------------------------------------------------------------------------------\n";
        cout << endl;
        cout << "PRESS 1----------------ADMIN LOGIN\n";
        cout << "PRESS 2----------------FACULTY LOGIN\n";
        cout << "PRESS 3----------------STUDENT LOGIN \n";
        cout << "PRESS 4----------------ACCOUNT OFFICE LOGIN\n";
        cout << "PRESS 0----------------EXIT\n";
        cout << "Enter you choice = ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw runtime_error("Invalid input. Please enter a valid integer choice.");
        }
        switch (choice)
        {
        case 1:
            system("cls");
            cin.ignore();

            cout << "Enter the username = ";
            getline(cin, a);
        p:
            if (a == admin.getloginusername())
            {
                cout << "Enter the password = ";
                getline(cin, b);
                if (b != admin.getloginpassword())
                {
                    cout << "Password is incorrect try again = ";
                    system("cls");
                    goto p;
                }
                else
                {
                    while (true)
                    {
                    pp:
                        system("cls");
                        int choice;
                        cout << "------------------------------------------------------------------------------------------------\n";
                        cout << "------------------------------------------------------------------------------------------------\n";
                        cout << "------------------                 A D M I N - P O R T A L                     ---------------- \n";
                        cout << "------------------------------------------------------------------------------------------------\n";
                        cout << "------------------------------------------------------------------------------------------------\n";
                        cout << endl;
                        cout << "PRESS 1----------------ADD STUDENT\n";
                        cout << "PRESS 2----------------ADD FACULTY\n";
                        cout << "PRESS 3----------------EDIT STUDENT\n";
                        cout << "PRESS 4----------------EDIT FACULTY\n";
                        cout << "PRESS 5----------------SHOW ALL STUDENT\n";
                        cout << "PRESS 6----------------SHOW STUDENT DETAIL\n";
                        cout << "PRESS 7----------------SHOW FACULTY DETAIL\n";
                        cout << "PRESS 8----------------SHOW ALL STUDENT IN DEPARTMENT\n";
                        cout << "PRESS 9----------------SHOW ALL FACULTY IN DEPARTMENT\n";
                        cout << "PRESS 0----------------EXIT\n";
                        cout << "Enter your choice = ";
                        cin >> choice;

                        switch (choice)
                        {
                        case 1:
                        m:
                            system("cls");
                            int c;

                            try {
                                cout << "PRESS 1 TO ADD UNDERGRADUATE STUDENT " << endl;
                                cout << "PRESS 2 TO ADD POSTGRADUATE STUDENT " << endl;
                                cout << "PRESS 0----------------EXIT\n";
                                cout << "Enter your choice = ";
                                cin >> c;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                    throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                    cin.ignore();
                                }
                            }
                            catch (const exception& e) {
                                cerr << e.what() << endl;
                                cin.ignore(1);
                                goto m;
                            }
                            switch (c) {
                            case 1:
                                system("cls");
                                admin.addUndergraduateStudent(undergraduatestudents, dept);

                                storeundergraduatestudentdata(undergraduatestudents, "US.txt");
                                cout << "\nStudent added successfully!\n";
                                break;
                            case 2:
                                system("cls");
                                admin.addPostgraduateStudent(postgraduatestudents, dept);

                                storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                cout << "\nStudent added successfully!\n";
                                break;
                            case 0:
                                goto pp;
                            default:
                                cout << "Invalid input. Try again." << endl;
                                goto m;
                            }
                            break;

                        case 2:
                            system("cls");
                            admin.addFaculitymember(teachers, dept, rank, qualification);

                            storefacultydata(teachers, "F.txt");
                            cin.ignore();
                            cout << "\nFaculty member added successfully!\n";
                            break;
                        case 3:
                        mmmm:
                            system("cls");
                            int ch;
                            try {
                                cout << "PRESS 1 TO EDIT UNDERGRADUATE STUDENT " << endl;
                                cout << "PRESS 2 TO EDIT POSTGRADUATE STUDENT " << endl;
                                cout << "PRESS 0----------------EXIT\n";
                                cout << "Enter your choice = ";
                                cin >> ch;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                    throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                }
                            }
                            catch (const exception& e) {
                                cerr << e.what() << endl;
                                goto mmmm;
                            }
                            switch (ch) {
                            case 1:
                                system("cls");
                                admin.editUndergraduatestudentdata(undergraduatestudents);

                                storeundergraduatestudentdata(undergraduatestudents, "US.txt");
                                cout << "\nStudent edited successfully!\n";
                                break;
                            case 2:
                                system("cls");
                                admin.editPostgraduatestudentdata(postgraduatestudents);

                                storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                cout << "\nStudent edited successfully!\n";
                                break;
                            case 0:
                                system("cls");
                                goto pp;
                            default:
                                cout << "Invalid input. Try again." << endl;
                                goto mmmm;
                            }
                            break;

                        case 4:
                            system("cls");
                            admin.editteacherdata(teachers);

                            storefacultydata(teachers, "F.txt");
                            break;
                        case 5:
                        mmmmm:
                            cin.clear();
                            system("cls");
                            int cc;
                            try {
                                cout << "PRESS 1 TO SEE ALL UNDERGRADUATE STUDENTS " << endl;
                                cout << "PRESS 2 TO SEE ALL POSTGRADUATE STUDENTS " << endl;
                                cout << "PRESS 3 TO SEE ALL STUDENTS FOR BOTH " << endl;
                                cout << "PRESS 0----------------EXIT\n";
                                cout << "Enter your choice = ";
                                cin >> cc;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                    throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                }
                            }
                            catch (const exception& e) {
                                cerr << e.what() << endl;
                                goto mmmmm;
                            }
                            switch (cc) {
                            case 1:
                                system("cls");
                                admin.showallUndergraduatestudent(undergraduatestudents);
                                cin.ignore();
                                break;
                            case 2:
                                system("cls");
                                admin.showallPostgraduatestudent(postgraduatestudents);
                                cin.ignore();
                                break;
                            case 3:
                                system("cls");
                                admin.showallUndergraduatestudent(undergraduatestudents);
                                admin.showallPostgraduatestudent(postgraduatestudents);
                                break;
                            case 0:
                                system("cls");
                                goto pp;
                            default:
                                cout << "Invalid input. Try again." << endl;
                                goto mmmmm;
                            }
                            break;

                        case 6:
                        mmmmp:
                            system("cls");
                            int ccc;
                            try {
                                cout << "PRESS 1 TO SEE FULL UNDERGRADUATE STUDENTS DETAIL" << endl;
                                cout << "PRESS 2 TO SEE FULL POSTGRADUATE STUDENTS DETAIL" << endl;
                                cout << "PRESS 0----------------EXIT\n";
                                cout << "Enter your choice = ";
                                cin >> ccc;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                    throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                }
                            }
                            catch (const exception& e) {
                                cerr << e.what() << endl;
                                goto mmmmp;
                            }
                            switch (ccc) {  
                            case 1:
                                system("cls");
                                admin.showfullUndergraduatestudentdata(undergraduatestudents);
                                cin.ignore();
                                break;
                            case 2:
                                system("cls");
                                admin.showfullPostgraduatestudentdata(postgraduatestudents);
                                cin.ignore();
                                break;
                            case 0:
                                system("cls");
                                goto pp;
                            default:
                                cout << "Invalid input. Try again." << endl;
                                goto mmmmp;
                            }
                            break;
                        case 7:
                            system("cls");
                            admin.showfaculitydetail(teachers);
                            cin.ignore();
                            break;
                        case 8:
                            system("cls");
                        mmmmpp:
                            system("cls");
                            int cccc;
                            try {
                                cout << "PRESS 1 TO SEE ALL UNDERGRADUATE STUDENTS IN DEPARTMENT" << endl;
                                cout << "PRESS 2 TO SEE ALL POSTGRADUATE STUDENTS IN DEPARTMENT" << endl;
                                cout << "PRESS 0----------------EXIT\n";
                                cout << "Enter your choice = ";
                                cin >> cccc;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                    throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                }
                            }
                            catch (const exception& e) {
                                cerr << e.what() << endl;
                                goto mmmmpp;
                            }
                            switch (cccc) {  
                            case 1:
                                system("cls");
                                admin.showallundergraduatestudentinsamedepartment(undergraduatestudents, dept);
                                break;
                            case 2:
                                system("cls");
                                admin.showallpostgraduatestudentinsamedepartment(postgraduatestudents, dept);
                                break;
                            case 0:
                                system("cls");
                                goto pp;
                            default:
                                cout << "Invalid input. Try again." << endl;
                                goto mmmmpp;
                            }
                            break;
                        case 9:
                            system("cls");
                            admin.showfaculityindepartment(teachers, dept);
                            cin.ignore();
                            break;

                        case 0:
                            goto s;
                            break;
                        default:
                            cout << "Invalid choice!!";
                            break;
                        }
                    }
                }
            }
            else
            {
                cout << "Username entered is incorrect try again!!";
                goto s;
            };

            break;
        break;
            case 2:
            {
                system("cls");
                string enteredEmail, enteredPassword;
                bool facultyFound = false;

                cout << "Enter your email: ";
                cin.ignore();
                getline(cin, enteredEmail);

                for (Faculity f : teachers) {
                    if (enteredEmail == f.Getemail()) {
                        cout << "Enter your password: ";
                        getline(cin, enteredPassword);

                        if (enteredPassword == f.Getpassword()) {
                            facultyFound = true;

                            while (facultyFound)
                            {
                                fs:
                                system("cls");
                                int choice;
                                cout << "------------------------------------------------------------------------------------------------\n";
                                cout << "------------------------------------------------------------------------------------------------\n";
                                cout << "------------------               F A C U L T Y - P O R T A L                   ---------------- \n";
                                cout << "------------------------------------------------------------------------------------------------\n";
                                cout << "------------------------------------------------------------------------------------------------\n";
                                cout << endl;
                                cout << "PRESS 1----------------SEE OWN DETAIL\n";
                                cout << "PRESS 2----------------ADD STUDENT MARKS\n";
                                cout << "PRESS 3----------------EDIT STUDENT MARKS\n";
                                cout << "PRESS 4----------------CHANGE OWN EMAIL/PASSWORD\n";
                                cout << "PRESS 0----------------EXIT\n";
                                cout << "Enter your choice: ";
                                cin >> choice;

                                switch (choice) {
                                case 1:
                                    system("cls");
                                    f.showteacherDetail();
                                    cin.ignore();
                                    break;
                                case 2:
                                {
                                ll:
                                    system("cls");
                                    int c;
                                    try {
                                        cout << "PRESS 1 TO ADD UNDERGRADUATE STUDENT " << endl;
                                        cout << "PRESS 2 TO ADD POSTGRADUATE STUDENT " << endl;
                                        cout << "PRESS 0----------------EXIT\n";
                                        cout << "Enter your choice = ";
                                        cin >> c;
                                        if (cin.fail()) {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                        }
                                    }
                                    catch (const exception& e) {
                                        cerr << e.what() << endl;
                                        cin.ignore(1);
                                        break;
                                    }

                                    switch (c) {
                                    case 1:
                                        system("cls");
                                        admin.addundergraduatestudentmarks(undergraduatestudents);

                                        storeundergraduatestudentdata(undergraduatestudents, "US.txt");
                                        cout << "\nStudent Marks added successfully!\n";
                                        cin.ignore();
                                        break;
                                    case 2:
                                        system("cls");
                                        admin.addPostgraduatestudentmarks(postgraduatestudents);

                                        storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                        cout << "\nStudent Marks added successfully!\n";
                                        cin.ignore();
                                        break;
                                    case 0:
                                        goto fs;
                                    default:
                                        cout << "Invalid input. Try again." << endl;
                                        goto ll;
                                    }
                                }
                                break;
                                case 3:
                                {
                                jj:
                                    system("cls");
                                    int hc;
                                    try {
                                        cout << "PRESS 1 TO EDIT UNDERGRADUATE STUDENT " << endl;
                                        cout << "PRESS 2 TO EDIT POSTGRADUATE STUDENT " << endl;
                                        cout << "PRESS 0----------------EXIT\n";
                                        cout << "Enter your choice = ";
                                        cin >> hc;
                                        if (cin.fail()) {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                        }
                                    }
                                    catch (const exception& e) {
                                        cerr << e.what() << endl;
                                        cin.ignore(1);
                                        break;
                                    }

                                    switch (hc) {
                                    case 1:
                                        system("cls");
                                        admin.editUndergraduatestudentmarks(undergraduatestudents);
                                        cout << "\nStudent Marks EDITED successfully!\n";

                                        storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                        cin.ignore();
                                        break;
                                    case 2:
                                        system("cls");
                                        admin.editPostgraduatestudentmarks(postgraduatestudents);

                                        storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                        cout << "\nStudent Marks EDITED successfully!\n";
                                        cin.ignore();
                                        break;
                                    case 0:
                                        goto fs;
                                    default:
                                        cout << "Invalid input. Try again." << endl;
                                        goto jj;
                                        break;
                                    }
                                }
                                break;
                                case 4:
                                {
                                jjj:
                                    string eml, pss;
                                    system("cls");
                                    int hcC;
                                    cout << "Your email = " << f.Getemail();
                                    cout << "\nYour password = " << f.Getpassword()<<"\n\n\n";
                                    try {
                                        cout << "PRESS 1 CHANGE EMAIL " << endl;
                                        cout << "PRESS 2 CHANGE PASSWORD " << endl;
                                        cout << "PRESS 0----------------EXIT\n";
                                        cout << "Enter your choice = ";
                                        cin >> hcC;
                                        if (cin.fail()) {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            throw runtime_error("Invalid input. Please enter a valid integer choice.");
                                        }
                                    }
                                    catch (const exception& e) {
                                        cerr << e.what() << endl;
                                        cin.ignore(1);
                                        break;
                                    }

                                    switch (hcC) {
                                    case 1:
                                        system("cls");
                                        cout << "Enter new email = ";
                                        getline(cin, eml);
                                        f.Setemail(eml);
                                        cout << "\nEmail changed successfully!\n";

                                        storefacultydata(teachers, "F.txt");
                                        cin.ignore();
                                        break;
                                    case 2:
                                        system("cls");
                                        cout << "Enter new password = ";
                                        getline(cin, pss);
                                        f.Setpassword(pss);

                                        storefacultydata(teachers, "F.txt");
                                        cout << "\nPassword changed successfully!\n";
                                        cin.ignore();
                                        break;
                                    case 0:
                                        goto pp;
                                    default:
                                        cout << "Invalid input. Try again." << endl;
                                        goto jjj;
                                        break;
                                    }
                                }

                                break;
                                case 0:
                                    facultyFound = false;
                                    goto s;
                                default:
                                    cout << "Invalid choice!!";
                                    break;
                                }
                            }
                        }
                        break;
                    }
                }

                if (!facultyFound) {
                    cout << "Faculty not found. Invalid email or password." << endl;
                }
            }

        case 3:
        {
            try
            {
            here:
                system("cls");
                int upchoice;
                cout << "PRESS 1 FOR UNDERGRADUATE STUDENT\n";
                cout << "PRESS 2 FOR POSTGRADUATE STUDENT";
                cout << "\nEnter your choice = ";
                if (!(cin >> upchoice)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw runtime_error("Invalid input. Please enter a valid integer choice.");
                }

                switch (upchoice)
                {
                case 1:
                {
                    system("cls");
                    bool USPASS = false;
                    string USemail, USpassword;

                    cout << "Enter your email = ";
                    cin.ignore();
                    getline(cin, USemail);

                    for (UndergraduateStudent& us : undergraduatestudents)
                    {
                        if (USemail == us.Getemail())
                        {
                            cout << "Enter your password = ";
                            getline(cin, USpassword);

                            if (USpassword == us.Getpassword())
                            {
                                USPASS = true;
                                while (USPASS)
                                {
                                    int Uchoice;
                                    stuform();
                                    cin >> Uchoice;
                                    switch (Uchoice)
                                    {
                                    case 1:
                                        system("cls");
                                        us.showfulldetail();
                                        cin.ignore();
                                        break;
                                    case 2:
                                    {
                                        system("cls");
                                    hh:
                                        string eeeml, pppss;
                                        int hcC;
                                        cout << "Your email = " << us.Getemail();
                                        cout << "\nYour password = " << us.Getpassword();
                                        cout << "\nPRESS 1 CHANGE EMAIL " << endl;
                                        cout << "PRESS 2 CHANGE PASSWORD " << endl;
                                        cout << "PRESS 0----------------EXIT\n";
                                        cout << "Enter your choice = ";
                                        cin >> hcC;

                                        switch (hcC)
                                        {
                                        case 1:
                                            cout << "Enter new email = ";
                                            cin.ignore();
                                            getline(cin, eeeml);
                                            us.Setemail(eeeml);
                                            cout << "\nEmail changed successfully!\n";

                                            storeundergraduatestudentdata(undergraduatestudents, "US.txt");
                                            break;
                                        case 2:
                                            cout << "Enter new password = ";
                                            cin.ignore();
                                            getline(cin, pppss);
                                            us.Setpassword(pppss);
                                            cout << "\nPassword changed successfully!\n";

                                            storeundergraduatestudentdata(undergraduatestudents, "US.txt");
                                            break;
                                        case 0:
                                            USPASS = false;
                                            break;
                                        default:
                                            cout << "Invalid input. Try again." << endl;
                                            goto hh;
                                        }
                                        break;
                                    }
                                    case 0:
                                        USPASS = false;
                                        goto s;
                                        break;
                                    default:
                                        break;
                                    }
                                }
                            }
                            else
                            {
                                cout << "Invalid password!!\n";
                            }
                        }
                    }

                    if (!USPASS)
                    {
                        cout << "Invalid email!!\n";
                    }

                    break;
                }
                case 2:
                {
                    system("cls");
                    bool PSPASS = false;
                    string PSemail, PSpassword;

                    cout << "Enter your email = ";
                    cin.ignore();
                    getline(cin, PSemail);

                    for (PostgraduateStudent& ps : postgraduatestudents)
                    {
                        if (PSemail == ps.Getemail())
                        {
                            cout << "Enter your password = ";
                            getline(cin, PSpassword);

                            if (PSpassword == ps.Getpassword())
                            {
                                PSPASS = true;
                                while (true)
                                {
                                    int Pchoice;
                                    stuform();
                                    cin >> Pchoice;

                                    switch (Pchoice)
                                    {
                                    case 1:
                                        system("cls");
                                        ps.showfulldetail();
                                        cin.ignore();
                                        break;
                                    case 2:
                                    {
                                        string eeeeml, ppppss;
                                        int hcCc;
                                        cout << "Your email = " << ps.Getemail();
                                        cout << "\nYour password = " << ps.Getpassword();
                                        cout << "\nPRESS 1 CHANGE EMAIL " << endl;
                                        cout << "PRESS 2 CHANGE PASSWORD " << endl;
                                        cout << "PRESS 0----------------EXIT\n";
                                        cout << "Enter your choice = ";
                                        cin >> hcCc;

                                        switch (hcCc)
                                        {
                                        case 1:
                                            cout << "Enter new email = ";
                                            cin.ignore();
                                            getline(cin, eeeeml);
                                            ps.Setemail(eeeeml);
                                            cout << "\nEmail changed successfully!\n";

                                            storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                            break;
                                        case 2:
                                            cout << "Enter new password = ";
                                            cin.ignore();
                                            getline(cin, ppppss);
                                            ps.Setpassword(ppppss);
                                            cout << "\nPassword changed successfully!\n";

                                            storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                                            break;
                                        case 0:
                                            PSPASS = false;
                                            break;
                                        default:
                                            cout << "Invalid input. Try again." << endl;
                                            break;
                                        }
                                        break;
                                    }
                                    case 0:
                                        PSPASS = false;
                                        goto s;
                                        break;
                                    default:
                                        break;
                                    }
                                }
                            }
                            else
                            {
                                cout << "Invalid password!!\n";
                            }
                        }
                    }

                    if (!PSPASS)
                    {
                        cout << "Invalid email!!\n";
                    }

                    break;
                }
                case 0:
                    break;
                default:
                    break;
                }
            }
            catch (const exception& e)
            {
                cerr << "Error: " << e.what() << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            }
            goto s;
        }

        case 4:
        {
            string accountusername, accountpassword;
            system("cls");
            cin.ignore();
            cout << "Enter the username = ";
            getline(cin, accountusername);

        pppap:
            if (accountusername == account.GetUsername())
            {
                cout << "Enter the password = ";
                getline(cin, accountpassword);

                if (accountpassword == account.Getpassword())
                {
                    bool exist = true;
                    int ca;
                    while (exist)
                    {
                        system("cls");
                        cout << "--------------------------------------------------------------------------------------------------\n";
                        cout << "--------------------------------------------------------------------------------------------------\n";
                        cout << "------------------               A C C O U N T A N T  - P O R T A L              ---------------- \n";
                        cout << "--------------------------------------------------------------------------------------------------\n";
                        cout << "--------------------------------------------------------------------------------------------------\n";
                        cout << endl;
                        cout << "PRESS 1----------------ADD UNDERGRADUATE STUDENT FEE\n";
                        cout << "PRESS 2----------------ADD POSTGRADUATE STUDENT FEE\n";
                        cout << "PRESS 3----------------ADD FACULTY SALARY\n";
                        cout << "PRESS 0----------------EXIT\n";
                        cout << "Enter your choice: ";
                        cin >> ca;

                        switch (ca)
                        {
                        case 1:
                            system("cls");
                            account.addundergraduatestudentfees(undergraduatestudents);

                            storeundergraduatestudentdata(undergraduatestudents, "US.txt");
                            cin.ignore();
                            break;
                        case 2:
                            system("cls");
                            account.addpostgraduatestudentfees(postgraduatestudents);
                            storepostgraduatestudentdata(postgraduatestudents, "PS.txt");
                            cin.ignore();
                            break;
                        case 3:
                            system("cls");
                            account.AddFacultySalary(teachers);

                            storefacultydata(teachers, "F.txt");
                            cin.ignore();
                            break;
                        case 0:
                            exist = false;
                            goto p;
                        default:
                            cout << "Invalid input!!";
                            cin.ignore();
                            break;
                        }
                    }
                }
                else
                {
                    cout << "Password is incorrect. Try again = ";
                    system("cls");
                    goto pppap;
                }
            }
        }
        break;
        case 0:
            return;
        default:
            cout << "Invalid choice!!";
            break;
        }
    }
    catch (const exception& e)
    {
        cerr << "Error: " << e.what() << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    goto s;
    
}
int main() {
    Mainpage();
}
