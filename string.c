#include<stdio.h>
int string_length(char *p)
{
    int count;
    while(*p++!='\0')
    count++;
    return count;
}
void string_concat(char *p,char *q)
{
    while(*p!='\0')
    p++;
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }

}
void string_copy(char *p,char *q)
{
	while(*p=*q)
	{
        p++;
        q++;
    }
}
int string_compare(char *p,char *q)
{
    while(*p++!='\0'&&*q++!='\0')
    {
        if(*p==*q)
        {
            continue;
        }
        else
        {
            return *p-*q;
        }
        
    }

}
void compute_lps_array(int x[],char *p,int n)
{
    int len=0;
    x[0]=0;
    int i=1;
    while(i<n)
    {
        if(p[len]==p[i])
        {
            len++;
            x[i]=len;
            i++;

        }
        else
        {
            if (len!=0)
            {
                len=x[len-1];
            }
            else
            {
                x[i]=0;
                i++;
            }
            
            
        }
        
    }

}
int substringreplacement(char s[],char sub[],char replacement[])
{
	int i=0,j,index[100],index_count,k;
	char newstring[100];
	index_count=substringsearch(s,sub,index);
	if(index_count==0)
	{
		printf("Substring not found in the string!!\n");
	
	}
	else 
	{
		k=0;
		for(int itr=0;itr<index_count;itr++)
		{
			while(i<index[itr])
		 		newstring[k++]=s[i++];
			j=0;
			while(replacement[j])
		 		newstring[k++]=replacement[j++];
		
			i=i+strlength(sub);			
		}
		while(s[i])
		{
			newstring[k++]=s[i++];
		}
		newstring[k]='\0';
		stringcpy(s,newstring);
	}
	return index_count;

}
void pattern_search(char *txt,char *pat){
    int m=strlen(txt);//text
    int n=strlen(pat);//pattern
    int lps[n];
    compute_lps_array(lps,pat,n);
    int i=0,j=0;
    if(pat[i]==pat[j])
    {
        i++;
        j++;
    }
    if(j==n)
    {
        printf("found at index:%d",i-j);
        j=lps[j-1];
    }
    else if (i<m && pat[i]!=txt[j])
    {
        if(j!=0)
        {
            lps[j-1]=j;
        }
        else
        {
            i++;
        }
        
    }



}
void main()
{
    int c;
    printf("1.String Length\n2.String Concatenation\n3.String Copy\n4.String Comparison\n5.Substring Search\n6.Number of vowels and consonants");
    printf("\nEnter choice:");
    scanf("%d",&c);

}