import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Client {
    private Client() {}
    public static void main(String[] args) {
        try {
            // Get ref to reg
            Registry reg = LocateRegistry.getRegistry(null);

            // Looking up reg for stub
            Hello stub = (Hello) reg.lookup("Wow");

            // Call remote method using stub obj
            stub.printMsg();        // calls HelloImpl method 

            int in1 = 2, in2 = 3;
            Server s1 = new Server();
            //System.out.println("Please enter two numbers: ");
            //System.in(in1, in2);
            s1.addition(in1, in2);

            //Client code modification
            
            //String serverIP = "169.254.94.226"; 
            
            // Use your server IP address here orlocalhost if client and server are on same machine.
            
            //int serverPort = 1099;// Getting reference to the registry 
            //Registry reg2 = LocateRegistry.getRegistry(serverIP, serverPort);

        } catch (Exception e) {
            System.err.println("Client exception:" + e.toString());
            e.printStackTrace();
        } 
    }
}