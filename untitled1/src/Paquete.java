/**
 * Clase que contiene el paquete y todos sus atributos
 */
public class Paquete {

    private String código;
    private Integer puntoInicio;
    private Integer puntoFinal;
    private Paquete next;

    /**
     * Constructor de Paquete
     * @param código
     * @param puntoInicio
     * @param puntoFinal
     */
    public Paquete(String código, Integer puntoInicio, Integer puntoFinal) {
        this.código = código;
        this.puntoInicio = puntoInicio;
        this.puntoFinal = puntoFinal;
        this.next = null;
    }

    /**
     *getCódigo
     * @return
     */
    public String getCódigo() {
        return código;
    }

    /**
     *setCódigo
     * @param código
     */
    public void setCódigo(String código) {
        this.código = código;
    }

    /**
     *getPuntoInicio
     * @return
     */
    public Integer getPuntoInicio() {
        return puntoInicio;
    }

    /**
     *setPuntoInicio
     * @param puntoInicio
     */
    public void setPuntoInicio(Integer puntoInicio) {
        this.puntoInicio = puntoInicio;
    }

    /**
     *getPuntoFinal
     * @return
     */
    public Integer getPuntoFinal() {
        return puntoFinal;
    }

    /**
     *setPuntoFinal
     * @param puntoFinal
     */
    public void setPuntoFinal(Integer puntoFinal) {
        this.puntoFinal = puntoFinal;
    }

    /**
     *GetNext
     * @return
     */
    public Paquete getNext() {
        return next;
    }

    /**
     * Next
     * @param next
     */
    public void setNext(Paquete next) {
        this.next = next;
    }
}
