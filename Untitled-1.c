// c was devloped by "Dennis" Ritchie  in 1972 at bell laborataries (USA)................................................................................

// static value& dynamic value........................................................


// # include <stdio.h>.......................static value
// int main (){
//     int age =18;
//     printf("riya age : %d\n",age);
//     return 0;
// }


//  # include <stdio.h>............................dynamic value
// int main (){
//     int age ;
//      printf("riya age : ");
//      scanf ("%d", &age );
//      printf ("riya age is : %d\n",age);
//    return 0;
//  }







//for loop..........question.............................................................................................




// #include <stdio.h> 
// int main (){
//     for(int riya=0;riya<=100;riya++){

    
//         printf("%d\n",riya);
//     }  
//     return 0;
// }


//  #include <stdio.h> 
// int main (){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){


    
//         printf("*");
//         }
//     printf("\n");
//     }
//     return 0;

// }

// #include <stdio.h> 
// int main (){
//     int table;
//     printf("enter table value");
//     scanf("%d" ,&table);
//     for(int riya=1;riya<=10;riya++){

    
//         printf(" table of %d *%dis:%d\n",riya);
//     }  
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n=2;
//     int  counter=0;
//     for (int i=1; i<=n; i++){
//         if(n%i==0){
//             counter++;
//         }
//     }
// if (counter ==2){
//     printf("%d is prime \n",n);
// }
// else {
//     printf("%d is not prime \n",n);

// }

// return 0;
// }



// while loop..........question..................................................................................................



// #include <stdio.h>
// int main(){
//     int i=0;
//     int n= 20;
//     while (i<7){
//         printf("%d Hello\n",i);
//             i++;
//         }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     void greet();

// }

// #include <stdio.h>
// int main (){
// printf("Hello Samyak \n");
// printf("Hello Aditya");

// return 0;
// }





// #include <stdio.h>

//     int add (int  a, int b){
//         printf("addition is %d\n",a+b);
//         return 0;
//     }
//     int main (){
//         add (5,6);
    
//         return 0;
//     }




//  #include <stdio.h>
// int main(){
//     int n=2;
//     int  counter=0;
//     int i=1;

//     while (i<= n){
//         if(n%i==0){
//           counter++;
//        }
//        i++;
//     }

//  if (counter ==2){
//     printf("%d is prime \n",n);
//  }
//  else {
//     printf("%d is not prime \n",n);

//  }

//  return 0;
//  }




// DO while loop ..................................................................................


// # include<stdio.h>
// int main(){
//     int n=1;
//     printf("static value true case ");
//     do{
//         printf("this loop run till :( count =%d)\n",n);
//         n++;
//     }
//         while ( n<=3);
    
//         printf("static value false case ");
//         int n1=5;
//         do{
//             printf("this loop run till :( count =%d)\n",n);
//             n1++;
//         }
//             while ( n<2);
    
//     return 0;
// }





// # include<stdio.h>
// int main(){
//     int n;
//     printf("dynamic value true case n: ");
//     scanf("%d", &n);
//     do{
//         printf("this loop run till :( count =%d)\n",n);
//         n++;
//     }
//         while ( n<=3);
//         printf("second case:\n");
//         int n1;

//         printf("dynamic value false case n1: ");
//         scanf ("%d",&n1);
//         do{
//             printf("this loop run till :( count =%d)\n",n);
//             n1++;
//         }
//             while ( n<2);
    
//     return 0;
// }
 




// function ........ question...?




// # include<stdio.h>
// void riya (){
//    printf("this is frist function\n");
// }
// void riya1( int roll){
//    printf("this is second function\n");
//    printf("My roll number is %d\n",roll);
// }
// int riya2 (int a,int b){
//    printf("this is third function\n");
//    printf("My sum is %d\n",a+b);
//    return 0;}

//    int riya3 (){
//       printf("this is fourth function");
   
//       return 0;
//    }
   
//       int main (){
//          riya();
//          riya1(30);
//          riya2(10,15);
//          riya3();
//          return 0;
//       }





//  # include<stdio.h>
//  void riya (){
//     printf("name  riya patel\n");
//  }
//  void riya1( int roll){
    
//    printf("My roll number is %d\n",roll);
//  }
// int riya2 (int year){
//     printf("year\n");
//     printf("My year %d\n",year);
//     return 0;}

