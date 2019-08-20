using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab6_SOAP
{
    class Program
    {
        static void Main(string[] args)
        {
            /* 
             * HolidayService2 is a public web service and can be accessed in 
             * an URI format:
             * http://www.holidaywebservice.com/HolidayService_v2/HolidayService2.asmx
             * 
             * Communicating with this service is done with a proxy class, when
             * server and client are talking it's done through this class,
             * it serialises/deserialises the XML data that is standard among SOAP
             * services.
             * 
             * The class is created using the Windows Service Definiton Language
             * (WSDL) tool with cmd, then the returned file was copied to this 
             * project's directory. 
             * 
             * This is project is then compiled as a DLL to be accessed in future.
            
             */
            HolidayService2 myHolidayClass = new HolidayService2();
            // instance of proxy is created
            CountryCode[] myList = myHolidayClass.GetCountriesAvailable();
            // this get method returns an array of available CountryCodes 
            foreach (CountryCode value in myList) // iterating through all country codes
            {
                System.Console.Out.Write("\ncountry code: ");
                System.Console.Out.Write(value.Code);
                System.Console.Out.Write("\tdescription: ");
                System.Console.Out.Write(value.Description);
            }
        }
    }
}
