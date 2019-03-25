using System;
using System.Net;
namespace Lab8_TestApp
{
    class Program
    {
        static void Main(string[] args) {
            using (WebClient myClient = new WebClient()) //to talk to the REST service you need to create
                                                         // a WebClient object and call the DownloadString
                                                         // method of the object
            {
                Console.WriteLine("testing xml function\n");
                var response =
               myClient.DownloadString("http://localhost:51033/Service1.svc/xml/123"); // change to your port number and service file
                Console.WriteLine(response);
                Console.WriteLine("\n\ntesting json function\n");
                response = myClient.DownloadString("http://localhost:51033/Service1.svc/json/456");
                Console.WriteLine(response);
                Console.ReadKey(true);
            }
        }
    }
}