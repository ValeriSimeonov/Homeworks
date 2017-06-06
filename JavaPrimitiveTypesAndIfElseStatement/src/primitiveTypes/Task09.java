package primitiveTypes;

import java.util.Scanner;

public class Task09 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert  numbers");
		byte firstNum=sc.nextByte();
		byte secondNum=sc.nextByte();
		int mult=firstNum*secondNum;
		int result=mult%10;
		System.out.print(mult+","+result+" ");
		if(result!=0){
			System.out.println("even");
		}else{
			System.out.println("odd");
		}
	}
}
