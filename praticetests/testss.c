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
// #include<stdio.h>
// void reversenumber(int n){
//     int a[10];
//     int i=0;
//     while(n!=0){
//         a[i]=n%10;
//         n=n/10;
//         i++;
//     }
//     for(int j=0;j<i;j++){
//         printf("%d",a[j]);
//     }
// }
// int main(){
//     int n;
//     while(1){
//     printf("\nenter the number to reverse upto 10 digits :");
//     scanf("%d",&n);
//     reversenumber(n);
// }
// return 0;
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
// #include<stdio.h>
// int checkgcd(int a,int b){
//     int temp=0;
//     if(a>0&&b==0){
//         return a;
//     }
//     if(a==0&&b>0){
//         return b;
//     }
//     if(a==0&&b==0){
//         return 0;
//     }
//     if(a>0&&b>0){
//         int c;
//         if(a>b){
//             c=b;
//         }
//         else{
//             c=a;
//         }
//         for(int i=1;i<=c;i++){
//             if(a%i==0&&b%i==0){
//                 temp=i;
//             }
//         }
//         return temp;
//     }

// }
// int main(){
//     int a,b,checker;
//     while(1){
//     printf("enter the numbers to check the greatest common factor :");
//     scanf("%d %d",&a,&b);
//     if(a<0||b<0){
//         printf("Negatives enter valid \n");
//         continue;
//     }
//     checker=checkgcd(a,b); 
//     printf("The GCD of %d and %d  is %d\n",a,b,checker);
// }
//     return 0;
// }
//LCM of two numbers using functions
#include<stdio.h>

int checkgcd(int a, int b){
    int temp = 0;

    if(a > 0 && b == 0) return a;
    if(a == 0 && b > 0) return b;
    if(a == 0 && b == 0) return 0;

    int c = (a < b) ? a : b;

    for(int i = 1; i <= c; i++){
        if(a % i == 0 && b % i == 0){
            temp = i;
        }
    }
    return temp;
}

int checklcm(int a, int b){
    if(a == 0 || b == 0)
        return 0;

    int gcd = checkgcd(a, b);
    int lcm = (a * b) / gcd;

    if(lcm < 0) lcm = -lcm;
    return lcm;
}

int main(){
    int a, b;

    while(1){
        printf("enter the numbers to check the greatest common factor and LCM: ");
        scanf("%d %d", &a, &b);

        if(a < 0 || b < 0){
            printf("Negatives enter valid \n");
            continue;
        }

        int gcd = checkgcd(a, b); 
        printf("The GCD of %d and %d is %d\n", a, b, gcd);

        int lcm = checklcm(a, b);
        printf("The LCM of %d and %d is %d\n\n", a, b, lcm);
    }

    return 0;
}

