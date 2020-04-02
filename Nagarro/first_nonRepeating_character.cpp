/*
#include <bits/stdc++.h>
using namespace std;

#define NO_OF_CHAR 256
int *getCountArray(char *str)
{
    int *count=new int[NO_OF_CHAR];

    for(int i=0;str[i]!='/0';i++)
    {
        count[str[i]]++;
    }
    return count;
}
int firstNonRepeating(char *str)
{
    int i;
    int index=-1;
    int *count=getCountArray(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(count[str[i]]==1){
            index=i;
            break;
        }

    }
    delete(count);
    return index;

}
int main()
{
  //  string str;
 // cout<<"Enter the string ";


  //getline(cin,str);

  char str[]="geeks";

  int index=firstNonRepeating(str);

  if(index==-1)
    cout<<"Either all characters are repeating or string is empty";
  else
    cout<<str[index];

  return 0;
}

*/







// C program to find first non-repeating character
#include <bits/stdc++.h>
using namespace std;

#define NO_OF_CHARS 256

/* Returns an array of size 256 containg count
of characters in the passed char array */
int *getCharCountArray(char *str)
{
int *count = new int[NO_OF_CHARS];
int i;
for (i = 0; *(str+i); i++)
	count[*(str+i)]++;
return count;
}

/* The function returns index of first non-repeating
character in a string. If all characters are repeating
then returns -1 */
int firstNonRepeating(char *str)
{
int *count = getCharCountArray(str);
int index = -1, i;

for (i = 0; *(str+i); i++)
{
	if (count[*(str+i)] == 1)
	{
	index = i;
	break;
	}
}

delete(count); // To avoid memory leak
return index;
}

/* Driver program to test above function */
int main()
{
char str[] = "geeksforgeeks";
int index = firstNonRepeating(str);
if (index == -1)
	cout<<"Either all characters are repeating or string is empty";
else
cout<<"First non-repeating character is : "<< str[index];

return 0;
}

