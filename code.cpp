class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           int res=0;
           map<string,int>A;
           for(int i=0;i<n;i++)
           {
               A[list[i]]++;
           }
           for(auto s:A)
           {
               if(s.second==2)
               {
                   res++;
               }
           }
           return res;
        }

};
