//  freopen("self.in", "r", stdin);
//  freopen("corner1.txt", "w", stdout);
/* a == 97 \\ z == 122 \\ A == 65 \\ Z == 90 */
#include <iostream>
#include <stdio.h>
#include <stack>
#include <cmath>
#include<string>
#include<vector>
#include<bits/stdc++.h>
#include <numeric>
#define co continue
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define ll long long
#define el endl
#define TC int t; cin>>t; while(t--)
#define a_ban0ub_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
/*
ll binary_Search(deque<ll>arr, ll l, ll h, ll element)
{
    while (l <= h) {

        ll m = (l + h) / 2;


        if (arr[m] == element)
            return m;

        if (arr[m] > element)

            h = m - 1;

        else

            l = m + 1;

    }

    return -1;
}
//----------------------------------------------------------------------------------
  void insertion_Sort(ll arr[],ll n)
{
    ll kay,j;
    for (int i = 1; i <n ; ++i)
    {
        kay=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>kay)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=kay;
    }
}
//----------------------------------------------------------------------------------

void selection_sort(ll arr[],ll n)
{
    for (int i = 0; i < n-1; ++i)
    {
        ll m=i;
        for (int j = i+1; j <n ; ++j)
        {
            if(arr[m]>arr[j])
            {
                m=j;
            }
        }
        swap(arr[i],arr[m]);
    }
}
//----------------------------------------------------------------------------------

 void bubble_sort(ll arr[],ll n)
{
    for (int i = 0; i <n-1 ; ++i)
    {
        for (int j = 0; j < n-i-1; ++j)
        {

            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//----------------------------------------------------------------------------------

bool prime(ll x)
{
    for (ll i=2;i*i<=x;i++)
        if (x % i == 0) return 0;
    return x > 1;
}

//----------------------------------------------------------------------------------

  //  string s;
//    cin>>s;
//    for(char c:s) {
     //   int x=c-'a'+1;  // b =(98 - 'a = 97' == 1+1=2)
     //  cout<<x;
   // }

  //  a=1 , b=2 ,..., z=26

//----------------------------------------------------------------------------------

ll gcd(ll a,ll b){
    while(b!=0){
        ll temp=a;
        a=b;
        b=temp%b;
    }
    return a;
}

//----------------------------------------------------------------------------------

ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}
//----------------------------------------------------------------------------------

//    Sum_All_Between_Two_Numbers= B*(B+1)/2 - (A-1)*(A)/2;
//    Sum_All_Between_Two_Even_Numbers= B/2*(B/2+1)- (A-1)/2*((A-1)/2+1);

//----------------------------------------------------------------------------------

string alpha = "abcdefgh ijklmnopqrstuvwxyz";*/
//---------------------------------------------------------------------------------------------------------------------------------------





int main()
{
    a_ban0ub_on_da_code
    cout << "WELCOME TO THE PROJECT" << endl;
    char op;
    double n1,n2,ans;
    cout << "Enter the first number: "<<endl;
    cin >> n1;
    cout << "Enter the second number: "<<endl;
    cin >> n2;
    cout << "Choose an operation:" << endl;
    cout << " Addition (+)" << endl;
    cout << " Subtraction (-)" << endl;
    cout << " Multiplication (*)" << endl;
    cout << " Division (/)" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        ans = n1 + n2;
        cout << "Result: " << n1 << " + " << n2 << " = " << ans << endl;
        break;
    case '-':
        ans = n1 - n2;
        cout << "Result: " << n1 << " - " << n2 << " = " << ans << endl;
        break;
    case '*':
        ans = n1 * n2;
        cout << "Result: " << n1 << " * " << n2 << " = " << ans << endl;
        break;
    case '/':
        if (n2 != 0)
        {
            ans = n1 / n2;
            cout << "Result: " << n1 << " / " << n2 << " = " << ans << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Please choose a valid operation." << endl;
        break;
    }














}
