#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
const int K=100;
int maksimum(int A[][K],int n,int m)
{
	int mak = A[0][0];
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             if (A[i][j] > mak)
             {
                mak = A[i][j];
             }
         }
        
     }
return mak;
}
int maksimum(int B[],int s)
{   
    int mak=B[0];
	 for (int j = 0; j < s; j++)
         {
             if (B[j] > mak)
             {
                mak = B[j];
             }
         }
         return mak;
}

int main()
{  
    ifstream a("test.txt");
    int fjala;                         ///Kjo do sherbeje per te lexuar numrat nga skedari
    int i,j,n,m,s,A[K][K],B[K];                  ///n per rreshtat m per shtyllat, s eshte per vektorin
     if(a.is_open()){
     	a>>s>>n>>m;           ///si fillim i lexoj kto te treja 
     	cout<<n<<m;                    ///printoj vlerat e n dhe m
     	for(i=0;i<s;i++)
     	{
     		a>>fjala;
     		B[i]=fjala;
		 }
     	for(i=0;i<n;i++)
     	{
     		for(j=0;j<m;j++)
     		{
     			a>>fjala;
     			A[i][j]=fjala;         ///pasaj lexoj ato te matrices
			 }
		 }
  
		a.close();             ///mbyll skedarin
	}
	cout<<endl;
	cout<<"----------------------"<<endl;
	cout<<"Afishimi i vektorit"<<endl;
	cout<<"----------------------"<<endl;
		for(i=0;i<s;i++)
     	{
     		
     		cout<<B[i]<<" ";
		 }
		 cout<<endl;
		 cout<<"------------------"<<endl;
		 
	cout<<"Afishimi i vektorit"<<endl;
	cout<<"----------------------"<<endl;
			for(i=0;i<n;i++)                         ///per siguri i printoj vlerat e matrices
     		{
     		for(j=0;j<m;j++)
     		{ 
     			cout<<" "<<A[i][j]<<" ";
			 }
			 cout<<endl;
		 }
		 cout<<"----------------------"<<endl;
	cout<<"Maksimumet"<<endl;
	cout<<"----------------------"<<endl;
    cout<<"Maksimumi i vektorit:  "<<maksimum(B,s)<<endl;    ///therritja e funksionit
	cout<<"Maksimumi i matrices:  "<<maksimum(A,n,m)<<endl;    ///therritja e funksionit
    
	return 0;
}
