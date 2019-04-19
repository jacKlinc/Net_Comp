var server = new Server {               // Build a server
    Services = { 
        SquareService.BindService(new SquaredServiceImpl()) 
    },
    Ports = { 
        new ServerPort(Host, Port, ServerCredentials.Insecure) 
    }
};
server.Start();     // Start server

Console.WriteLine("My server listening on port " + Port);
Console.ReadKey();   

server.ShutdownAsync().Wait();
