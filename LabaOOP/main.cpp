#include "Group.h"

int main() {
    setlocale(LC_ALL, "rus");
    Student* Alesya = new Student("Alesya", "Kuznecova", "Gennadievna", 22, 1, { 5,4,4,5,3,2,5,5,4 });
    Student* Pavel = new Student("Pavel", "Kuznecov", "Aleksandrovich", 20, 2, { 5,5,4,2,3,5,4 });
    Student* Ivan = new Student("Ivan", "Ivanov", "Ivanovich", 18, 3, { 3,2,2,4,4 });
    Student* Vasya = new Student("Vasya", "Ivanov", "Ivanovich", 18, 4, { 5,5,5,5 });

    Pavel->PrintInformation();
    Alesya->PrintInformation();

    Group* Philosophy = new Group(5611,24, 3.0);
    Group* Physics = new Group(7091,1, 4.0);

    Philosophy->AddStudent(Alesya);
    Physics->AddStudent(Ivan);
    Physics->AddStudent(Pavel);
    Physics->AddStudent(Ivan);
    Philosophy->AddStudent(Ivan);

    Pavel->PrintInformation();
    Alesya->PrintInformation();

    Physics->PrintGroupInformation();
    Philosophy->AddStudent(Vasya);
    Philosophy->PrintGroupInformation();
    Philosophy->SortWithAverageScore();
    Philosophy->PrintGroupInformation();

    delete Philosophy, Physics;
    delete Alesya, Pavel, Ivan, Vasya;

    system("pause");
    return 0;
}

 