import static org.junit.Assert.*;

import org.junit.Test;

public class ArithmeticTest {

	@Test
	public void testMultiply() {
		assertEquals(4,Arithmetic.multiply(2, 2));
	}

	@Test
	public void testDivide() {
		assertEquals(4.0,Arithmetic.divide(12, 3),0.0);
	}

	@Test
	public void testIsPositive() {
		assertFalse(Arithmetic.isPositive(-5));
		assertTrue(Arithmetic.isPositive(5));
	}

	@Test
	public void testMain() {
		//fail("Not yet implemented");
	}

}
