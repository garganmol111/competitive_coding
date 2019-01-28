// https://www.codechef.com/problems/PERMUT2

    #include <iostream>
    #include <vector>
    using namespace std;
     
    bool isAmbiguous(vector<int>& arr)
    {
        int i;
        vector<int> inverse(arr.size());
        for( i = 0; i < arr.size(); i++ )
        {
            inverse[arr[i]-1] = i+1;
        }
        for( i = 0; i < arr.size(); i++ )
        {
            if( arr[i] != inverse[i] )
                return false;
        }
        return true;
    }
     
    int main() 
    {
    	int n;
    	while(true)
    	{
    	    cin >> n;
    	    if( n > 0 )
    	    {
    	        vector<int> arr(n);
    	        int i;
    	        for( i = 0; i < n; i++ )
    	        {
    	            cin >> arr[i];
    	        }
    	        if( isAmbiguous(arr) )
    	        {
    	            cout << "ambiguous" << endl;
    	        }
    	        else
    	        {
    	            cout << "not ambiguous" << endl;
    	        }
    	    }
    	    else
    	        break;
    	}
    	return 0;
    }