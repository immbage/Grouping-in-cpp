#include <iostream>
#include <cstdlib>
using namespace std;

struct students

{
    string name;
    string id;
    double gpa;
    int age;
    struct students *next;
};

int main()
{
    struct students *head;         // head
    struct students *one = NULL;   // current
    struct students *two = NULL;   // prev
    struct students *three = NULL; // S
    struct students *extra = NULL; // extra

    // allocate nodes
    one = new students();
    two = new students();
    three = new students();
    extra = new students();

    // 1st students
    one->name = "Immanuel";
    one->age = 19;
    one->gpa = 3.00;
    one->id = "001202100031";

    // 2nd student
    two->name = "Jane";
    two->age = 19;
    two->gpa = 4.0;
    two->id = "001202100021";

    // extra
    extra->name = "Fulan";
    extra->age = 20;
    extra->id = "001202100024";
    extra->gpa = 2.25;

    // logic for inputing new student
    cout << "Enter new student name: ";
    cin >> three->name;
    cout << endl;
    cout << "Enter new student age: ";
    cin >> three->age;
    cout << endl;
    cout << "Enter new student ID: ";
    cin >> three->id;
    cout << endl;
    cout << "Enter new student GPA: ";
    cin >> three->gpa;
    cout << endl;
    cout << "Thank You!!";

    // connect nodes
    two->next = one; // head
    one->next = extra;
    extra->next = three;
    three->next = NULL;

    // print linked list ordered

    head = two;
    int temp;
    while (head != NULL)
    {
        cout << "Students list: " << endl;

        if (two->gpa < three->gpa)
        {
            while (three)
            {
                cout << " -Student's Name :" << three->name << endl;
                cout << " -Student's Age :" << three->age << endl;
                cout << " -Student's ID :" << three->id << endl;
                cout << " -Student's GPA :" << three->gpa << endl;
                three = three->next;
                break;
            }
            while (head < one)
            {
                head = one;
                cout << " -Student's Name :" << head->name << endl;
                cout << " -Student's Age :" << head->age << endl;
                cout << " -Student's ID :" << head->id << endl;
                cout << " -Student's GPA :" << head->gpa << endl;
                one = one->next;
            }
        }
        else if (three->gpa > one->gpa && three->gpa < two->gpa && three->gpa > extra->gpa)
        {
            cout << "New Function";
            cout << " -Student's Name :" << two->name << endl;
            cout << " -Student's Age :" << two->age << endl;
            cout << " -Student's ID :" << two->id << endl;
            cout << " -Student's GPA :" << two->gpa << endl;
            two = two->next;

            while (three)
            {
                head = three;
                cout << " -Student's Name :" << head->name << endl;
                cout << " -Student's Age :" << head->age << endl;
                cout << " -Student's ID :" << head->id << endl;
                cout << " -Student's GPA :" << head->gpa << endl;
                three = three->next;

                cout << " -Student's Name :" << one->name << endl;
                cout << " -Student's Age :" << one->age << endl;
                cout << " -Student's ID :" << one->id << endl;
                cout << " -Student's GPA :" << one->gpa << endl;

                cout << " -Student's Name :" << extra->name << endl;
                cout << " -Student's Age :" << extra->age << endl;
                cout << " -Student's ID :" << extra->id << endl;
                cout << " -Student's GPA :" << extra->gpa << endl;
            };
        }
        else if (three->gpa < one->gpa && three->gpa < two->gpa && three->gpa > extra->gpa)
        {
            int x;
            while (x < 2)
            {
                head = two;
                cout << " -Student's Name :" << head->name << endl;
                cout << " -Student's Age :" << head->age << endl;
                cout << " -Student's ID :" << head->id << endl;
                cout << " -Student's GPA :" << head->gpa << endl;
                two = two->next;
                x++;
            }
            cout << " -Student's Name :" << three->name << endl;
            cout << " -Student's Age :" << three->age << endl;
            cout << " -Student's ID :" << three->id << endl;
            cout << " -Student's GPA :" << three->gpa << endl;

            cout << " -Student's Name :" << extra->name << endl;
            cout << " -Student's Age :" << extra->age << endl;
            cout << " -Student's ID :" << extra->id << endl;
            cout << " -Student's GPA :" << extra->gpa << endl;
        }
        else if (three->gpa == two->gpa)
        {
            cout << "New Function";
            cout << " -Student's Name :" << two->name << endl;
            cout << " -Student's Age :" << two->age << endl;
            cout << " -Student's ID :" << two->id << endl;
            cout << " -Student's GPA :" << two->gpa << endl;
            two = two->next;

            while (three)
            {
                head = three;
                cout << " -Student's Name :" << head->name << endl;
                cout << " -Student's Age :" << head->age << endl;
                cout << " -Student's ID :" << head->id << endl;
                cout << " -Student's GPA :" << head->gpa << endl;
                three = three->next;

                cout << " -Student's Name :" << one->name << endl;
                cout << " -Student's Age :" << one->age << endl;
                cout << " -Student's ID :" << one->id << endl;
                cout << " -Student's GPA :" << one->gpa << endl;

                cout << " -Student's Name :" << extra->name << endl;
                cout << " -Student's Age :" << extra->age << endl;
                cout << " -Student's ID :" << extra->id << endl;
                cout << " -Student's GPA :" << extra->gpa << endl;
            };
        }
        else
        {
            while (head)

            {
                cout << " -Student's Name :" << head->name << endl;
                cout << " -Student's Age :" << head->age << endl;
                cout << " -Student's ID :" << head->id << endl;
                cout << " -Student's GPA :" << head->gpa << endl;
                head = head->next;
            }
        }
        break;
    }

    return 0;
}