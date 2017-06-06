package primitiveTypes;

import java.util.Scanner;

public class Task14 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert  numbers");
		short firstNum=sc.nextShort();
		short secondNum=sc.nextShort();
		short thirdNum=sc.nextShort();
		short fourthNum=sc.nextShort();		
	    short sum1=(short) (firstNum+secondNum);
	    short sum2=(short) (thirdNum+fourthNum);
	    if (((sum1%2==0)&&(sum2%2==0))||((sum1%2!=0)&&(sum2%2!=0))){
	    	System.out.println("poziciite sa s ednakav cviat");
	    	
	    }else{
	    	System.out.println("poziciite sa s razlichen zviat");
	    }

	}
}
