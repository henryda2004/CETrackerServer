import com.fazecast.jSerialComm.SerialPort;

import java.io.PrintWriter;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

/**
 * Clase que ejecuta toda el programa principal
 */
public class Main {
    /**
     * Ejecuta el main
     * @param args
     */
    public static void main(String[] args) {
        ListaPaquetes listaPaquetes = new ListaPaquetes();
        listaPaquetes.insertFirst("3E", 1, 4);
        listaPaquetes.insertFirst("0A", 1, 3);
        listaPaquetes.displayList();
        System.out.println(listaPaquetes.verificar());
        SerialPort minaPortaArduino = SerialPort.getCommPort("COM4");
        minaPortaArduino.openPort();

        PrintWriter out = new PrintWriter(minaPortaArduino.getOutputStream());
        Scanner sc = new Scanner(System.in);
        out.print(sc.nextLine());
        out.flush();

        minaPortaArduino.setComPortTimeouts(SerialPort.TIMEOUT_READ_BLOCKING, 1000, 0);


        minaPortaArduino.closePort();
        ArrayList<edge> Grafo = new ArrayList<>();
        Grafo = grafo.generarGrafo();
        System.out.println(Grafo + "Grafo en main");
        grafo.GraphAdd(4, 1, 432);
        System.out.println(Grafo+"grafo anadido");

    }
}