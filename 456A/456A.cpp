#include<stdio.h>
int m_sort(int a[],int b[], int temp[],int temp2[], int left, int right);
int merge(int a[],int b[], int temp[],int temp2[], int left, int mid, int right);
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n],temp[n],temp2[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    m_sort(a,b,temp,temp2,0,n-1);    
    for(j=0;j<n-1;j++){
       if(b[j]>b[j+1])
                break;
    }        
    if(j==n-1)
        printf("Poor Alex");
    else
        printf("Happy Alex");
    return 0;
} 
int m_sort(int a[],int b[], int temp[],int temp2[], int left, int right)

{
        int mid;
        if (right > left)
        {
            mid = (right + left) / 2;
            m_sort(a,b, temp,temp2, left, mid);
            m_sort(a,b, temp,temp2, mid+1, right);
        merge(a,b, temp,temp2, left, mid+1, right);
        }
        return 0;
}
int merge(int a[],int b[], int temp[],int temp2[], int left, int mid, int right){
            int i, left_end, num_elements, tmp_pos;
            left_end = mid - 1;
            tmp_pos = left;
            num_elements = right - left + 1;
    while ((left <= left_end) && (mid <= right)){
                if (a[left] <= a[mid]){
                        temp[tmp_pos] = a[left];
                        temp2[tmp_pos] = b[left];
                        tmp_pos = tmp_pos + 1;
                        left = left +1;
                }
            else{
                        temp[tmp_pos] = a[mid];
                        temp2[tmp_pos] = b[mid];
                        tmp_pos = tmp_pos + 1;
                        mid = mid + 1;
               }
        }
        while (left <= left_end){
                        temp[tmp_pos] = a[left];
                        temp2[tmp_pos] = b[left];
                        left = left + 1;
                        tmp_pos = tmp_pos + 1;
               }
                while (mid <= right){
                        temp[tmp_pos] = a[mid];
                        temp2[tmp_pos] = b[mid];
                        mid = mid + 1;
                        tmp_pos = tmp_pos + 1;
                }
                for (i = 0; i <= num_elements; i++){
                        a[right] = temp[right];
                        b[right] = temp2[right];
                        right = right - 1;
              }
              return 0;

        }