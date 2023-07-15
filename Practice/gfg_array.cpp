#include <iostream>
#include <queue>

using namespace std;
int main()
{

    // for the order of O(nlogn)
    // priority_queue<int> p;
    // int A[4]={1, 3, 4, 1};
    	
    // 	for(int i=0;i<4;i++){
    // 	    p.push(A[i]);
    // 	}
    	
    // 	int a=p.top();
    	
    	
    // 	while(p.size()!=1){
    // 	    p.pop();
    // 	}

    //     int b=p.top();

    //     cout<<"ans : "<<a+b<<endl;


    //order of O()
    int n=3;

    int A[3]={1,2,3};
    int max=0;
     int min=0;
    

    if(n==0){
        return 0;
    }
    else{
        max=A[0];
        min=A[0];

    }



    for (int i = 1; i <n; i++)
    {
        if(max<A[i]){
            max=A[i];
        }

        if(min>A[i]){
            min=A[i];
        }
    }
    cout<<"min"<<min<<endl;
    cout<<"max"<<max<<endl;


    cout<<"sum : "<<max+min<<endl;



    // good solution

    //     int findSum(int A[], int N)
    // {
    // int minV=INT_MAX;
    // 	int maxV=INT_MIN;
    	
    // 	for(int i=0;i<N;i++){
    // 	    minV=min(minV, A[i]);
    // 	    maxV=max(maxV, A[i]);
    // 	}
    	
    // 	return minV+maxV;
    	
  
    

    
}