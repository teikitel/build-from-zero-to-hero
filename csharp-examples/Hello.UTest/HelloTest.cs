using Hello;
using NUnit.Framework;

namespace Hello.UTest;

public class HelloTest
{
    [Test]
    public void HelloWorldShouldSayHello()
    {
        Assert.AreEqual("Hello, World!", Greetings.Hello());
    }

    [Test]
    public void HelloWorldShouldNotSayBye()
    {
        Assert.AreNotEqual("Bye, World!", Greetings.Hello());
    }
}