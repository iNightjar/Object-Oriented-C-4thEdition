//
// Created by Administrator on 2/6/2021.
//
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a , b ,c ;
    int counter=0;
    cin>>a>>b>>c;
    string temp = a + b;
    for (int i=0;i<c.length();i++)
    {
        for (int j=0;j<temp.length();j++)
                if (c[i]==temp[j])
                { counter++;
                break;
                }
    }
    cout<<counter<<endl;
    cout<<c.length()<<endl;
} */
/*
 *children and candlies
#include <bits/stdc++.h>
using namespace  std;
int main()
{
    float number;
    cin>>number;
    cout<<(number+1)*(number/2)<<endl;
}*/
/*
#include <bits/stdc++.h>
// tak and hotels
using namespace std;
int main()
{
    int totalnight,knights,forKnights,restnights;
    cin>>totalnight>>knights>>forKnights>>restnights;
    cout<<(totalnight-knights>=0 ?
    (knights*forKnights)+((totalnight-knights) * restnights) : (totalnight*forKnights));
} */
/*
#include <bits/stdc++.h>
using namespace std;
// elephent
int main()
{
    int distance;
    cin>>distance;
    cout<<(distance%5==0? distance/5 : distance/5 +1)<<endl;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
// capitalization
int main()
{
    string word;
    cin>>word;
    word [0] = toupper(word[0]);
    cout<<word<<endl;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
// next
int main()
{
    int number, score,count=0;
    cin>>number>>score;
    int arr[number];for(int i=0;i < number;i++){cin>>arr[i];}
    for (int x : arr)
        if (x >= score)count++;
    cout<<count<<endl;
}*/
/*
#include <stdio.h>
using namespace std;
// watermelon
int main ()
{
    int W;
    scanf ("%d",&W);
    if (W%2==0 && W!=2)
        printf ("YES\n");
    else
        printf ("NO\n");
}*/
/*
 * function
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;cin>>number;
    cout<<(number>=0? number : 0)<<endl;
} */
/*
// twiblr social network
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int followers, following;
    cin>>followers>>following;
    cout<<(followers*2 + 100)- following<<endl;
}*/
/*
// lucky numbers // dividing by 4 or 7
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;cin>>number;
    switch (number) {
        case 4: cout<<"YES"<<endl; break;
        case 7: cout<<"YES"<<endl; break;
        case 47: cout<<"YES"<<endl; break;
        case 747: cout<<"YES"<<endl; break;
        case 477: cout<<"YES"<<endl; break;
        case 774: cout<<"YES"<<endl; break;
        case 16: cout<<"YES"<<endl; break;
        case 42: cout<<"YES"<<endl; break;
        default : cout<<"NO"<<endl; break;
    }
} */
/*
#include <bits/stdc++.h>
using namespace std;
// bits
int main()
{
    int number,cn=0;cin>>number;
    string entered;for(int x=0;x<number;x++)
    {
        cin>>entered;
        if (entered[1] == '+') cn++;
        if (entered[1] == '-') cn--;
    }
    printf("%d\n", cn);
}*/
/*
#include <bits/stdc++.h>
using namespace std;
//  case of the zeros and ones
int main()
{
    int size,countzero=0,countone=0;scanf("%d", &size);
    char arr[size];scanf("%s",arr);
    for (int x=0;x<size;x++){
        if (arr[x]=='1') countone++;
        if (arr[x]=='0')countzero++;
    }
    // cout<<countone<< " "<<countzero<<endl;
    printf("%d\n", abs(countone - countzero));
}*/

