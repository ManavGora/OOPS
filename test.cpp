#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>  // Include this header for the max function

using namespace std;

int factorial(int n)
{
    int sum = 1;
    for(int i = 1; i <= n; i++)  // Corrected loop variable name and condition
    {
        sum *= i;  // Simplified multiplication sum = sum * i;
    }
    return sum;
}

int main()
{
    string arr[] = {"hello", "ccbc", "aeiou"};

    int n = 3;

    int maxC = 0;
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < arr[i].length(); j++)
        {
            if(arr[i][j] == 'a' || arr[i][j] == 'e' || arr[i][j] == 'i' || arr[i][j] == 'o' || arr[i][j] == 'u')
            {
                count++;
            }
        }

        int l = arr[i].length(); // 5
        maxC = max(maxC, (l-count));

    }
    cout<<maxC<<endl;

    cout << factorial(maxC);
    
}