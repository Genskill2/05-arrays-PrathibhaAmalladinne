/* Enter your solutions in this file */
#include <stdio.h>
int max(int s[ ],int len){
		int temp=s[0];
		for(int i=1;i<len;i++)
		{
			if(s[i]>temp){temp=s[i];}
		}
return temp;
}


int min(int s[ ],int len){
		int temp=s[0];
		for(int i=1;i<len;i++)
		{
			if(s[i]<temp){temp=s[i];}
		}
return temp;
}


float average(int s[],int len)
 {
 int sum=0,i;
 for(i=0;i<len;i++){
 sum += s[i];
 }
 float avg = sum/i;
 return avg;
 }


int mode(int inp[],int len)
{
for(int i=0;i<len-1;i++){
 	for(int j=0;j<len-i-1;j++){
 		if(inp[j]>inp[j+1])
 		 {int p;
 		 p=inp[j];
 		 inp[j]=inp[j+1];
 		 inp[j+1]=p;}
 }}
int mode=inp[0];
int curmode=inp[0];
int count=1;
int curcount=1;
int i=0;
	while(i<len-1)
	{
	    while(inp[i]==inp[i+1])
		{
		    curcount++;
		    i++;
		 }
		 if(curcount>count)
		 {
		    mode=inp[i];
		    count=curcount;
		    curcount = 1;
		 }
		 i++;
	 } 	
return mode;
}

int factors(int num,int fact[]){
int j=0;
for(int i=2;i<=num;i++){
while(num%i == 0){
		fact[j++] = i;
		num=num/i;
		}
  }
return j;
}
