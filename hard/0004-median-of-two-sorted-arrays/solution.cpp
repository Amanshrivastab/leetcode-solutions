          int n= merged.size();

            if(n%2==1){
                return merged[n/2];
            }
          return ( merged[n / 2-1]+ merged[n/2] )/ 2.0;
    }
};
