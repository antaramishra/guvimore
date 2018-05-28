import java.util.Scanner;
class play_65
{
public static void main(String [] args)
{
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int []a=new int[n];
System.out.println("enter array elements :\n");
for(int i=0;i<n;i++)
{
	a[i]=sc.nextInt();
}
System.out.println();
for(int i=0;i<n;i++)
{
	if(a[i]<n)
	{
		System.out.println(a[i]+" ");
	}
}
}
}
	
