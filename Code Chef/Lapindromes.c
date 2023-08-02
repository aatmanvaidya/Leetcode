/*
#include<stdio.h>
#include<string.h>
int main(){
char str[1001];
scanf("%s",str);
if(strlen(str)%2==0){
char a[1001],b[1001];
for(int i=1;i<=strlen(str)/2;i++){
a[i]=str[i];
}
for(int j=((strlen(str)/2)+1);j<=strlen(str);j++){
b[j]=str[j];
}
if(strcmp(a,b)==0)
printf("YES");
else
printf("NO");
}
return 0;
}
*/


/*
#include <stdio.h> 
#include <string.h> 
  
// A function to check if a string str is palindrome 
void isPalindrome(char str[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(str) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 
  
// Driver program to test above function 
int main() 
{ 
    char str[1001];
scanf("%s",str);
isPalindrome(str);
    return 0; 
}

*/

#include <stdio.h>
#include <string.h>

int main(void) 
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int l=0,j=0,k=0,c=0;
        char s[1000] ;
        scanf("%s",s);
        l = strlen(s);
        for(j=0;j<l/2;j++)
        {
           for(k=(l-1);k>=l-l/2;k--)
           {
               if(s[j] == s[k])
               {
                   s[k] =0 ;
                   c++;
                   break;
               }
           }
        }
        if(c == l/2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	// your code goes here
	return 0;
}

