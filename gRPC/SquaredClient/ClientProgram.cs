using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System;
using Grpc.Core;
using Com.Example.Grpc;

namespace SquaredClient
{
    public class ClientProgram
    {
        const string HOST = "localhost";
        const int PORT = 50051;

        public float RetSquare(float x) {           // uses square function from proto
        //public static void Main(string[] args) { // *****  needed for console app 

            var channel = new Channel(HOST + ":" + PORT, ChannelCredentials.Insecure);  // allows multiple TCP connections across one channel, 
            // minimise number of channels-expensive op

            var client = new SquareService.SquareServiceClient(channel);        // creates client with client function from SquareGrpc

            var request = new SquareRequest { Inval = x };                      // passes input value of function to create a new request

            var response = client.RetSquare(request);                           // use request to return reply
            channel.ShutdownAsync().Wait();
            //Console.WriteLine("Answer:" + response.Outval);                   // ***** needed for console app
           // Console.ReadKey();
            return response.Outval;                                             //  give calcualtor app the answer
        }
    }
}
