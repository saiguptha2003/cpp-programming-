#include <iostream>
#include <algorithm>
using namespace std;
struct process
{
    int id;
    int arr;
    int burstout;
    int turnaround;
    int waittime;
};
bool compare(process l, process r)
{
    return l.arr < r.arr;
}
int main()
{
    cout << "enter the number of process :";
    int n;
    cin >> n;
    process array[10];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the process " << i + 1 << " arrival and bursted time :";
        cin >> array[i].arr;
        cin >> array[i].burstout;
        array[i].id = i + 1;
    }
    sort(array, array + n, compare);
    int tvt = 0;
    int wt = 0;
    for (int i = 0; i < n; i++)
    {
        tvt = tvt + array[i].burstout;
        array[i].turnaround = tvt;
        array[i].waittime = array[i].turnaround - array[i].burstout;
        wt = wt + array[i].waittime;
    }
    cout << "average tat :" << (float)tvt / n << endl;
    cout << "average wt :" << (float)wt / n << endl;
}