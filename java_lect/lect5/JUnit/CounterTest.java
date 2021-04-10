import static org.junit.Assert.*;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;

public class CounterTest {

	Counter counter1;
	@Before // called every time before each test
	public void setUp() throws Exception {
		counter1 = new Counter(); 
	}

	@After
	public void tearDown() throws Exception {
	}

	@Test
	public void testIncrement() {
		assertTrue(counter1.increment()==1);
		assertTrue(counter1.increment()==2);
	}

	@Test
	public void testDecrement() {
		assertTrue(counter1.decrement()==-1);
	}

	@Test
	public void testGetCount() {
	//	fail("Not yet implemented");
	}

	@Test
	public void testMain() {
	//	fail("Not yet implemented");
	}

}
