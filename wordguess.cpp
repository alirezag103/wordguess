#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void guess(int b)
{
    if(b==1)
        cout<<"True!!!\n";
}

int main()
{
	char a;
	int n,i,j,b;
	string word;
	string w;
	cin>>word;
	n=word.size();
	cout<<".\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n";
	for (i=0;i<n;i++)
	{

		cout<<"_ ";
		w[i]='_';
	}
	i=1;
	while(i<=(2*n))
	{
		j=0; b=1;
		cout<<"Guess a letter: ";
		cin>>a;	
		while(j<n)
		{
			if(a==word[j])
			{
				w[j]=a;
				guess(b);
				b=2;
			}
			j++;
		}
		if(b==2)
			for(j=0;j<n;j++)
				cout<<w[j]<<" ";
		else
		{
			cout<<"false!\nremaining chances: "<<2*n-i<<endl;
			i++;
		}
		for(j=0;j<n;j++)
			if(w[j]=='_')
			{
				b=0;
				break;
			}
		if(b!=0)
		{
			cout<<"Perfect, you found it!\n";
			break;
		}
	}
	return 0;
}


