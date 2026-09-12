// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"hello everyone\n";  // \n & <<endl works same in c plus
//     cout<<"my name is abhishek";
   // }  

// concept 2(using conditionals,scanf,variables,switch)
// #include <iostream>
// using namespace std;
// int main(){  // you don't have to use %d %f %c
//     int i;
//     cout<<"Enter the age:";
//     cin>>i;
//     cout<<"your age is "<<i<<endl;
//     if(i<0){cout<<"not possible\n"; }
//     if(i<18 && i>0){cout<<"you have to work\n";}
//     else if(i>=18 && i<=70){cout<<"you have to work and can watch tv\n";}
//     else {cout<<"you have to watch tv\n";}
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b = 20;
//     printf("%d\n", a + b);  // valid in C++
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"1.addition,2.subtraction,3.multiplication,4.division\n";
//     int i,a,b;
//     cout<<"enter 1st no:";
//     cin>>a;
//     cout<<"enter 2nd no:";
//     cin>>b;
//     cout<<"select the case:";
//     cin>>i;
//     switch(i){case 1:cout<<"sum of a and b:"<<a+b;
//         break;
//         case 2:cout<<"diff of a and b:"<<a-b;
//         break;
//         case 3:cout<<"mul of a and b:"<<a*b;
//         break;
//         case 4:cout<<"div of a and b:"<<(float)a/b;
//         break;
//         default:cout<<"no further options";
//     }
// }

//concept 3 (loops,function,typecasting,array) //multidimensional
// #include <iostream>
// using namespace std;
// int main(){
//     int i=0;
//     while(i<5){
//         cout<<"hello person"<<i+1<<endl;
//         i++; //endl when you give space after everything
//     }
// }
// int main(){
//     int i=0;
//     for(i=0;i<5;i++){
//         cout<<i+1;
//     }
// }
// int main(){ int i=0;
//     do{
//         cout<<i+1<<endl;
//         i++;
//     }while(i>3);  // print only once then stop
// }

// int sum(int a, int b){
//    int c= a+b;
//    return c;
// }
// int main(){cout<<"the sum is:"<<sum(5,3);}

//typecasting
// int main(){ float a=82.45;
//    cout<<(int) a;}

// int main(){
// int arr[30];
// int i=0,sum=0;
// for(i=0;i<5;i++){
//    cout<<"enter the no\t"<<i+1<<endl;
//    cin>>arr[i];}
//    for(i=0;i<5;i++){
//       cout<<"the no are:"<<arr[i]<<endl;
//       sum=sum+arr[i];
//    }
//    cout<<"the sum is:"<<sum;
// }

// concept 4(string,pointer)
#include <iostream>
using namespace std;
// #include <string>
// int main(){
//    string name="abhishek";
//    cout<<"hello everyone my name is "<<name<<endl;
//    cout<<"length of string is:"<<name.length()<<endl;
//    cout<<"substring of:"<<name.substr(2,7);
// }
