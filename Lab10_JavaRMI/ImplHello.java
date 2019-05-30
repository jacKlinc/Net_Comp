// Implement remote interface (Hello)
public class ImplHello implements Hello {
    
    // Implement interfac method
    public void printMsg() {
        System.out.println("This is an RMI program");
    }
    public int addition (int x, int y){
        return x + y;
    }
}
