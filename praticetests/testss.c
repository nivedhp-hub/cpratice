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
// #include<stdio.h>

// int checkgcd(int a, int b){
//     int temp = 0;

//     if(a > 0 && b == 0) return a;
//     if(a == 0 && b > 0) return b;
//     if(a == 0 && b == 0) return 0;

//     int c = (a < b) ? a : b;

//     for(int i = 1; i <= c; i++){
//         if(a % i == 0 && b % i == 0){
//             temp = i;
//         }
//     }
//     return temp;
// }

// int checklcm(int a, int b){
//     if(a == 0 || b == 0)
//         return 0;

//     int gcd = checkgcd(a, b);
//     int lcm = (a * b) / gcd;

//     if(lcm < 0) lcm = -lcm;
//     return lcm;
// }

// int main(){
//     int a, b;

//     while(1){
//         printf("enter the numbers to check the greatest common factor and LCM: ");
//         scanf("%d %d", &a, &b);

//         if(a < 0 || b < 0){
//             printf("Negatives enter valid \n");
//             continue;
//         }

//         int gcd = checkgcd(a, b); 
//         printf("The GCD of %d and %d is %d\n", a, b, gcd);

//         int lcm = checklcm(a, b);
//         printf("The LCM of %d and %d is %d\n\n", a, b, lcm);
//     }

//     return 0;
// }
//sum of digits of a number using functions
// #include<stdio.h>
// int getsumofdigits(int num){
//     int sum=0;
//     while(num>0){
//     int remainder=num%10;
//     sum=sum+remainder;
//     num=num/10;
// }
// return sum;
// }
// int main(){
//     int num,total;
//     while(1){
//     printf("enter the number that you want to find the sum of digits :");
//     scanf("%d",&num);
//     if(num<0){
//         printf("Enter a valid positive number\n");
//         continue;
//     }
//     total = getsumofdigits(num);
//     printf("The sum of digits of %d is %d\n", num, total);
// }
//     return 0;
// }
//code two reverse an integer using functions
// #include<stdio.h>
// int reversenumber(int num){
//     int revert=0;
//     while(num>0){
//         int digit=num%10;
//         revert=(revert*10)+digit;
//         num=num/10;
//     }
//     return revert;
// }
// int main(){
//     int num,reverse,sign=1;
//     while(1){
//     printf("enter the number to reverse :");
//     scanf("%d",&num);
//     if(num<0){
//         num=-num;
//         sign=-1;
//     }
//     reverse=reversenumber(num);
//     reverse=reverse*sign;
//     printf("The reverse of the number is %d\n",reverse);
//     }
//     return 0;
// }
//code to find whether the number is an amstrong number or not using functions
// #include<stdio.h>
// #include<math.h>
// int isarmstrong(int num){
//     int sum=0,originalnum=num;
//     while(num>0){
//         int remainder=num%10;
//         sum=sum+pow(remainder,3);
//         num=num/10;
//     }
//     printf("%d\n",sum);
//     if(originalnum==sum){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int number,condition;
//     while(1){
//     printf("enter the number that you want to check whether it is armstrong:");
//     scanf("%d",&number);
//     condition=isarmstrong(number);
//     if(condition==1){
//         printf("The number %d is Armstrong Number\n",number);
//     }
//     else{
//         printf("The number %d is not an Armstrong number\n",number);
//     }
    
// }
// return 0;
// }
//program to find the factorial of a number using functions
// #include<stdio.h>
// long long checkfactorial(int num){
//     long long fact=1;
//     if(num==0){
//         return fact;
//     }
//     for(int i=num;i>=1;i--){
//          fact=fact*i;
//     }
//     return fact;
    
// }
// long long checkrecursionfactorial(int num){
//     if (num==0 || num==1){
//         return 1;
//     }
//     else{
//         return num*checkrecursionfactorial(num-1);
//     }
// }
// int main(){
//     int number;
//     while(1){
//     printf("enter the number that you want to find the factorial :");
//     scanf("%d",&number);
//     if(number<0){
//         printf("invalid enter valid number\n");
//         continue;
//     }
//     long long factorial=checkfactorial(number);
//     printf("The factorial of number %d is %lld\n",number,factorial);
//     long long recfactorial=checkrecursionfactorial(number);
//     printf("The factorial of number %d using recursion is %lld\n",number,recfactorial); 
// }
//     return 0;
// }
//printing patterns using functions
// #include<stdio.h>   
// void printfigure(int a,int b){
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("*\t");

