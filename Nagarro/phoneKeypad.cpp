#include<iostream>
#include<cstring>
using namespace std;
char keypad[][10] = { "", "", "ABC", "DEF", "GHI", "JKL" , "MNO" , "PQRS", "TUV", "WXYZ"};
void phoneKeyPad(char* input, char* output, int i, int j)
{
    if(input[i]=='\0')
    {
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }
    int digit = input[i] - '0';
    if(digit== 0 || digit ==1)
    {
        phoneKeyPad(input,output, i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        output[j] = keypad[digit][k];
        phoneKeyPad(input,output,i+1,j+1);
    }
}
int main()
{
    char input[10], output[10];
    cin>>input;
    phoneKeyPad(input, output, 0,0);

    return 0;
}
