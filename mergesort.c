#include <stdio.h>

int main(void) {
	merge(l,r,a)
	{
		int nl,nr,i=0,j=0,k=0,l[100],r[100],a[100],l[100],r[100];
		nl=sizeof(l);
		nr=sizeof(r);
		while(i<nl && j<nr)
		{
			if(l[i]<r[j])
			{
				
				a[k]=l[i];
				i++;
			}
			else
			{
				a[k]=r[j];
				j++;
			}
			k++;
		}
		while(i<nl)
		{
			a[k]=l[i];
			i++;k++;
		}
		while(j<nr)
		{
			a[k]=r[j];
			j++;k++;
		}
	}
	mergesort(a)
	{
		int n,a[100],left[100],right[100],i,mid;
		n=sizeof(a);
		if(n<2)
		return;
		mid=n/2;
		left=sizeof(mid);
		right=sizeof(n-mid);
		for(i=0;i<mid-1;i++)
		{
			left[i]=a[i];
		}
		for(i=mid;i<n-1;i++)
		{
			right[i-mid]=a[i];
		}
		mergesort(left);
		mergesort(right);
		merge(left,right,a);
		
	}
	return 0;
}
