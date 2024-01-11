// Following code is same as first and last occurence question in the Coding Ninjas Question Folder.
//To use code uncomment.

/*
int firstPosition(vector<int>& arr, int size, int key){
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastPosition(vector<int>& arr, int size, int key){
    int start = 0, end = size - 1, ans = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int count(vector<int>& arr, int n, int x) {
	int first = firstPosition(arr,n, x);
	int last = lastPosition(arr,n, x);
	if(first == -1 || last == -1){
		return 0;
	}
	return last - first + 1;
}

*/