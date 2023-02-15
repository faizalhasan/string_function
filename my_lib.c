#include<stdio.h>
#include<stdlib.h>
//code to find the length of the string 
int length(char str[]){
    int l=0;
    while(str[l]!='\0')
      l++;
    return l;
}
//code to get input char by char without using extra space
char* getInD(char *str)
{
    int i=0,j=1;
    char c='\0';
    str = (char*)malloc(sizeof(char));
    while(c != '\n')
    {
        str = (char*)realloc(str, j*sizeof(char));
        c = getc(stdin);
        if(c=='\n')
        {
            break;
        }
        str[i]=c;
        i++;
        j++;
    }
    str[i]='\0';
    return str;
}
//code to concatenate two strings
char* str_cat(char input1[],char input2[])
{

   int i=0;
   char* temp=(char*)malloc(sizeof(char));
    while(input1[i]!='\0')
   {
       temp[i]=input1[i];
       i++;
   }
   temp[i]=' ';
   int k=0;
   while(input2[k]!='\0')
   {
       temp[i+1]=input2[k];
       i++;
       k++;
   }
   temp[i]= '\0';
}
//code to copy a string 
void strcpy1(char str[],char str2[])
{
 int i;
 int len=0;
 for(;str[len]!='\0';len++);
 for(i=0;i<len;i++)
 {
    str2[i]=str[i];
 }
 str2[i]='\0';
}
//code to copy a string based on the number of characters specified
void strcpy2(char str[],char str2[],int n)
{
 int i;
 int length=0;
 for(;str[length]!='\0';length++);
 if(n>=length)
 {
 for(i=0;i<length;i++)
  {
    str2[i]=str[i];
  }
 str2[i]='\0';
 }
 else
 {
  for(i=0;i<n;i++)
  {
    str2[i]=str[i];
   }
 str2[i]='\0';  
 }
}
//code to find the character in a string and print from that character. if it is not present then returns NULL
char* str_chr(char *str,char c)
{
   while(*str!=c && *str!='\0')
   {
    str++;    
   }
   if(*str=='\0')
     return NULL;
   return str;
}
//code to reverse the string
void reverse(char arr[])
{
   int n=0;
   for(;arr[n]!='\0';n++);
   char c;
   for(int i=0;i<n/2;i++)
   {
      c=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=c; 
   }
}
//code to do copy over memory
void mem_cpy(char *str, char *str2,int n)
{
    str2=(char*)realloc(str2,(n+1)*sizeof(char));
    int i=0;
    for(;i<n;i++)
    {
      str2[i]=str[i];
    }
    str2[i]='\0';
}
//to move in between memory locations
void demo_mmove(char *dest,char* src, int n)
{
    if(dest<=src)
    {
        int i=0;
        while(i<n)
        {
            *(dest+i)=*(src+i);
            i++;
        }
    }
    else{
        int i=n-1;
        while(i>=0)
        {
            *(dest+i)=*(src+i);
            i--;
        }
    }
}
//tokenizer function
char* stringToken(char* s, char d)
{
    static char *input = NULL;
    if(input==NULL)  // no address 
    {
        input = s;
    }
    if(!*input)      // check if '\0' true
    {
        return NULL;  
    }

    char *token = input;
    while(*input && *input!=d) 
    {
        input++;
    }

    if(*input)
    {
        *input = '\0';
        input++; 
    }
    return token;
}
