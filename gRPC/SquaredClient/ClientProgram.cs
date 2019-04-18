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

        public float RetSquare(float x) {
        //public static void Main(string[] args) { 
            // Create a channel
            var channel = new Channel(HOST + ":" + PORT, ChannelCredentials.Insecure);

            // Create a client with the above channel
            var client = new SquareService.SquareServiceClient(channel);

            // Create a request 
            var request = new SquareRequest {
                Inval = x
            };

            // Send the request and store the response
            var response = client.RetSquare(request);
            /*channel.ShutdownAsync().Wait();
            Console.WriteLine("Answer:" + response.Outval);
            Console.ReadKey();*/
            return response.Outval;
        }
    }
}
