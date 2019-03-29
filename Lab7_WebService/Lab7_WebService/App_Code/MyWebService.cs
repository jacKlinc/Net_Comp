using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Services;

/// <summary>
/// Summary description for MyWebService
/// </summary>
[WebService(Namespace = "http://tempuri.org/")]
[WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
// To allow this Web Service to be called from script, using ASP.NET AJAX, uncomment the following line. 
// [System.Web.Script.Services.ScriptService]
public class MyWebService : System.Web.Services.WebService
{

    public MyWebService()
    {

        //Uncomment the following line if using designed components 
        //InitializeComponent(); 
    }

    [WebMethod]
    public string HelloWorld()
    {
        return "Hello World";
    }

    [WebMethod]
    public string SimpleMethod(String srt)
    {
        return "Hello there" + srt;
    }

    [WebMethod]
    public int AnotherSimpleMethod(int firstNum, int secondNum)
    {
        return firstNum + secondNum;
    }

    [WebMethod]
    public float SquaredMethod(float sqNum) {
        return sqNum*sqNum;
    }
}
