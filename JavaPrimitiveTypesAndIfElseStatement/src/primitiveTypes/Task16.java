package primitiveTypes;

import java.util.Scanner;

public class Task16 {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("insert number");
		int curentNumber = sc.nextInt();
		int units = curentNumber % 10;
		int tens = (curentNumber / 10) % 10;
		int hundreds = ((curentNumber / 10) / 10) % 10;
		if (units==tens&&tens==hundreds) {
			System.out.println("the numbers are equals");
		}else if(units>tens&&tens>hundreds){
			System.out.println("the numbers are in ascending order");
		}else if(units<tens&&tens<hundreds){
			System.out.println("the numbers are in a decreasing order ");
		}
		else{
			System.out.println("the numbers aren't ordered");
		}
	}
}
