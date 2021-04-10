import static org.junit.Assert.*;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;

public class TDDExampleTest {

	@BeforeClass
	public static void setUpBeforeClass() throws Exception {
		System.out.println("Set up before class");
	}

	@AfterClass
	public static void tearDownAfterClass() throws Exception {
		System.out.println("Tear down after class");
	}

	@Before
	public void setUp() throws Exception {
		System.out.println("Set up before each test");
	}

	@After
	public void tearDown() throws Exception {
		System.out.println("Tear down before each test");
	}

	@Test
	public void testMethodA() {
		fail("Not yet implemented");
	}

	@Test
	public void testMethodB() {
		fail("Not yet implemented");
	}

	@Test
	public void testMain() {
		fail("Not yet implemented");
	}

}
