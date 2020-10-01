import java.math.BigInteger;
import java.util.*;

/**
 * @author Rose
 */
public class Main {

	public static void main(String[] args) throws Throwable {
		Scanner input = new Scanner(System.in);
		BigInteger sum = new BigInteger(input.next());
		BigInteger bi = sum.pow(2).add(new BigInteger("430577302272").multiply(sum)).add(new BigInteger("-1849315431658146496513"));
		System.out.println(bi);
	}

}
