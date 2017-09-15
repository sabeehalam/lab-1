#include<iostream>
#include<conio.h>

void stras(int *a, int *b,int *r, int n){
	if(n==1){
		*r+=*a * *b;
	}
	else
	{
		stras(a,b,r,n/4);
		stras(a, b+(n/4), r+(n/4), n/4);
	    stras(a+2*(n/4), b, r+2*(n/4), n/4);
		stras(a+2*(n/4), b+(n/4), r+3*(n/4), n/4);
		stras(a+(n/4), b+2*(n/4), r, n/4);
	    stras(A+(n/4), B+3*(n/4), R+(n/4), n/4);
	    stras(a+3*(n/4), b+2*(n/4), r+2*(n/4), n/4);
		stras(a+3*(n/4), b+3*(n/4), r+3*(n/4), n/4);
	}
}
\int main()
	{
	    int a[10][10],b[10][10],r[10][10]*a1,*b1,*r1,n;
	    cout<<"Enter order of matrix:"<<endl;
	    for(int i=1;i<=n;i++)
	    for(intj=1;j<=n;j++)
	    a[i][j]=rand()/10000;
	    a1=&a[1][1];
	    for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
	    b[i][j]=rand()/10000;
	    b1=&b[1][1];
	    r1=&r[1][1];
	    cout<<"Matrix A:\n"<<endl;
	    for(int i=1;i<=n;i++)
	    {
	            for(j=1;j<=n;j++)
	            {
	                cout<<a[i][j]<<endl;
	            }
	            cout<<"\n"<<endl;
	    }
	    cout<<"Matrix B:"<<endl;
	    for(int i=1;i<=n;i++)
	    {
	            for(int j=1;j<=n;j++)
	            {
	                    cout<<"\t",b[i][j];
	            }
	            cout<<"\n";
	    }

	    stras(a1,b1,r1,n);
	    cout<<"\nResultant:"<<endl;
	    for(int i=1;i<=n;i++)
	    {
	            for(int j=1;j<=n;j++)
	            {
	                   cout<<"\t",r[i][j];
	            }
	            cout<<endl;
	    }
	} 

