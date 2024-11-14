bool find3Numbers(int arr[], int n, int x) {
       sort(arr, arr + n);
        // Your Code Here
       for(int i=0;i<n-2;i++)
       {
           int j=i+1;
           int k = n-1;
           while(j<k)
           {
               int sum = arr[i]+arr[j]+arr[k];
               if(sum<x)
               {
                   j++;
               }
               else if(sum>x)
               {
                   k--;
               }
               else
               {
                   return true;
               }
           }
       }
       return false;
        
    }
