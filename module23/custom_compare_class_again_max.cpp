#include<bits/stdc++.h>
using namespace std;

class employee
{
public :

    string name;
    int salary;
    int bouns;

    // create a constructor to initial the value

    employee(string name,int salary,int bouns)
    {
        this->name = name;
        this->salary = salary;
        this->bouns = bouns;

    }
};
class cclass
{
public :

    bool operator()(employee a,employee b)
    {
        if(a.salary < b.salary)
        {
            return true;
        }
        else if(a.salary > b.salary)
        {
            return false;
        }
        else
        {
            if(a.bouns < a.bouns)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<employee,vector<employee>,cclass> pq;
    for(int i=0; i<n; i++)
    {
        string name;
        int sal,bouns;
        cin>>name>>sal>>bouns;
        employee em(name,sal,bouns);
        pq.push(em);
    }

    // print value

    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().bouns<<" " << pq.top().salary<<endl;
        pq.pop();
    }
}
