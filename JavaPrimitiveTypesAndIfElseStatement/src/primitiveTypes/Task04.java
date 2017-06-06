package primitiveTypes;

import java.util.Scanner;

public class Task04 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Vavedete 2 chisla");
		float firstNumber= sc.nextFloat();
		float secondNumber= sc.nextFloat();
		if (firstNumber<secondNumber) {
			System.out.println(firstNumber);
			System.out.println(secondNumber);
		} else {
			System.out.println(secondNumber);
			System.out.println(firstNumber);

		}


	}

}
