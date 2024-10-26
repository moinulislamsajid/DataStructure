#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;


    Student(string name, int roll, int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};

class dec_cmd
{
public:
    bool operator()(Student x, Student y)
    {
        if(x.marks<y.marks)
        {
            return true;
        }
        else if(x.marks==y.marks)
        {
            if(x.roll>y.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    priority_queue<Student, vector<Student>, dec_cmd> pqueue;

    for(int i=0; i<n; i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
       Student st(name,roll,marks);
        pqueue.push(st);
    }

    int q;
    cin>>q;
    while(q--)
    {
        int cmd;
        cin>>cmd;
        if(cmd==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student s1(name,roll,marks);
            pqueue.push(s1);
            cout<<pqueue.top().name<<" "<<pqueue.top().roll<<" "<<pqueue.top().marks<<endl;
        }
        else if(cmd==1)
        {
            if(!pqueue.empty())
            {

                cout<<pqueue.top().name<<" "<<pqueue.top().roll<<" "<<pqueue.top().marks<<'\n';

            }
            else
            {
                cout<<"Empty"<<'\n';
            }
        }
        else if(cmd==2)
        {
            if(!pqueue.empty())
            {
                pqueue.pop();
            }
            if(!pqueue.empty())
            {
                cout<<pqueue.top().name<<" "<<pqueue.top().roll<<" "<<pqueue.top().marks<<'\n';
            }
            else cout<<"Empty"<<'\n';
        }
    }
    return 0;
}
