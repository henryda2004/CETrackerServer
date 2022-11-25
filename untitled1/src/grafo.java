import java.util.ArrayList;

public class grafo {
    private int vertex;

    public static ArrayList<edge> edgeList = new ArrayList<edge>();



    public int getVertex() {
        return vertex;
    }

    public void setVertex(int vertex) {
        this.vertex = vertex;
    }

    // grafo dirigido y con pesos hecho con matriz de ajdacencia.
    public static ArrayList<edge> generarGrafo(){

        int min = 2;
        int max = 5;

        // vertex= mumero de vertices= centros de distribucion almacenamiento .
        int vertex = (int)Math.floor(Math.random()*(max-min+1)+min);

        //lista que guarda edges de un vertex.



        System.out.println("cantidad de centros de distribucion: "+ vertex);

        //cantidad de relaciones: aristas entre los centros va a estar dada por  cantidad de los centros mas la mitad de estos.
        int relaciones= (vertex+(vertex/3));
        System.out.println("cantidad de relaciones entre centros de distribucion: "+ relaciones);


        for(int x = 1; x<=relaciones; x++)
        {

            // valores para generar el peso del grafo entre 2min y 20min
            int min_seg = 120;
            int max_seg = 1200;
            int random_seg = (int)Math.floor(Math.random()*(max_seg-min_seg+1)+min_seg);

            //valores de donde puede empezar y terminar la arista: de 0 a la cantidad de vertices.
            int min_arista = 1;
            int arista_i = (int)Math.floor(Math.random()*(vertex -min_arista+1)+min_arista);
            int arista_f = (int)Math.floor(Math.random()*(vertex -min_arista+1)+min_arista);

            //System.out.println(arista + ": valor de arista");
            int m= arista_i;
            int y = arista_f;
            int segundos = random_seg;

            if(m==y){
                if (y==vertex){
                    y=vertex-1;
                }
                else{
                    y=y+1;
                }

            }

            System.out.println("INICIO:"+m + "  ,final:"+y + "  peso:"+segundos);

            int Nodo_inicio=m;
            int Nodo_final=y;
            int Segundos= segundos;

           // anadir los valores generados como las relaciones entre los centros
            edgeList.add(new edge(Nodo_inicio, Nodo_final, Segundos));
        }
        System.out.println("lista de aristas: " + edgeList);
        System.out.println(edgeList.get(0).weight+"  peso de la primera");

        System.out.println("tamano de lista de aristas: "+ edgeList.size());
        int[][] matrix = new int[vertex+1][vertex+1];
        for(int i = 0; i<edgeList.size(); i++){

            edge currentEdge = edgeList.get(i);
            int startVertex = currentEdge.startVertex;
            int endVertex = currentEdge.endVertex;
            int weight = currentEdge.weight;
            matrix [startVertex][endVertex] = weight;

        }

        for (int i=1; i<=vertex; i++){
            for(int j=1; j<=vertex; j++){
                System.out.print(matrix[i][j]+"  ");
            }
            System.out.println();
        }
        return edgeList;
    }
    public static void GraphAdd(int Inicio, int Final, int Peso){
        edgeList.add(new edge(Inicio, Final, Peso));
    }

}





