#include<iostream.h>
#include<conio.h>

int main()
{
int arr[6];
int i,j,swap;
swap=0;
cout<<"enter the velue of arry ..... "<<endl;
for(i=0;i<6;i++)
{
cin>>arr[i];
}

for(i=0;i<6-1;i++)
{
for(j=0;j<6-i-1;j++)
{
if(arr[j]>arr[j+1])
{
swap=arr[j];
arr[j]=arr[j+1];
arr[j+1]=swap;
}
}
}
cout<<"value after bubble sort ...... "<<endl;
for(i=0;i<6;i++)
{
cout<<arr[i]<<endl;
}
getch();
return 0;
}

