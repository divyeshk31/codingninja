#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define f(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rf(i,a,b) for(int i=(int)(a);i>=(int)(b);i--)
#define s(n)                        scanf("%d",&n)
#define p(n)                printf("%d\n",n)
#define sl(n)                       scanf("%lld",&n)
#define pl(n)               printf("%lld\n",n)
#define ll long long int
string reverse(string s){
	if(s.length()==0||s.length()==1){
		return s;
	}
	else return reverse(s.substr(1,s.length()))+s.substr(0,1);
}
int main()
{
	string s;
	cin>>s;
	cout<<reverse(s)<<endl;
	getch();
	return 0;
}