//Macros, Global Variable, inline functions , Default Arguments;
#include <iostream>
using namespace std;

//Creation of Macros;
#define PI 3.14

//global variable;
//(but it comes into bad practice);
//(disadvantage is anybody can change it);
//and update it too;
int score =14;

void a(int& i){
    cout<<i<<endl;
    
}
void b(int& i){
    cout<<i<<endl;
    
}


void func(int a,int b){
    a++;
    b++;
    cout<<a<<b<<endl;
}


void print(int arr[],int n, int start){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int r = 3;
    double radius = PI*r*r;
    cout<<radius<<endl;
    
    local variable for main function
    life span just exist inside the function or block;
    int i = 5;
    a(i);
    b(i);
    
    {
        int i=2;
        cout<<i<<endl;
    }
    
    
    cout<<i<<endl;
    cout<<score<<endl;
    
    int arr[5]={1,4,7,8,9};
    int size = 5;
    print(arr,size,0);
    
    

    return 0;
}
