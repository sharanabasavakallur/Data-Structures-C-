// 1.Tower of Hanoi
// Problem statement:

// refer notes pg 1
#include <iostream>
using namespace std;

// we use three towers source,helper and destination (we have to move n disks from source to destination)
void towerofHanoi(int n, string src, string helper, string dest)
{
    // base case
    if (n == 1)
    {
        cout << "transfer disk " << n << " from " << src << " to " << dest << endl;
        return;
    }

    // if n disks then move (n-1) disks to helper...so helper tower becomes destination and destination tower we use as helper
    towerofHanoi(n - 1, src, dest, helper);

    // numbering of disks is from top to bottum...so then move last i.e nth disk from src to destination
    cout << "transfer disk " << n << " from " << src << " to " << dest << endl;

    // now move those (n-1) disks from helper to destination...so now helper will be src and src will be helper and dest remains same
    towerofHanoi(n - 1, helper, src, dest);
}

int main()
{
    int n = 3;

    towerofHanoi(n, "S", "H", "D");
}