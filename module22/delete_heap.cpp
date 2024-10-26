#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int>&v,int x)
{

        v.push_back(x);
        int ci = v.size() - 1;

        while(ci != 0)
        {
            int pi = (ci - 1)/2;

            if(v[pi] < v[ci])
            {
                swap(v[pi],v[ci]);
            }
            else
            {
                break;
            }
            ci = pi;
        }
}

void print_heap(vector<int> v)
{
    for(int g : v)
    {
        cout<<g<<" ";
    }
}

void delete_heap(vector<int> &v)
{

    v[0] = v[v.size() - 1];
    v.pop_back();
    int curr = 0;

    while(true)
    {
        int left = curr * 2 + 1;
        int right = curr * 2 + 2;
        int last = v.size() - 1;

        if(left<=last && right<=last)
        {
            if(v[left] >= v[right] && v[left] > v[curr])
            {
                swap(v[left],v[curr]);
                curr = left;
            }
            else if(v[right] >= v[left] && v[right] > v[curr] )
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
            if(v[left] > v[curr])
            {
                swap(v[left],v[curr]);
                curr = left;
            }else
            {
                break;
            }
        }
        else if(left<=right)
        {
            if(v[right] > v[curr])
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

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);
    }

    delete_heap(v);
    print_heap(v);

}
