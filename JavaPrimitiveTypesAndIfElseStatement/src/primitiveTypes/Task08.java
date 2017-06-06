package primitiveTypes;

import java.util.Scanner;

public class Task08 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("insert  number");
		int curentNumber = sc.nextInt();
		int units = (curentNumber % 10);
		int tens = ((curentNumber / 10) % 10);
		int hundreds = (((curentNumber / 10) / 10) % 10);
		int thousands = (((curentNumber / 10) / 10) / 10);
		int firstNum = (units + thousands);
		int secondNum = (tens + hundreds);

		if (firstNum > secondNum) {
			System.out.println(firstNum + " is larger than "+secondNum);
		} else {
			if (firstNum == secondNum) {
				System.out.println(firstNum + " is equals than" + secondNum);
			}
			if (firstNum < secondNum) {
				System.out.println(firstNum + " is lesser than"+secondNum);
			}

		}

	}
}