//     int riya3 ( int sem){
//        printf(" sem%d\n",sem );
   
//       return 0;
//     }
   
//        int main (){
//           riya();
//           riya1(100);
//          riya2(2 );
//          riya3(4);
//           return 0;
//       }




// #include <stdio.h>
// void riya (){
//    int n;
//    for (int i=1; i<=10;i++)
//    printf("%d/n",i  );

// }
// int main (){
//    riya();
//    return 0;
// }



// #include <stdio.h>
// void riya (){
//    int  ; 
// printf(" ")

// }
// int main (){
//    riya(10);
//    return 0;
// }


// satatic Array ...... question ..................................................................................................................


// #include<stdio.h>
// int main (){
//    int arr []={10,20,30,40,50};
//    printf("this is array with index value \n");
//    printf("%d", arr [0]);
//    printf("%d", arr [1]);
//    printf("%d", arr [2]);
//    printf("%d", arr [3]);
//    printf("%d", arr [4]);
//    printf("\n");
//    printf("this is array with for loop value \n");

//    for (int i=0; i<5; i++){
//       printf("%d\n", arr[i]);
//    }
//    return 0;
// }


// ................print static &dynamic in a single code Array.........................................................................................



// #include <stdio.h>

// int main() {
    
// int arr [10];    
//     printf("enter array element/n");
//     for (int i=0; i<10; i++){
//         scanf("%d\n",&arr[i]);
//     }
//     for (int i=0; i<10; i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }





// #include <stdio.h>
// int main(){
    
    
// int arr1 []= {20,40,50,70};

//  int arr2 [5];    

//    printf("enter  dynamic array vlues");

//    for (int i=0; i<5; i++){
//         scanf("%d\n",&arr2[i]);
// }
// printf("this is static array example\n");
//    for (int i=0; i<4; i++){
    
   
//         printf("%d\n",arr1[i]);
//    }
//    printf("this is  dynamic array example\n");
//    for (int i=0; i<5; i++){
//         printf("%d\n",arr2[i]);  
//    }
//    return 0;
// }

   


//  #include <stdio.h>
//  int main(){
    
    
// int num1 []= {20,40,50,70};
// int sum1=0;


//    for (int i=0; i<4; i++){
//     sum1=sum1+num1[i];
//  }
//     printf("sum of Array is:%d" , sum1);
//    return 0;
// }

   
// max value of Array.......................................................................................................................

//  #include <stdio.h>
//  int main(){
    
//  int arr []= {20,40,50,70};
//  int max = arr[0];
// for (int i=0; i<4;i++){
// if ( max<arr[i]){
//    max=arr[i];
// }     
//  }
//     printf("maximum element is:%d" , max);
//    return 0;
// }



// 2D Array.......................................................................................................



// #include<stdio.h>
// int main(){
//     int arr [3][3] ={ 
//         {1,2,3},
//         {2,3,4},
//         {4,5,6}
//     };

// for (int i=0; i<3; i++){
// for (int j=0; j<3; j++){
// printf(" %d", arr [i] [j]);
// }  
//     }

// return 0;

// }
























// pointer..................................


//  #include <stdio.h>
// int main (){
//     int num=10;
//     int *p= &num;
//     printf("%d\n",num);

//     printf("%d\n",&num);

//     printf("%d\n",p);

//     printf("%d\n",*p);
// return 0;
// }







//  structure $ union...............................................................................................................


// #include <stdio.h>
// struct student{
//     int id;
//     char name [10];
// };

// int main (){
//     struct student s1 ={101,"riya"};
//     struct student s2;
//     printf ("enter id") ;
//     scanf ("%d" , &s2.id);
//     printf ("enter id") ;
//     scanf ("%d" , &s2.id);

//     printf ("enter name") ;
//     scanf ("%s" , &s2.name);
//     printf ("student detail is : /n id ;%d, name:%s", s1.id,s1.name );

// return 0;
// }



// #include <stdio.h>
// struct student{
//     int rollno ;
//     char name [10];
//     int class;

// };

// int main (){
//     struct student s1 ={100,"riya" ,2};
//     struct student s2;
//     struct student s3;
//     printf ("enter rollno") ;
//     scanf ("%d" , &s2.rollno);
//     printf ("enter rollno") ;
//     scanf ("%d" , &s2.rollno);

