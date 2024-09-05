#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    string S = "HelloWorld";

    char str = 'l';

    int count = 0;

    for(int i = 0 ; i < S.length() ; i++)
    {
        if(S[i] == str)
        {
            count+=1;
        }
    }
    cout<< count <<endl;


}