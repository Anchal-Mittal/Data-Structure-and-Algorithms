//============================================Find whether an array is subset of another array=========================

#include<iostream>
#include<algorithm>
using namespace std;

//=============================================findcsubquence==========================================================

void findsubsequence(int array1[10],int array2[10],int size1,int size2){
      int count=0;
      int i,j;
      if(size1<size2){
            i=0;
               while(j<size2){
                   if(array1[i]==array2[j]){
                      i++;
                      }
                  j++;
               }
       }
    
     else {
               i=0;
               while(j<size1){
                   if(array1[j]==array2[i])
                      i++;
                j++;
               
         }
        
    if((i==size1)||(i==size2))
     cout << "The array is  a subsequence to another array "<< endl;
    else 
     cout << "The array is not a subsequence to another array "<< endl;

}

//==================================main function=======================================================================

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
