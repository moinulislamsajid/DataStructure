#include<bits/stdc++.h>
using namespace std;

class student
{
public :

    string name;
    int roll;
    int marks;

    // create a constructor to initial the value

    student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmd
{
public :

    bool operator()(student a,student b)
    {
        if(a.marks > b.marks)
        {
            return true;
        }
        else if(a.marks < b.marks)
        {
            return false;
        }
        else
        {
            if(a.roll > b.roll)
            {
                return true;
            }else
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

    priority_queue<student,vector<student>,cmd> pq;

    for(int i = 0; i<n; i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        student obj(name,roll,marks);
        pq.push(obj);

    }

    // print the value

    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<" ";
        pq.pop();
    }


}
