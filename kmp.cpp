#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getNext(string p)
{
    int l = p.length();
    vector<int> next(l);
    int i = 0,j = 1;
    next[0] = -1;
    while(j < l)
    {
        if(p[i] == p[j])
            next[j++] = ++i;//next[j] = i+1;i++;j++
        else if(i == 0)
            next[j++] = 0;
        else
            i = next[i];
    }
    return next;
}

void match(string s,string p,vector<int> next)
{
    int i = 0,j = 0;
    int sLen = s.length();
    int pLen = p.length();
    while(i < sLen && j < pLen)
    {
        if(j == -1 || s[i] == p[j])
        {
            i++;
            j++;
        }
        else
            j = next[j];
    }
    if(j < pLen)
        cout<<"Don't match";
    else
        cout<<"Match at "<<i-j;
}
int main()
{
    string s = "ahgbabcdabdhj";
    string p = "abcdabd";
    vector<int> next = getNext(p);
    match(s,p,next);
    return 0;
}