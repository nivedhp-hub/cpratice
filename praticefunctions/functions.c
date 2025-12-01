 #include<stdio.h>
// int squareofvalue(int x){
//     return x*x;
// }
// int main(){
//     int a,b;
//     while(1){
//     printf("enter the number to find the square :");
//     scanf("%d",&a);
//     b=squareofvalue(a);
//     printf("%d\n",b);
// }
//     return 0;
// }
// void modify(int arr[],int n){
//     arr[n-1]=555;
// }
// int main(){
//     int n,i;
//     printf("enter the size of the array :\n");
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         printf("enter the elements in the array :\n");
//         scanf("%d",&a[i]);
//     }
//     modify(a,n);
//      printf(" the elements in the array is :");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     return 0;

// }
// void greet(){
//     printf("hello ,good morning \n");
// }
// void printnumber(int x){
//     printf("%d",x);
// }
// int cube(int x){
//     return x*x*x;
// }


// int main(){
//     greet();
//     printnumber(5);
//     int b=cube(5);
//     printf("%d",b);
//     return 0;
// }
// void inputarray(int arr[],int size){
//     printf("enter the elements for the array : \n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void printarray(int arr[],int size){
//     printf("The elements for the array : \n");
//     for(int i=0;i<size;i++){
//         printf("%d\t",arr[i]);
//     }
// }
// void incrementall(int arr[],int size){
//     for(int i=0;i<size;i++){
//         arr[i]=arr[i]+1;
//     }
// }

// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int a[n];
//     inputarray(a,n);
//     printarray(a,n);
//     printf("\n");
//     incrementall(a,n);
//     printarray(a,n);
//     return 0;
// }
//check the number whether it is pallindrome or not using functions
// #include<stdio.h>
// int checkispallindrome(int n){
//     int rev=0,checker;
//     checker=n;
//     if(n==0){
//         return 1;
//     }
//     if (n<0){
//         return 0;
//     }
//     while(n>0){

//         int digit=n%10;
//         rev=(rev*10+digit);
//         n=n/10;
//     }
//     if(rev==checker){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }
// int main(){
//     int num,a;
//     while(1){
//     printf("enter the number that you want to check whether it is pallindrome :");
//     scanf("%d",&num);
//     a=checkispallindrome(num);
//     if(a==1){
//         printf("The number %d is pallindrome \n",num);}
//     else{
//         printf("The number %d is not  pallindrome \n",num);
//     }
// }
//     return 0;
// }
//GCD of two numbers using functions
#include<stdio.h>
int checkgcd(int a,int b){
    int temp=0;
    if(a>0&&b==0){
        return a;
    }
    if(a==0&&b>0){
        return b;
    }
    if(a==0&&b==0){
        return 0;
    }
    if(a>0&&b>0){
        int c;
        if(a>b){
            c=b;
        }
        else{
            c=a;
        }
        for(int i=1;i<=c;i++){
            if(a%i==0&&b%i==0){
                temp=i;
            }
        }
        return temp;
    }

}
int main(){
    int a,b,checker;
    while(1){
    printf("enter the numbers to check the greatest common factor :");
    scanf("%d %d",&a,&b);
    if(a<0||b<0){
        printf("Negatives enter valid \n");
        continue;
    }
    checker=checkgcd(a,b); 
    printf("The GCD of %d and %d  is %d\n",a,b,checker);
}
    return 0;
}