/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
#include <string>
#define lli long long int
#define llu unsigned long long int
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define Mset(p,i) memset(p,i,sizeof(p))
#define mlc(t,n) (t *)malloc(sizeof(t)*n)
#define NIL -1
#define INF 0x3f3f3f3f
#define TC int testcase; S(testcase); while(testcase--)
#define Pi 3.14159
using namespace std;

int main()
{
	int a,b;
	S(a);S(b);
	int c=1;

	while(1)
	{
		if(a < c)
		{
			printf("Vladik\n");
			break;
		}
		else
			a-=c;
		c++;

		if(b<c)
		{
			printf("Valera\n");
			break;
		}
		else
			b -= c;
		c++;
	}
}