//         }
//         printf("\n");
//     }
// }
// int main(){
//     int row,coloumn;
//     printf("enter the dimensions you want to :");
//     scanf("%d %d",&row,&coloumn);
//     printfigure(row,coloumn);
//     return 0;
// }
//printing right triangle
// #include<stdio.h>   
// void printfigure(int a){
//     for(int i=0;i<a;i++){
//         int count=i+1;
//         while(count!=0){
//             printf("*\t");
//             count--;
//         }
//         printf("\n");

//     }
// }
// int main(){
//     int row;
//     printf("enter the dimensions you want to :");
//     scanf("%d",&row);
//     printfigure(row);
//     return 0;
// }
//inverted right triangle
// #include<stdio.h>   
// void printfigure(int a){
//     for(int i=a;i>0;i--){
//         int count=i;
//         while(count!=0){
//             printf("*\t");
//             count--;
//         }
//         printf("\n");

//     }
// }
// int main(){
//     int row;
//     printf("enter the dimensions you want to :");
//     scanf("%d",&row);
//     printfigure(row);
//     return 0;
// }
//printing pyramid pattern
// #include<stdio.h>
// void printpyramid(int row){
//     for(int i=0;i<row;i++){
//         int count=2*i+1;
//         int space=row-i-1;
//         for(int j=0;j<space;j++){
//             printf(" \t");
//         }
//         while(count!=0){
//         printf("*\t");
//         count--;
//     }
//     printf("\n");
//     }
// }
// int main(){
//     int rows;
//     printf("enter the rows for the pyramid:");
//     scanf("%d",&rows);
//     printpyramid(rows);
//     return 0;
// }
//inverted pyramid
// #include<stdio.h>
// void invertedpyramid(int row){
//     int count;
//     for(int i=0;i<row;i++){
//         int s=i;
//         while(s!=0){
//             printf(" \t");
//             s--;
//         }
//         count=(((row-i)*2)-1);
//         while(count!=0){
//             printf("*\t");
//             count--;
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int rows;
//     printf("Enter the rows for inverted pyramid :");
//     scanf("%d",&rows);
//     invertedpyramid(rows);
//     return 0;
// }
//floyd triangle
// #include<stdio.h>
// void floydtriangle(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         int s=i;
//         while(s!=0){
//             sum+=1;
//         printf("%d\t",sum);
//         s--;
//     }
//     printf("\n");
// }
// }
// int main(){
//     int rows;
//     printf("Enter the rows for floyd triangle :");
//     scanf("%d",&rows);
//     floydtriangle(rows);
//     return 0;
// }
//pascal triangle
// #include <stdio.h>

// // Function to compute nCr
// int nCr(int n, int r) {
//     long long res = 1;

//     if (r > n - r)
//         r = n - r;

//     for (int i = 0; i < r; i++) {
//         res = res * (n - i) / (i + 1);
//     }

//     return res;
// }

// // Function to print Pascal's Triangle
// void printPascal(int rows) {
//     for (int i = 0; i < rows; i++) {

//         // Print spaces
//         for (int s = 0; s < rows - i - 1; s++)
//             printf("  ");

//         // Print values
//         for (int j = 0; j <= i; j++)
//             printf("%d   ", nCr(i, j));

//         printf("\n");
//     }
// }

// int main() {
//     int rows;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     printPascal(rows);

//     return 0;
// }
//diamond pattern
// #include <stdio.h>

// void diamond(int n) {
//     // Upper half
//     for (int i = 0; i < n; i++) {
//         for (int s = 0; s < n - i - 1; s++)
//             printf(" ");
//         for (int star = 0; star < 2 * i + 1; star++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower half
//     for (int i = n - 2; i >= 0; i--) {
//         for (int s = 0; s < n - i - 1; s++)
//             printf(" ");
//         for (int star = 0; star < 2 * i + 1; star++)
//             printf("*");
//         printf("\n");
//     }
// }

// int main() {
//     int rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     diamond(rows);

