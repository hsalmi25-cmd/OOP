#include <algorithm>
#include <iostream>
#include "student.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
    Student s("Jussi", 22);
    s.printStudentInfo();

    int selection =0;
    string sname;
    int ika;
    vector<Student>studentList;
    vector<Student>::iterator it = studentList.begin();

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:

            cout << "Valinta 0" << endl;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Give student name?" << endl;
            cin >> sname;

            cout << "Give student age?" << endl;
            cin >> ika;

            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(sname,ika);
            cout << "Lisattiin: " << sname << " " << ika << endl;
            break;

        case 1:

            cout << "Valinta 1" << endl;
            // Tulosta Studentlist vektorin kaikkien opiskelijoiden nimet.
            cout << "Tulostetaan lista" << endl;
            for (auto &s: studentList) {
                cout << s.getName() << ": " << s.getAge() << endl;
            }
            break;

        case 2:

            cout << "Valinta 2" << endl;
            cout << "Jarjestetaan aakkosjarjestykseen" << endl;
            // Järjestä StudentList vektorin Student oliot nimen mukaan algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getName() < b.getName();
            });

            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (auto &s: studentList){
                s.printStudentInfo();
            }
            break;

        case 3:

            cout << "Valinta 3" << endl;
            cout << "Jarjestetaan ikajarjestykseen" << endl;
            // Järjestä StudentList vektorin Student oliot iän mukaan algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getAge() < b.getAge();
            });

            // ja tulosta printStudentInfo() funktion avulla järjestetyt opiskelijat
            for (auto &s: studentList){
                s.printStudentInfo();
            }
            break;

        case 4:

            cout << "Valinta 4" << endl;
            // Kysy käyttäjältä opiskelijan nimi
            cout << "Give student name?" << endl;
            cin >> sname;
            // Etsi studentListan opiskelijoista algoritmikirjaston find_if funktion avulla löytyykö käyttäjän antamaa nimeä listalta.
            it = find_if(studentList.begin(), studentList.end(), [sname](const Student &a){
                return a.getName() == sname;
            });

            //Jos löytyy, niin tulosta opiskelijan tiedot.
            if ( it != studentList.end()){
                cout << "Loytyi!" << endl;
                it->printStudentInfo();
            }else{
                cout << "Ei loytynyt " << sname << "!!" << endl;
            }
            break;

        default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
        }

    }while(selection < 5);

    return 0;
}


