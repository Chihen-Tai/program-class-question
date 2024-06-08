#include <stdio.h>
#include <string.h>
#define MAX_A 1000000
int bag[26];
int cnt[MAX_A][26];
int w[MAX_A];
int tmpans,ans;
int score[26];
void enumerate(int index)
{
    if(index==a)
    {
        ans=max(ans,tmpans);
        return;
    }
    //cannot pick s[index]
    enumerate(index+1);
    //do check:can i form s[index]
    for(int i=0;i<26;i++)
    {
        if(cnt[index][i]>bag[i])
        {
            return;
        }
    }
    //yes,i cna form s[index]
    //-update state
    for(int i=0;i<26;i++)
    {
        bag[i]=bag[i]-cnt[index][i];
        tmpans=tmpans+=cnt[index][i]*score[i];
    }
    // -proceed to next level of recursion
    enumerate(index+1);
    //recover
    for(int i=0;i<26;i++){

        bag[i]+=cnt[index][i];
        tmpans-=cnt[index][i]*score[i];
    }
}

int main()
{
    scanf("%d",&)
    for(int i=0;i<b;i++)
    {
        bag[w[i]-'a']++;
    }
    return 0;
}