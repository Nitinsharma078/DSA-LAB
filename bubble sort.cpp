#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, j, k = 1, temp;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    int A[n];
    cout << "Enter the number of element:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        // cout<<A[i]<<endl;
    }
    for (i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    // i=0;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - 1 - i; j++)
        {

            if (A[j + 1] < A[j])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    cout << "\n\nsorted array is" << endl;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}
