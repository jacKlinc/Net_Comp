import java.rmi.registry.Registry;
import java.rmi.registry.LocateRegistry;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class Server extends ImplHello {
    public Server() {}

    public static void main(String[] args) {
        try {
            // Instantiate impl class
            ImplHello obj1 = new ImplHello();

            // Export remote obj to stub
            Hello stub = (Hello) UnicastRemoteObject.exportObject(obj1, 0);

            // Bind stub in reg
            Registry reg = LocateRegistry.getRegistry();

            reg.bind("Wow", stub);
            System.err.println("Server ready");
        } catch (Exception e) {
            System.err.println("Server exception:" + e.toString());
            e.printStackTrace();
        }
    }
}