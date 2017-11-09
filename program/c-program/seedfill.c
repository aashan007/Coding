#include<stdio.h>

int main(){
	int n,i,j;
	int a[10][10];
	printf("Enter the size of the N x N Image:\n");
	scanf("%d",&n);
	printf("\nEnter the pixel values in the image 0/1\n"); 
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
					
			}
			
		}
	int m;
	printf("\nEnter the color/value to be filled for the 1st object\n");
	scanf("%d",&n);
	
	printf("\n Image before filling:");
	 for(i=0;i<n;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                printf("%d ",a[i][j]);

                        }
			printf("\n");

                }

	//to find the x, y from the given array and p,q for next array
	

	return 0;

	}

