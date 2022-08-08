#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
 
typedef long long ll;
typedef double dbl;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define f(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i > b; i--)
int main()
{
    int x = 3;                                 //011
    int y = 6;                                 //110
    cout << "bitwise and " << (x & y) << endl; //010
    cout << "bitwise OR " << (x | y) << endl;  //111
    cout << "bitwise XOR " << (x ^ y) << endl; //101

    //left shift operator:(x<<y )==x*2^y(assuming first y bits in binary respresentation of x are zeroes otherwise the value will decrease)==puts y trailing zeroes
    cout << (x << 1) << endl; //110
    cout << (x << 2) << endl; //1100
    cout << (x << 3) << endl; //11000
    cout << (x << 4) << endl; //11000

    //right shift operator shofts the value to 1 and adds one leading  zero to the  beginning 
    //floor[x/(2^y)]
    int z=33;
    cout<<(z >> 1)<<endl;
    cout<<(z >> 2)<<endl;
    cout<<(z >> 3)<<endl;
    cout<<(z >> 4)<<endl;

    return 0;
}