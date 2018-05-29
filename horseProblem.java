package sorting;

import java.util.Scanner;

public class horseProblem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		
		int T= sc.nextInt();
		int i,j,temp=0,k,l,dif=0;		
		for( i=1;i<=T;i++)
		{
			
			int n= sc.nextInt();
			int[] s= new int[n];
			for( j=0;j<n;j++)
			{
				s[j]= sc.nextInt();
			}
			for(k=0;k<n-1;k++)
			{
				int min=k;
				for(j=k+1;j<=n-1;j++)
				{
					if(s[j]<s[min])
						min=j;
				}
					temp=s[min];
					s[min]=s[k];
					s[k]=temp;
					
					
					
				}
			dif=s[1]-s[0];
			for(l=1;l<n-1;l++)
			{
				if((s[l+1]-s[l])<dif)
					dif=s[l+1]-s[l];
			}
			System.out.println(dif);
			
			
		}
	}

}
