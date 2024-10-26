#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{

    v.push_back(val);
    int curr = v.size() - 1;

    while(curr != 0)
    {
        int pr = (curr - 1)/2;

        if(v[pr] > v[curr])
        {
            swap(v[pr],v[curr]);
        }else
        {
            break;
        }

        curr = pr;
    }


}

void print_heap(vector<int> v)
{
    for(int n : v)
    {
        cout<<n<<" ";
    }
}

void delete_min_heap(vector<int> &v)
{

    v[0] = v[v.size()-1];
    v.pop_back();
    int curr = 0;

    while(true)
    {

        int left = curr * 2  + 1;
        int right = curr * 2  + 2;
        int last = v.size() - 1;

        if(left<=last && right<=last)
        {
            if(v[left] <= v[right] && v[left] < v[curr])
            {
                swap(v[left],v[curr]);
                curr = left;
            }
            else if(v[right] <= v[left] && v[right] < v[curr])
            {
                swap(v[right],v[curr]);
                curr = right;
            }
            else
            {
                break;
            }
        }
        else if(left<=last)
        {
            if(v[left] < v[curr])
            {
                swap(v[left],v[right]);
                curr = left;
            }else
            {
                break;
            }
        }
        else if(left<=right)
        {
            if(v[right] < v[curr])
            {
                swap(v[right],v[curr]);
                curr = right;
            }else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }


}

int main()
{

    int sz;
    cout<<"Enter size of heap : ";
    cin>>sz;
    vector<int> v;
    for(int i = 0; i<sz; i++)
    {
        int val;
        cin>>val;
        insert_heap(v,val);
    }

    // called the delete function

    delete_min_heap(v);
    // called the print function
    print_heap(v);

}
