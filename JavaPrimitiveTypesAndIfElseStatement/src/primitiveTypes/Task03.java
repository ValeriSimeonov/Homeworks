package primitiveTypes;

import java.util.Scanner;

public class Task03 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Vavedete 2 chisla");
		float firstNumber= sc.nextFloat();
		float secondNumber= sc.nextFloat();
		float tempNumber;
		tempNumber=firstNumber;
		firstNumber=secondNumber;
		secondNumber=tempNumber;		
			System.out.println(firstNumber);
			System.out.println(secondNumber);
			


	}

}
