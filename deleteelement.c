#include<stdio.h>

int main()
{
    int a[50],pos,i,size,search,n;
    printf("Enter The Size of Array\n");
    scanf("%d",&size);
    printf("Enter The Elements of Array\n");
    if (size>50)
    {
        printf("OVERFLOW !!");
    }
    else{
    
    for ( i = 0; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }
    }
    printf("Enter The Element to Delete\n");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(a[i] == search)
        {
            pos = i;
            break;
        }
       
    }
     if(i==size)
        {
            printf("Element Not Found\n");
        }
    else{
    for(n = pos ; n <size-1 ;n++)
    {
        a[n] = a[n+1];
    }
    size -- ;
    printf("Array :");
    for ( i = 0; i < size ; i++)
    {
        printf("%d",a[i]);
    }
    }
      
    return 0;
}
