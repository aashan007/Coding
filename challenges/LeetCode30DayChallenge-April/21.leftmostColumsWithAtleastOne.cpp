int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> temp = binaryMatrix.dimensions();
        int rows = temp[0];
        int cols = temp[1];
        int minimum =cols+1;
        for(int i=0;i<rows;i++){
            int start = 0;
            int end = cols;
            int mid=-1;
            int testRes=cols+1;
            while(start<end){
                mid = (start+end)/2;
               // cout<<i<<endl;
              //  cout<<start<<" "<<mid<<" "<<end<<" "<<binaryMatrix.get(i,mid)<<endl;
                if(binaryMatrix.get(i,mid)){
                    if(mid-1<0){
                        testRes=mid;
                        break;
                    }
                    if(binaryMatrix.get(i,mid-1)){
                        end=mid;
                        continue;
                    }
                    else{
               //         cout<<"Locked"<<endl;
                        testRes=mid;
                        break;
                    }
                }
                else{
                    start=mid+1;
                    continue;
                }
            }
         //   cout<<testRes<<endl;
            minimum = min(minimum,testRes);
        }
        if(minimum==cols+1){
            return -1;
        }
        return minimum;
       // return binaryMatrix[0][0];
    }