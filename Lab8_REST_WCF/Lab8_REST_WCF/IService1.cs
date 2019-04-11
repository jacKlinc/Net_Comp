using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.Text;
using System.ServiceModel.Web;

/*
 * Represents a binding that a Windows Communication Foundation (WCF) 
 * service can use to configure and expose endpoints that are able to 
 * communicate with ASMX-based Web services and clients and other services 
 * that conform to the WS-I Basic Profile 1.1.*/

namespace Lab8_REST_WCF
{   
    [ServiceContract]
    public interface IService1
    {
        [OperationContract]
        [WebInvoke(Method = "GET",
            ResponseFormat = WebMessageFormat.Xml,
            BodyStyle = WebMessageBodyStyle.Wrapped,
            UriTemplate = "xml/{id}")]
        string XMLData(string id);
        [OperationContract]
        [WebInvoke(Method = "GET",
            ResponseFormat = WebMessageFormat.Json,
            BodyStyle = WebMessageBodyStyle.Wrapped,
            UriTemplate = "json/{id}")]
        string JSONData(string id);
        
        [OperationContract]
        [WebInvoke(Method = "GET",
            ResponseFormat = WebMessageFormat.Json,
            BodyStyle = WebMessageBodyStyle.Bare,
            UriTemplate = "sqr/{myNum}")]
        string SquareNum(string myNum);
        /*
        [OperationContract]
        [WebInvoke(Method = "GET",
            ResponseFormat = WebMessageFormat.Json,
            BodyStyle = WebMessageBodyStyle.Wrapped,
            UriTemplate = "sqr?nyNum={myNum}")]
        float SquareNum(float myNum);
        */
    }
}

/*
 * 2>Unable to add 'Service1.svc' to the Web site.  Unable to add file 'Service1.svc'.  Access is denied.
2>Unable to add 'Web.config' to the Web site.  Unable to add file 'Web.config'.  Access is denied.
2>Unable to add folder 'bin' to the Web site.  Cannot create folder 'bin'.  Access is denied.
2>Publish failed. Target file:///C:/inetpub/wwwroot/RESTWCFApp.
*/