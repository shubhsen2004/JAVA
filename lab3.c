#include<stdio.h>
#include<string.h>
void fun(int*,int*);
// int main()
// {
//     int a=5,b=15;
//     int *p,*q;
//     p=&a,q=&b;
//     printf("sum is =%d",*p+*q);
// }

// int main()
// {
//      int a=40,b=60;
//      fun(&a,&b);
// }
// void fun(int *p,int *q)
// {
//     printf("sum after call by reference=%d",*p+*q);
// }

// int main()
// {
//     int a=40,b=60,*p=&a,*q=&b;
//     if(*p>*q)
//     printf("largest=%d",*p);
//     else
//     printf("largest=%d",*q); 
// }

//4th
// int main()
// {
//     int n;
//     printf("enter the value of n\n");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
//     int *p=arr;
//     for(int i=0;i<n;i++)
//        printf("%d\t",*p++);
// }

//5th
// int main()
// {
//     int i;
//     char str[]="Shubham Sen",*p=str;
//     for(i=0;p[i];i++);
//     printf("length of string=%d",i);
// }

//6th
// void swap(int*,int*);
// int main()
// {
//     int a=68,b=88;
//     swap(&a,&b);
//     printf("a=%d and b=%d",a,b);
// }
// void swap(int *p,int *q)
// {
//    *p=*p+*q;
//    *q=*p-*q;
//    *p=*p-*q;
// }

//7th
// int main()
// {
//     int arr[5]={23,54,58,90,78};
//     int sum=0;
//     int *p=arr;
//     for(int i=0;i<5;i++){
//         sum=sum+p[i];
//     }
    
// }

//8th
// int main()
// {
//     int arr[5]={34,65,98,90,78};
//     int *p=arr;
//     int temp;
//     for(int i=0;i<5/2;i++)
//     {
//         temp=p[i];
//         p[i]=p[4-i];
//         p[4-i]=temp;
//     }
//     printf("print arrey in reverse order :\n");
//     for(int i=0;i<5;i++)
//     printf("%d\t",p[i]);
// }

//9th
// int main()
// {
//     char alphabet='A';
//     char *p=&alphabet;
//     printf("Print alfabate :\n")
//     for(int i=0;i<26;i++)
//     printf("%c\t",*p+i);
// }

//10th
int main()
{
    char str[]="Shubham Sen";
    char *p=str;
    char temp;
    int l=strlen(str);
    printf("Print Str in reverse order :\n");
    for(int i=0;i<l/2;i++)
    {
        temp=p[i];
        p[i]=p[l-1-i];
        p[l-1-i]=temp;
    }
    printf("%s",p);
}