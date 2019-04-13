#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

main()
{
 clrscr();
 float a[20], num, choice, i=0;
 int flag=0, flag1=0;
 randomize();
 while(1)
 {
  cout<<"\n 1. For ticket";
  cout<<"\n 2. Result";
  cout<<"\n 3. Exit";
  cout<<"\n Enter your choice: ";
  cin>>choice;
  if(choice==1)
  {
   if(i>=20)
   {
    cout<<"\n All tickets are sold";
    }
   else
   {
    cout<<"\n Your ticket number is: ";
    a[i]=random(50)+201900;
    again:
    for(int j=0; j<i; j++)
    {
     if(a[i]==a[j])
     {
      a[i]=random(50)+201900;
      goto again;
      }
     else
     {
      flag=1;
      }
     }
    if(flag==1)
    {
     cout<<a[i];
     i++;
     }
    else
    {

     cout<<a[i];
     i++;
     }
    }
   }
  else if(choice==2 && flag1==0)
  {
   if(i>=0 && i<20)
   {
    cout<<"\n Result is not coming";
    }
   else
   {
    cout<<"\n Winner is: ";
    num=random(20);
    cout<<a[num];
    }
   flag1=1;
   }
  else if(choice==2 && flag1==1)
  {
   if(i>=0 && i<20)
   {
    cout<<"\n Result is not coming";
    }
   else
   {
    cout<<"\n Winner is: ";
    cout<<a[num];
    }
   }

  else if(choice==3)
  {
   exit(0);
   }
  else
  {
   cout<<"\n Enter a valid choice";
   }
  }
 getch();
 return 0;
 }