#include<stdio.h>
void bubble_sort(int a[],int n ) {
    int t,i,k;
    for(k = 0; k< n-1; k++) {
        for(i = 0; i < n-k-1; i++) {
            if(a[i] > a[i+1] ) 
            {
                t = a[i];
                a[i] = a[i+1];
                a[i + 1] = t;
            }
        }
    }
    for (i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}
void selection_sort(int a[],int n) 
{        
    int t,i,j;
    for(i=0;i<n-1;i++)  
    {
        for(j=i+1;j<n;j++) 
        {
            if(a[j] < a[i]) 
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;               
            }

        }
    }
    for (i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void insertion_sort(int a[],int n) 
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        t = a[i];    
        j = i;
        while(j>0  && t<a[j-1]) 
        {
            a[j]=a[j-1];   
            j=j-1;

        }
           a[j]=t;       
    }
    for (i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int partition(int a[],int start,int end) 
{
    int i = start + 1;
    int piv = a[start];
    int j;       
    for(j =start+1;j<=end;j++)  
    {
        if (a[j]<piv) 
        {
            swap (a[i],a[j]);
            i+=1;
        }
    }
    swap (a[start],a[i-1]) ;
    return i-1;
}
void quick_sort(int a[],int start,int end) 
{
    if(start<end ) 
    {
        int piv_pos=partition(a,start,end) ;     
        quick_sort(a,start,piv_pos-1);
        quick_sort(a,piv_pos+1,end);
    }
    int i;
    for(i = 0;i<end+1;i++)
    {
        printf("%d ",a[i]);
    }
}     
void merge_sort(int A[],int start,int end)
{
    if(start<end) 
    {
        int mid = (start + end ) / 2 ;           
        merge_sort (A, start , mid ) ;                 
        merge_sort (A,mid+1 , end ) ;           
        merge(A,start , mid , end );   
    }      
    int i;
    for(i = 0;i<end+1;i++)
    {
        printf("%d ",a[i]);
    }              
}
void main()
{
    int c,i,a[100],n;
    printf("1.Bubble sort\n2.Selection sort\n3.Insertion sort\n4.Quick sort\n5.Heap sort\n6.Merge sort");
    printf("\nEnter your choice:");
    scanf("%d",&c);
    printf("\nEnter size:");
    scanf("%d",&n);
    printf("\nEnter bay:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(c==1)
    {
        bubble_sort(a,n);
    }
    else if (c==2)
    {
        selection_sort(a,n);
    }
    else if (c==3)
    {
        insertion_sort(a,n);        
    }
    else if(c==4)
    {
        quick_sort(a,0,n-1);
    }
    else if (c==5)
    {
    }
    else if(c==6)
    {
        merge_sort(a,0,n-1);

    }
    else
    {
        printf("error");
    }
    
}