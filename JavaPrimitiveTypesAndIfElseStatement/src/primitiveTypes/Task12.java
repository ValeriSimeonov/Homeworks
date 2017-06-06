package primitiveTypes;

import java.util.Scanner;

public class Task12 {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("insert date");
		int day=sc.nextInt();
		int month=sc.nextInt();
		int year=sc.nextInt();
		if(month==2&&day>28)
		if((month==1||month==3||month==5||month==7||month==8||month==10)&&(day==31)){
			day=1;
			++month;
		}
		if((month==4||month==6||month==9||month==11)&&(day==30)){
			day=1;
			++month;
		}
		if(month==12&&day==31){
			day=1;
			++month;
			++year;
		}
		if((year%4!=0)||(year%400!=0)&&(month==2)&&(day==28)){
			day=1;
			++month;
		}else if((year%4==0)||(year%400==0)&&(month==2)&&(day==29)){
			day=1;
			++month;
		}
		else{
			++day;
		}
		System.out.println(day+" "+month+" "+year);
	}
}
