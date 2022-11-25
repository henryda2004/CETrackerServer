public class ListaPaquetes {
    private Paquete head;
    public ListaPaquetes() {
        this.head = null;
    }

    public boolean isEmpty(){
        return this.head == null;
    }


    public void insertFirst(String codigo, Integer pinicio, Integer pfinal) {

        Paquete newPaquete = new Paquete(codigo, pinicio, pfinal);
        newPaquete.setNext(this.head);
        this.head = newPaquete;

    }

    public void displayList() {

        Paquete current = this.head;
        while (current != null) {
            System.out.println(current.getCódigo() + current.getPuntoInicio() + current.getPuntoFinal());
            current = current.getNext();

        }

    }
    public boolean verificar() {
        Paquete current = this.head;
        if (current.getNext() != null) {
            while (current != null) {
                Paquete temp = current.getNext();
                while (temp != null) {
                    if (current.getCódigo().equalsIgnoreCase(temp.getCódigo())) {
                        return false;
                    }
                    temp = temp.getNext();
                }
                current = current.getNext();
            }
            return true;
        }
        return true;
    }
}
