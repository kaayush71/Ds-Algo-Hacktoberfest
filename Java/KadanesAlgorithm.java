class KadanesAlgorithm {
    public int maxSubArray(int[] a){ 
        int max=Integer.MIN_VALUE;
        int currentSum=0;
        
        for(int i=0;i<a.length;i++){
            currentSum+=a[i];
            if(currentSum>max)    max=currentSum;
            if(currentSum<0)      currentSum=0;
         }
         return max;
    }
}