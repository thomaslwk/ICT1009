// one interface inheriting/extending other interface

interface Inter1{
	static int one = 1;
	public void show1(int i);
}

interface Inter2{
	static int two = 2;
	public void show2(int j);
}

interface Inter3{
	static int three = 3;
	public void show3(int k);
}

/*One interface can inherit another interface using 
 * the extends keyword and not the implements keyword
 */
interface TriInterface extends Inter1,Inter2,Inter3{
	public int showSum();
}

// any class which implements a "sub-interface" will have 
// to implement each of the methods contained in it's 
// "super-interface" also

public class Lecture4G implements TriInterface{
	public void show1(int i){
		System.out.print(i +" from Inter1, ");
	}
	public void show2(int j){
		System.out.print(j +" from Inter2 and ");
	}
	public void show3(int k){
		System.out.print(k +" from Inter3 = ");
	}
	public int showSum() {
		return one+two+three;
	}
	public static void main(String args[]) {
		Lecture4G multInter = new Lecture4G();
		System.out.print("The sum of ");
		multInter.show1(one);
		multInter.show2(two);
		multInter.show3(three);
		System.out.println(multInter.showSum());	
	}
}
