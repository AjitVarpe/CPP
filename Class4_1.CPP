#include<iostream>
using namespace std;

class Employee // Give the names of the class as Noun
{
private:
    int emp_id;    // 2 bytes
    char name[20]; // character array // 1 byte // 20 bytes
    float salary;  // 4 bytes
    // methods  // functions
public:
    void setValues();
    void getValues();
};

void Employee::setValues() // Scope Resolution Operator
{
    cout<<"Enter employee id"<<endl;
    cin>>emp_id;
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter salary " << endl;
    cin >> salary;
}

void Employee::getValues() // modularity
{
    cout << "Emp id=" << emp_id << endl;
    cout << "Name=" << name << endl;
    cout << "Salary=" << salary << endl;
}

int main()
{

    Employee e[5]; // Array of objectsf
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter values for the first object" << endl;
        e[i].setValues();
    }

    cout << "The Values in all objects are=" << endl;

    for (i = 0; i < 5; i++)
    {
        {
            cout << "Value is Object" << i + 1 << "=" << endl;
            e[i].getValues();
        }
}
