#include<stdio.h>
// int main(){
//     int a,*p;
//     p=&a;
//     a=10;
//     printf("%d\n",a);
//     printf("%d\n",&a);
//     printf("%d\n",p);
//     printf("%d\n",*p);
//     *p=5;
//     printf("%d\n",a);
//     printf("%d\n",&a);
//     printf("%d\n",p);
//     printf("%d\n",*p);
//     return 0;
// }
// void inputarray(int arr[],int size){
//     int*p;
//     p=arr;
//     printf("enter the elements for array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",p+i);
//     }
// }
// void printarray(int arr[],int size){
//     int*p;
//     p=arr;
//     printf("the elements for array :");
//     for(int i=0;i<size;i++){
//         printf("%d\n",*(p+i));
//     }
// }
 int main(){
//     int n;
//     printf("enter the size :\n");
//     scanf("%d",&n);
//     int a[n];
//     inputarray(a,n);
//     printarray(a,n);
int arr[] = {10, 20, 30, 40};
int *p = arr;
printf("%d\n", *p);
p++;                
printf("%d\n", *p);  
p++;                 
printf("%d\n", *p); 
    
     return 0;
 }


