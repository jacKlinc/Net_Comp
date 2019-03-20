using System;
using System.Threading;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Lab7_Client.TestWeb;

namespace Lab7_Client
{
    class Program
    {
        static void Main(string[] args)
        {
            MyWebService webservice = new MyWebService();
            string srt = webservice.SimpleMethod("Jack H");
            Console.WriteLine(srt);
            Console.WriteLine(webservice.AnotherSimpleMethod(4, 3));
            Thread.Sleep(1000);
        }
    }
}