//     return 0;
// }
///fibonacci series using functions
// #include<stdio.h>
// void printfibo(int n){
// //     int a[n];
// //     for(int i=0;i<n;i++){
// //         if(i==0){
// //             a[i]=0;
// //             printf("%d\t",a[i]);
// //             continue;
// //         }
// //         if(i==1){
// //             a[i]=1;
// //             printf("%d\t",a[i]);
// //             continue;
// //         }
// //         else{
// //             a[i]=a[i-1]+a[i-2];
// //             if(a[i]>n){
// //                 break;
// //             }
// //             printf("%d\t",a[i]);
// //         }
// //     }
// // }
// int t1=0,t2=1,next;
// printf("%d\t",t1);
// if(n>t2){
//     printf("%d\t",t2);
// }
// next=t1+t2;
// while(next<n){
//     printf("%d\t",next);
//     t1=t2;
//     t2=next;
//     next=t1+t2;
// }}
// int main(){
//     int number;
//     printf("enter the number upto which u need the fibonnacii:");
//     scanf("%d",&number);
//     printfibo(number);
//     return 0;
// }
//program to check the duplicate elements in an array using functions
// #include<stdio.h>
// void inputarray(int a[],int size){
//     printf("enter the elements for the array:");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
// }
// void printarray(int a[],int size){
//     printf("the elements in the array are :");
//     for(int i=0;i<size;i++){
//         printf("%d\t",a[i]);
//     }
// }
// checkduplicate(int a[],int size){
//     int flag=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(a[i]==a[j]){
//                 printf("The duplicate element is %d\n",a[i]);
//                 flag=1;
//             }
//         }
//     }
//     if(flag==0){
//         printf("No duplicate elements found in the array\n");
//     }
// }
// void removeduplicate(int a[],int *size){
//     for(int i=0;i<*size;i++){
//         for(int j=i+1;j<*size;j++){
//             if(a[i]==a[j]){
//                 for(int k=j;k<*size-1;k++){
//                     a[k]=a[k+1];
//                 }
//                 (*size)--;
//                 j--;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     printf("enter the number of elements to be in the array:");
//     scanf("%d",&n);
//     int a[n];
//     inputarray(a,n);
//     printarray(a,n);
//     checkduplicate(a,n);
//     removeduplicate(a,&n);
//     printf("The array after removing duplicates is :");
//     printarray(a,n);
//     return 0;

// }
//Array rotation
// #include<stdio.h>
// void inputarray(int a[],int size){
//     printf("enter the elements for the array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
// }
// void printarray(int a[],int size){
//      for(int i=0;i<size;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// void shiftarray(int a[],int shift,int size){
//     int shiftcount=shift%size;
//     while(shiftcount--){
//         int temp=a[0];
//         for(int i=0;i<size-1;i++){
//             a[i]=a[i+1];
//         }
//         a[size-1]=temp;
//     }
// }

// int main(){
//     int size,shift;
//     printf("enter the size of the array :");
//     scanf("%d",&size);
//     int a[size];
//     inputarray(a,size);
//     printarray(a,size);
//     printf("enter the number of positions to be be shifted left in array :");
//     scanf("%d",&shift);
//     shiftarray(a,shift,size);
//     printarray(a,size);
//     return 0;
// }
//right rotate array
// #include<stdio.h>
// void inputarray(int a[],int size){
//     printf("enter the elements for the array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",&a[i]);
//     }
// }
// void printarray(int a[],int size){
//      for(int i=0;i<size;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\n");
// }
// void shiftarrayright(int a[],int shift,int size){
//     int shiftcount=shift%size;
//     while(shiftcount--){
//         int temp=a[size-1];
//         for(int i=size-1;i>0;i--){
//             a[i]=a[i-1];
//         }
//         a[0]=temp;
//     }
// }

