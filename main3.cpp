
#include <iostream>
#include <sstream>
using namespace std;

int main (){
	string stroka1, stroka2;
	int a[10], b[10], c[20]; int i; int p=0;
	getline(cin, stroka1);
	istringstream stream1(stroka1);
	for(i=0; i<10; i++){
	    if(!(stream1>>a[i])){
	        cout<<"An error has occurred while reading the input sequence."<<endl;
	        return -1;
	    }
	    if(p>a[i]){
	        cout<<"The input sequence must be non-decreasing."<<endl;
	        return -1;
	    }
	    p=a[i];
	}
	p=0;
	getline(cin, stroka2);
	istringstream stream2(stroka2);
	for(i=0; i<10; i++){
	    if(!(stream2>>b[i])){
	        cout<<"An error has occurred while reading the input sequence."<<endl;
	        return -1;
	    }
	    if(p>b[i]){
	        cout<<"The input sequence must be non-decreasing."<<endl;
	        return -1;
	    }
	    p=b[i];
	}
	for (int i=0; i<20; i++)
	{
		if (i < 10) c[i] = a[i];
		else c[i] = b[i-10];
	}
	for (int i=0; i<19; i++) 
	{
		for (int j=0; j<19-i; j++)
		{
			if (c[j] > c[j+1])
			{
				int t = c[j];
				c[j] = c[j+1];
				c[j+1] = t;
			}
		}
	}
	for (int i=0; i<20; i++)
	{
		cout << c[i]<< " ";
	}
	return 0;
}
