#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void initialization(int* n, const int length, const int low, const int high);
void print(int* n, const int length);
void castling(int* n, const int length);

int main(){
    srand((unsigned) time(NULL));
    
    int n;
    cout << "n = "; cin >> n;
    int a[2*n];
    initialization(a, 2*n , -10, 10);
    print(a, 2*n);
    castling(a, 2*n);
    print(a, 2*n);
    return 0;
}
void print(int* n, const int length)
{
    for (int i = 0; i < length; i++)
        cout << setw(4) << n[i];
    cout << endl;
}
void initialization(int* n, const int length, const int low, const int high)
{
    for (int i = 0; i < length; i++)
    {
        n[i] = low + rand() % (high - low + 1);
    }
}
void castling(int* n, const int length)
{
    for(int i = 0; i < length/2; i++)
    {
        int tmp = n[i];
        n[i] = n[length/2 + i];
        n[length/2 + i] = tmp;
    }
   
}
