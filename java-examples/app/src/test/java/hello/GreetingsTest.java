package hello;

import hello.Greetings;
import org.junit.Test;
import static org.junit.Assert.*;

public class GreetingsTest {
    @Test
    public void helloWorldShouldSayHello() {
        assertEquals("Hello, World!", Greetings.getGreeting());
    }

    @Test
    public void helloWorldShouldNotSayBye() {
        assertNotEquals("Bye, World!", Greetings.getGreeting());
    }
}
