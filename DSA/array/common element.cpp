// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
    
                // Brute force
            // //Expected Time Complexity: O(n1 + n2 + n3)
            // //Expected Auxiliary Space: O(n1 + n2 + n3)
                        
            //                 map<int,int> mp1,mp2,mp3;
            //             for(int i=0;i<n1;i++)
            //             {
            //                 mp1[A[i]]++;
                            
            //             }
            //             for(int i=0;i<n2;i++)
            //             {
            //                 mp2[B[i]]++;
                            
                            
            //             }
            //             for(int i=0;i<n3;i++)
            //             {
            //                 mp3[C[i]]++;
                            
            //             }
            //             vector<int> ans;
            //             for(int i=0;i<n1;i++)
            //             {
            //                 if(mp1[A[i]]&&mp2[A[i]]&&mp3[A[i]])
            //                 {
            //                     ans.push_back(A[i]);
            //                     mp1[A[i]]=0;
            //                 } 
                        
            //             }
            //             return ans;
    
    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            //Time complexity 
            int i=0,j=0,k=0;
            vector<int> ans;
            while(i<n1&&j<n2&&k<n3)
            {
                if(A[i]==B[j]&&B[j]==C[k])
                {
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else
                {
                    k++;
                }
                while(A[i-1]==A[i])
                i++;
                while(B[j-1]==B[j])
                j++;
                while(C[k-1]==C[k])
                k++;
            }
            return ans;
        }
