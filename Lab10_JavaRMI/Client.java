import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Client {
    private Client() {}
    public static void main(String[] args) {
        try {
            //Client code modification
            String serverIP = "169.254.94.226"; 

            // Use your server IP address here orlocalhost if client and server are on same machine.
            
            int serverPort = 1099;// Getting reference to the registry 
            // Get ref to reg
            Registry reg = LocateRegistry.getRegistry(serverIP, serverPort);

            // Looking up reg for stub
            Hello stub = (Hello) reg.lookup("Wow");

            // Call remote method using stub obj
            stub.printMsg();        // calls HelloImpl method 

            int in1 = 2, in2 = 3;
            Server s1 = new Server();
            //System.out.println("Please enter two numbers: ");
            //System.in(in1, in2);
            int x = s1.addition(in1, in2);
            System.out.println(x);            

        } catch (Exception e) {
            System.err.println("Client exception:" + e.toString());
            e.printStackTrace();
        } 
    }
}

// 147.252.238.148