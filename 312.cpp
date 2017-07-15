#include<bits/stdc++.h>
using namespace std;
#define S "Officer"
int main()
{
     char s[5000],ch,ch1,s1[2000];
     int n,m,i,j,p,q,t,l,flag,tmp;
     cin>>t;
     getchar();
     for(j=1;j<=t;j++)
     {
         cin.getline(s,200);

         l=strlen(s);



         i=0;
          printf("Case %d: ",j);
         while(1)
         {

             if (i==l)break;
             if (i==0)
             {
                 tmp=0;
                 if (s[i]=='S'&&s[i+1]=='h'&&s[i+2]=='a'&&s[i+3]=='r'&&s[i+4]=='i'&&s[i+5]=='f')
                 {
                     ch1='A';
                     for(ch='a';ch<='z';ch++)
                     {
                         if (s[i+6]!=ch&&s[i+6]!=ch1)
                         {
                             tmp=0;
                         }
                         else
                         {
                             tmp=1;break;
                         }
                     }if (tmp==0){
                     cout<<"Officer";
                     i=i+6;}
                     else
                     {
                         cout<<s[i];i++;
                     }
                 }
                 else {
                    cout<<s[i];i++;
                 }
             }
            else if (s[i]=='S'&&s[i-1]==' ')
             {
                 if (s[i+1]=='h'&&s[i+2]=='a'&&s[i+3]=='r'&&s[i+4]=='i'&&s[i+5]=='f')

                 {
                     ch1='A';
                        for(ch='a';ch<='z';ch++)
                        {
                            if (s[i+6]!=ch&&s[i+6]!=ch1){
                                    flag=0;
                            ch1++;

                            }
                            else {
                                flag=1;break;
                            }
                        }
                        if(flag==0){                     //cout<<S;
                     cout<<"Officer";
                     i=i+6;}
                     else {
                    cout<<s[i];i++;
                 }
                 }
                 else {
                    cout<<s[i];i++;
                 }


             }

             else{
                cout<<s[i];
                i=i+1;}
         }

         cout<<endl;
     }
}
