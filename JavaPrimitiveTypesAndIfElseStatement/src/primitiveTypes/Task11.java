package primitiveTypes;

import java.util.Scanner;

public class Task11 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert  number");
		short curentNumber=sc.nextShort();
		short units=(short) (curentNumber%10);
		short tens= (short) ((curentNumber/10)%10);
	    short hundreds=(short) (((curentNumber/10)/10)%10);
		short firstRemainderOfDivision=(short) (curentNumber%hundreds);
		short secondRemainderOfDivision=(short) (curentNumber%tens);
		short thirdRemainderOfDivision=(short) (curentNumber%units);
		if(firstRemainderOfDivision<=0){
			System.out.println(curentNumber+" deleno na "+hundreds+" niama ostatak");
		}else{
			System.out.println(curentNumber+" deleno na "+hundreds+" ima ostatak "+firstRemainderOfDivision);
		}
		if(secondRemainderOfDivision<=0){
			System.out.println(curentNumber+" deleno na "+tens+" niama ostatak");
		}else{
			System.out.println(curentNumber+" deleno na "+tens+" ima ostatak "+secondRemainderOfDivision);
		}
		if(thirdRemainderOfDivision<=0){
			System.out.println(curentNumber+" deleno na "+units+" niama ostatak");
		}else{
			System.out.println(curentNumber+" deleno na "+units+" ima ostatak "+thirdRemainderOfDivision);
		}

	}
}
