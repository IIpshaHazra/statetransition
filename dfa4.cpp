//Design a DFA that accepts a string having ‘101’ as substring over Sigma={1,0}//
#include<iostream>
#include<string>
using namespace std;
bool substring(char a[],int size)
{
    int state = '0';
    for(int i = 0; i < size; i++)
    {
        char digit = a[i];
        switch (state)
        {
            case '0':
             if(digit == '1')
                state ='1'; 
            break;
            case '1':
             if(digit == '0')
                state ='2';
            break;
            case '2':
             if(digit == '1')
                state ='3';
             else if(digit=='0')
                state ='0';
            break;
        }  
    }  
        if(state == '3')
            return true;
        else 
            return false;
}
int main()
{
    char a[10];
    int size;
    cout<<"the size of the";
    cin>>size;
    cout<<"enter the string";
    for(int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    bool res = substring(a,size);
    if (res == true)
        cout<<"string accepted";
    else
        cout<<"string rejected";
    return 0;
}