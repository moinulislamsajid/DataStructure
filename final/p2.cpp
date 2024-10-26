#include <bits/stdc++.h>
using namespace std;

class Employee
{
    public :
    string name;
    int id;
};

bool cmd(Employee &a,Employee &b)
{
    if (a.name == b.name)
    {
        return a.id > b.id;
    }
    return a.name < b.name;
}

int main()
{
    int n;
    cin >> n;
    vector<Employee> employees(n);

    for (int i = 0; i < n; i++)
    {
        cin >> employees[i].name >> employees[i].id;
    }

    sort(employees.begin(), employees.end(), cmd);

    for (auto employee : employees)
    {
        cout << employee.name << " " << employee.id << endl;
    }


}
