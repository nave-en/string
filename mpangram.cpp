#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void pangram(string str)
{
int arr[26],index=0;
for(int i=0;i<=25;i++)
arr[i]=0;
for(int i=0;i<str.length();i++)
{
if(('A'<=str[i])&&(str[i]<='Z'))
index=str[i]-'A';
if(('a'<=str[i])&&(str[i]<='z'))
index=str[i]-'a';
arr[index]=1;
}
for(int i=0;i<=25;i++)
{
if(arr[i]==0)
{
cout<<char(i+'a');
}
}
}
int main()
{
string str;
cin>>str;
pangram(str);
return 0;
}
