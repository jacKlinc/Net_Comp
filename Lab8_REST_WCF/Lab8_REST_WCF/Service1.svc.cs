using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.Text;

namespace Lab8_REST_WCF
{
    // NOTE: You can use the "Rename" command on the "Refactor" menu to change the class name "Service1" in code, svc and config file together.
    // NOTE: In order to launch WCF Test Client for testing this service, please select Service1.svc or Service1.svc.cs at the Solution Explorer and start debugging.
    public class Service1 : IService1
    {
        public string XMLData(string id) {
            return "You requested product " + id;
        }
        public string JSONData(string id) {
            return "You requested product " + id;
        }
        /*public float SquareNum(float myNum) {
            return myNum * myNum;
        }*/
        public string SquareNum(string myNum) {
            int num = Convert.ToInt32(myNum);
            return (Convert.ToString(num * num));
        }
    }
}