//     printf ("enter name") ;
//     scanf ("%s" , &s2.name);
//     printf ("student detail is : /n roll ;%d, name:%s,class:%d" , s1.rollno,s1.name ,s1.class );

// return 0;
// }






// FILE HEANDLING...........................................................................................



// # include<stdio.h>
// int main(){
//     FILE * p;
    
//     p=fopen("riya.txt","W");
//     if(p==NULL){
//         printf(" Error");
//         return 1;
//     }

//    p= fopen("riya.txt ", "r");
//    if(p==NULL){
//     printf(" Error");
//    }
//    else{
//     char ch;
//     printf(" Reading file");
//     while ((ch=fgetc(p))!= EOF){
//     putchar(ch);
//    }
//     fclose(p);
// } 

// p=fopen("riya.txt ", "a");
// if(p!=NULL){
//     fprintf(p," this line is appended");

// fclose (p);
// }

// p= fopen("riya.txt ", "r+");
// if(p!=NULL){
//     fprintf( p," r+ mode here");
// fclose (p);
// }
// if(p==NULL){
//     printf("File not open");
//     return 1;
// }

// p= fopen("riya.txt ", "W+");
// if(p=NULL){
//     printf( p," this is W+ mode ");
//     return 1;
// char ch;
// printf(" Reading file in W+ mode");
// while (( ch= fgetc(p))!= EOF){
//     putchar(ch);

// }
// fclose (p);
// }

// p= fopen("riya.txt ", "a+");
// if (p!=NULL){
//     fprintf( p," this is a+ mode ");
// rewind (p);
// char ch;
// printf(" Reading file in a+ mode");
// while (( ch= fgetc(p))!= EOF){
//     putchar(ch);

// }
// fclose (p);
// }
// return 0;
// }






// # include<stdio.h>
// int main(){
//     FILE *R;
//     R=fopen("riya.txt","w+");
// fputs("riyapatel",R);
// if(R==NULL){
// printf("Error");
// return 1;
// }
// char ch[100];
// printf("Reading file");
// while ( fgets(ch,sizeof(ch),R))
// {
//     printf("%s",ch);
// }
// fclose(R);
// return 0;
// }





// Jumping satements ..........................................................................



// #include <stdio.h>
// int main(){

// printf(" print of cotinue number\n");
// for  ( int i=1; i<=10;i++);
// if (i==7){
//     continue;
// }
// printf( " Reading page : %d\n",i);
// }
// return0;







// project******************************************************************************************8





// #include <stdio.h>
// int main(){
//     int n1;
//     int n2;
// char name []="riya";
// printf("hello %s, In the First project \n",name);
// printf("this is basic calculator for addition of two number \n");
// printf(" Enter the First value \n");
// scanf("%d",&n1);
// printf("Enter the second value \n");
// scanf("%d",&n2);

// printf(" Sum of %d and %d is : %d \n",n1,n2,n1+n2 );
// printf("thanks to use our project,program end! ");
// return 0;
// }



// Logical question............................**********************************
// i,j,a,b print




// #include <stdio.h> 
// int main (){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){


    
//         printf("*");
//         }
//     printf("\n");
//     }
//     return 0;

// }




// #include <stdio.h> 
// int main (){
//     for(int i=0;i<=5;i++){
//         for(int j=0;j<i;j++){


    
//         printf("*");
//         }
//     printf("\n");
//     }
//     return 0;

// }





#include <stdio.h> 
int main (){
    for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
        printf("*");
        }
    printf("\n");
    }

    for(int i=0;i<=5;i++){
        for(int j=i;j<4;j++){
        printf("*");
        }
    printf("\n");
    }

    return 0;
}


// #include <stdio.h> 
// int main (){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//         printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
// printf("*");
//         }
//     printf("\n");
//     }
//     for(int i=5;i>=1;i--){
//         for(int j=1;j<=5-i;j++){
//         printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
// printf("*");
//         }
//     printf("\n");
    
// }
//     return 0;
// }



// #include <stdio.h> 
// int main (){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//         printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
// printf("%d",j);
//         }
//     printf("\n");
//     }
//     for(int i=5;i>=1;i--){
//         for(int j=1;j<=5-i;j++){
//         printf(" ");
//         }
//         for(int j=1;j<=2*i-1;j++){
// printf("%d",j);
//         }
//     printf("\n");
    
// }
//     return 0;
// }



















































