// int main(){
//     int size,shift;
//     printf("enter the size of the array :");
//     scanf("%d",&size);
//     int a[size];
//     inputarray(a,size);
//     printarray(a,size);
//     printf("enter the number of positions to be be shifted right in array :");
//     scanf("%d",&shift);
//     shiftarrayright(a,shift,size);
//     printarray(a,size);
//     return 0;
// }
//array operations using pointers
// #include<stdio.h>
// void inputarray(int*p,int size){
//     printf("enter the elements to be stored in the array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",p+i);
//     }
// }
// void printarray(int*p,int size){
//     for(int i=0;i<size;i++){
//         printf("%d\t",*(p+i));
//     }
//     printf("\n");
// }
// void printsum(int*p,int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+*(p+i);
//     }
//     printf("sum ofthe elements in array =%d",sum);
//     printf("\n");
// }
// void findminimumofarray(int *p, int size) {
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (*(p + i) > *(p + j)) {   // ascending!
//                 int temp = *(p + i);
//                 *(p + i) = *(p + j);
//                 *(p + j) = temp;
//             }
//         }
//     }

//     printf("The smallest element in the array is %d\n", *p);
// }
// void findmaximumofarray(int *p, int size) {
//     for (int i = 0; i < size; i++) {
//         for (int j = i + 1; j < size; j++) {
//             if (*(p + i) < *(p + j)) {   // descending!
//                 int temp = *(p + i);
//                 *(p + i) = *(p + j);
//                 *(p + j) = temp;
//             }
//         }
//     }

//     printf("The largest element in the array is %d\n", *p);
// }

// int main(){
//     int size;
//     int*p;
//     printf("enter the size of the array:");
//     scanf("%d",&size);
//     int a[size];
//     p=a;
//     inputarray(p,size);
//     printarray(p,size);
//     printsum(p,size);
//     findminimumofarray(p,size);
//     findmaximumofarray(p,size);
//     printf("\n");
//     return 0;
// }
//swapping 2 numbers using pointers
// #include<stdio.h>
// void swap(int*x,int*y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a,b;
//     int*p,*q;
//     p=&a;
//     q=&b;
//     printf("enter two numbers that you want to swap : ");
//     scanf("%d %d",p,q);
//     printf("the numbers are a=%d and b=%d\n",*p,*q);
//     swap(p,q);
//     printf("the numbers are a=%d and b=%d\n",*p,*q);
//     return 0;
// }
//maximum and minum of an array only using pointers
// #include<stdio.h>
// void inputarray(int*p,int size){
//     printf("enter the elements you want to store in array :");
//     for(int i=0;i<size;i++){
//         scanf("%d",p+i);
//     }
// }
// void printarray(int*p,int size){
//     for(int i=0;i<size;i++){
//         printf("%d\t",*(p+i));
//     }
// }
// void maxofarray(int*p,int size){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(*(p+i)<*(p+j)){
//                 int temp=*(p+i);
//                 *(p+i)=*(p+j);
//                 *(p+j)=temp;
//             }
//         }
//     }
//     printf("the sorted array is :\n");
//     printarray(p,size);
//     printf("\n");
//     printf("The maximum element in the array is %d\n",*p);
// }
// void minofarray(int*p,int size){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(*(p+i)>*(p+j)){
//                 int temp=*(p+i);
//                 *(p+i)=*(p+j);
//                 *(p+j)=temp;
//             }
//         }
//     }
//     printf("the sorted array is :\n");
//     printarray(p,size);
//     printf("\n");
//     printf("The minimum element in the array is %d\n",*p);
// }
// int main(){
//     int n;
//     printf("enter the size of the array :");
//     scanf("%d",&n);
//     int a[n];
//     int*p=a;
//     inputarray(a,n);
//     printarray(a,n);
//     printf("\n");
//     maxofarray(a,n);
//     minofarray(a,n);
//     return 0;
// }
// #include <stdio.h>

// void inputarray(int *p, int size) {
//     printf("Enter elements: ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", p + i);
//     }
// }

// void printarray(int *p, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d\t", *(p + i));
//     }
//     printf("\n");
// }

// int findMax(int *p, int size) {
//     int max = *p;        // first element
//     for (int i = 1; i < size; i++) {
//         if (*(p + i) > max) {
//             max = *(p + i);
//         }
//     }
//     return max;
// }

// int findMin(int *p, int size) {
//     int min = *p;
//     for (int i = 1; i < size; i++) {
//         if (*(p + i) < min) {
//             min = *(p + i);
//         }
//     }
//     return min;
// }

// int main() {
//     int n;
//     printf("Enter array size: ");
//     scanf("%d", &n);

//     int a[n];
//     inputarray(a, n);

//     printf("Array: ");
//     printarray(a, n);

//     printf("Max = %d\n", findMax(a, n));
//     printf("Min = %d\n", findMin(a, n));

//     return 0;
// }
//reversing an array only by using the pointers
#include<stdio.h>
void inputarray(int*p,int size){        
    printf("enter the elements you want to store in array :");
    for(int i=0;i<size;i++){
        scanf("%d",p+i);
    }
}
void printarray(int*p,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",*(p+i));
    }
}
void reversearray(int*p,int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=*(p+start);
        *(p+start)=*(p+end);
        *(p+end)=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    int*p=a;
    inputarray(a,n);
    printarray(a,n);
    printf("\n");
    reversearray(a,n);
    printf("The reversed array is :\n");
    printarray(a,n);
    return 0;
}


