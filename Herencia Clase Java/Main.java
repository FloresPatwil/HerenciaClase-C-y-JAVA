public class Main {

    public static void main(String[] args) {

        Perro perro = new Perro("Scrapy","Croquetas",10,"Chihuahua");
        Gato gato = new Gato("Pelusa","Wiskas",8,"Siames");
        Caballo caballo = new Caballo("Roncco","Pasto",21,"Fino");

        perro.mostrar();
        System.out.println("--------------------------------------------------");
        gato.mostrar();
        System.out.println("--------------------------------------------------");
        caballo.mostrar();

    }
}
