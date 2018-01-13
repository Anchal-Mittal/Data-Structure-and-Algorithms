#include<iostream>
#include<algorithm>
using namespace std;

void findsubsequence(int array1[10],int array2[10],int size1,int size2){
    sort(array1,array1+size1);
    sort(array2,array2+size2);
    int flag=0;
    if(size1<size2){
        for(int i=0;i<size1;i++)
               if(array1[i]!=array2[i]){
                 flag=1;
                 break;
               }
    }
    else
    for(int i=0;i<size2;i++){
               if(array2[i]!=array1[i]){
                 flag=1;
                 break;
       }
    }
    if(flag!=0)
     cout << "The array is not a subsequence to another array "<< endl;
    else 
     cout << "The array is a subsequence to another array "<< endl;

}
int main(){
    int size1, size2,array1[10],array2[10];
    cout << "ENTER THE SIZE OF FIRST ARRAY " << endl;
    cin >>size1;
    cout << "ENTER THE ELEMENTS OF THE ARRAY 1"<<endl;
    for(int i=0;i<size1;i++)
        cin >> array1[i];
    cout << "ENTER THE SIZE OF THE SECOND ARRAY "<< endl;
    cin >> size2;
    cout << "ENTER THE ELEMENTS OF THE ARRAY 2 "<< endl;
    for(int i=0;i<size2;i++)
       cin >>array2[i];    
    findsubsequence(array1,array2,size1,size2);   
}
