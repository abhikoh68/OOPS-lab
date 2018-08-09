#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    string str=" ";
printf("enter any string");
gets(str);

 int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    cout << i << endl;

    // 5. size of string object using for loop
    for (i=0; str[i]!='\0'; i++)
    {
    }
    cout << i << endl;

return 0;
}
