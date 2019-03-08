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
            HolidayService2 myHolidayClass = new HolidayService2();
            CountryCode[] myList = myHolidayClass.GetCountriesAvailable();
            foreach (CountryCode value in myList)
            {
                System.Console.Out.Write("\ncountry code: ");
                System.Console.Out.Write(value.Code);
                System.Console.Out.Write("\tdescription: ");
                System.Console.Out.Write(value.Description);
            }
        }
    }
}
