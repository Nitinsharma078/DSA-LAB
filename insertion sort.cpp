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
    /*   for(i=0;i<n;i++){
           cout<<A[i]<<endl;
       }*/

    for (i = 1; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (A[j] > A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
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
