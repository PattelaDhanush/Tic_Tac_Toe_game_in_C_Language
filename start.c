#include<stdio.h>
#include<conio.h>
void box(int [ ],int [ ],int [ ]);
int k;
void main()
{
int j,i,p=1,q=1,n;int a[3],b[3],c[3]; 
clrscr();
for(j=0;j<=2;j++)
{a[j]=q;
b[j]=q+1; 
c[j]=q+2; 
q=c[j]+1;}
box(a,b,c);
for(j=1;j<=9;j++)
{ n=(p%2==0)?2:1; 
printf("player%d\n",n); 
printf("Enter your position"); 
scanf("%d",&i); 
switch(i){
case 1:   printf("Enter your value");	  
scanf("%d",&a[0]);	    
break;
case 4:   printf("Enter value");	
scanf("%d",&a[1]);	   
break; 
case 7:   printf("Enter your value");	   
scanf("%d",&a[2]);	     
break; 
case 2:    printf("Enter");	    
scanf("%d",&b[0]);	    
break; 
case 5:  printf("Enter");	
scanf("%d",&b[1]);	 
break; 
case 8:    printf("Enter");	
scanf("%d",&b[2]);	  
break;
case 3:     printf("Enter");
scanf("%d",&c[0]);	   
break;
case 6:     printf("Enter");	
scanf("%d",&c[1]);	   
break;
case 9:     printf("Enter");	
scanf("%d",&c[2]);	     
break; 
default:{printf("Enter valid position");
j=j-1;}	  
}
box(a,b,c);
if((a[0]==a[1])&&(a[0]==a[2]))
{printf("winner is player%d\n",n);
break;}
else if((a[0]==b[0])&&(a[0]==c[0]))
{printf("Winner is player%d\n",n);
break;}
else if((a[2]==b[1])&&(a[2]==c[0])){printf("winner is player%d\n",n);break;}
else if((a[0]==b[1])&&(a[0]==c[2])){printf("Winner is player%d\n",n);break;}
else if((a[2]==b[2])&&(a[2]==c[2])){printf("Winner is player%d\n",n);break;}
else if((a[1]==b[1])&&(a[1]==c[1])){printf("Winner is player%d\n",n);break;}
else if((b[0]==b[1])&&(b[1]==b[2])){printf("Winner is player%d\n",n);break; }
else if((c[0]==c[1])&&(c[1]==c[2])){printf("Winner is player%d\n",n);break;}
p=p+1;}box(a,b,c);
}
void box(int x[], int y[],int z[])
{
printf("*****TIC TAC TOE******\n");
for(k=0;k<=0;k++)
{printf("%d I  %d I  %d\n",x[k],x[k+1],x[k+2]);
printf("---------------------\n");
printf("%d I  %d I  %d\n",y[k],y[k+1],y[k+2]);printf("---------------------\n");
printf("%d I  %d I  %d\n",z[k],z[k+1],z[k+2]); 
}}
