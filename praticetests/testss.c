//sum of n natural numbers using fucntions 
// #include<stdio.h>
// int getsum(int a){
//     int sum=0;
//     for(int i=0;i<=a;i++){
//          sum=sum+i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     printf("enter the number upto you want to find the sum:");
//     scanf("%d",&n);
//     printf("sum of first %d numbers is %d",n,getsum(n));
//     return 0;
// }
//program to check whether a number is prime using fucntion
// #include<stdio.h>
// void checkisprime(int n){
//     int isprime=1;
//     if(n==2){
//         printf("%d is prime number\n",n);
//     }
//     else if(n<2){
//         printf("%d is not prime number\n",n);
//     }
//     else{
//         for(int i=2;i<=n/2;i++){
//             if(n%i==0){
//                 isprime=0;
//                 break;
//             }
//         }
//         if(isprime==0){
//             printf("%d is not prime number\n",n);
//         }
//         else{
//             printf("%d is prime number\n",n);
//         }

//     }
   
// }
// int main(){
//     int n;
//     while(1){
//     printf("enter the check whether it is prime or not :");
//     scanf("%d",&n);
//     checkisprime(n);
// }
//     return 0;

// }
//count the digits in a number using functions
// #include<stdio.h>
// void printnumberofdigits(int n){
//     int count=0;
//     if(n<0){
//         n=-n;
//     }
//     if(n==0){
//         printf("No of digits in thenumber is 1\n");
//     }
//     if(n!=0){
//         while(n>=1){
//             count+=1;
//             n=n/10;
//         }
//         printf("No of digits in the number is %d\n",count);
//     }
// }

// int main(){
//     int n;
//     char exit_char;
//     while(1){
//     printf("To exit the program enter Y : \n");
//     scanf(" %c",&exit_char);
//     if(exit_char=='Y' || exit_char=='y'){
//         break;
//     }
//     printf("enter the number to count the digits :");
//     scanf("%d",&n);
    
//     printf("The number entered is %d\n",n);
//     printnumberofdigits(n);
//     }
//     printf("Exited successfully\n");
//     return 0;
// }
#include<stdio.h>
void reversenumber(int n){
    int a[10];
    int i=0;
    while(n!=0){
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%d",a[j]);
    }
}
int main(){
    int n;
    while(1){
    printf("\nenter the number to reverse upto 10 digits :");
    scanf("%d",&n);
    reversenumber(n);
}
return 0;
}
