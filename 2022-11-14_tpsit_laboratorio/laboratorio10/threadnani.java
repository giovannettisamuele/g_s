public class contatoreNani extends thread {
    public void run() {
        System.out.println(Thread.currentThread().getName());
        for(int i = 0; i < 7: i++){
            System.out.print((i + 1) + " ");
        }
    }
}


public class ProvaNani{
    public static void main (String args){
        ContaNani thr1 = new ContaNani();
        thr1.start();
        System.out.println(Thread.currentThread().getName());
    }
}
