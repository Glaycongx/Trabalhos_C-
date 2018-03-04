#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main()

{
    int h,m,s;
    
        h=(0);
        m=(0);
        s=(0);
    
    for(s=0;s<=61;s++)
    {printf("%d"" h :"" %d"" min :"" %d"" seg ",h,m,s);
    Sleep(1000);
    
    system("cls");
    
    if(s==60)
    {
        s=0;
        m++;
    }
    
    if(m==60)
    {
        m=0;
        h++;
    }
    if ((h==23)&&(m==59)&&(s==59))
    {
        h=(0);
        m=(0);
        s=(0);
     }}
    
    system("pause");
}
