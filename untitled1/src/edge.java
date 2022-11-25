/**
 * Clase grafo y sus atributos
 */
public class edge {
    int startVertex;
    int endVertex;
    int weight;

    /**
     * Constructor
     * @param start
     * @param end
     * @param weight
     */
    public edge(int start, int end, int weight) {
        this.startVertex = start;
        this.endVertex= end;
        this.weight = weight;
    }
}
