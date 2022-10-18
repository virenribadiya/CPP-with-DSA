
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int main()
{
   char str[200], ch, ch_temp;
   int len, i, asc_val;
   cout<<"Enter the String: ";
   gets(str);
   cout<<"Enter the Character to Capitalize: ";
   cin>>ch;
   len = strlen(str);
   for(i=0; i<len; i++)
   {
      if(ch==str[i])
      {
         asc_val = str[i];
         if(asc_val>=97 && asc_val<=122)
         {
            asc_val = asc_val-32;
            ch_temp = asc_val;
            str[i] = ch_temp;
         }
      }
   }
   cout<<"\nAll \""<<ch<<"\" gets capitalized";
   cout<<"\nThe new string is\n\n";
   cout<<str;
   cout<<endl;
   return 0;
}
