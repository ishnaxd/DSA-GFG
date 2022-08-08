#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double dbl;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define f(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i > b; i--)
int linear_search(vector<int> arr, int a, int n)
{
    //good for unsorted array
    //O(n)
    // int n = arr.size();

    rep(i, n)
    {
        if (a == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int insert(vector<int> &arr, int pos, int a, int cap, int n)
{
    //O(n)
    //for fixed aarays

    if (cap == n)
    {
        return n;
    }
    fb(i, n - 1, pos - 2)
    {

        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = a;


    return n + 1;
}
int delete_(vector<int> &arr, int n, int a)
{
    int index;
    rep(i, n)
    {
        if (arr[i] == a)
        {
            index = i;
            break;
        }
    }
    if (index == n)
    {
        return n;
    }
    f(i, index, n - 1)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}
int find_max(vector<int> &arr, int n)
{
    int max = arr[0];
    rep(i, n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


void print_arr(vector<int> arr, int n)
{
    rep(i, n)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int cap = 10;
    int n;
    cin >> n;
    vector<int> arr(cap);
    rep(i, n)
    {
        cin >> arr[i];
    }
    // int a;
    // cout << "enter the number you wanna search: ";
    // cin >> a;

    // cout << "by linear search index of given number is : " << linear_search(arr, a,n);
    int pos, a;
    // cout << "enter pos: ";
    // cin >> pos;
    // cout << " enter number: ";
    // cout<<"enter the number you wanna delete : ";
    // cin >> a;
    // n = insert(arr, pos, a, cap, n);
    // n=delete_(arr,n,a);
    // print_arr(arr, n);
    cout << "the second max element is " << find_max(arr, n);

    return 0;
}