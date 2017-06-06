package primitiveTypes;

import java.util.Scanner;

public class Task10 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert  number");
		int a=sc.nextInt();
		byte bucket1=2;
		byte bucket2=3;
		int b=(bucket1+bucket2);
		int c=a/b;
		int d=(a%(c*b));
		int e=c-1;
		if(d==0){
			System.out.println(c+" pati po 2 litra");
			System.out.println(c+" pati po 3 litra");
		}else{
			if (d==1){
				System.out.println(e+" pati po 2 litra");
				System.out.println(e+" pati po 3 litra");
				System.out.println("2 dopalnitelni kofi po 3 litra");		
			}
			if(d==2){
				System.out.println(c+" pati po 2 litra");
				System.out.println(c+" pati po 3 litra");
				System.out.println("1 dopalnitelna kofa po 2 litra");
			}
			if(d==3){
				System.out.println(c+" pati po 2 litra");
				System.out.println(c+" pati po 3 litra");
				System.out.println("1 dopalnitelna kofa po 3 litra");
			}
			if(d==4){
				System.out.println(c+" pati po 2 litra");
				System.out.println(c+" pati po 3 litra");
				System.out.println("2 dopalnitelna kofa po 2 litra");
			}
		}

	}
}
