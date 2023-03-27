class contatoreNani2 extends Thread {
    public contatoreNani2(String nome){
        super();
        setName(nome);
    }
    public void run(){
     for(int i = 0; i < 7; i++){
     System.out.printl((i+1)+" "+getNam());    
        }  
    }
}

class ProvaNani2{
    public static void main (String args[]){
        Thread thr1 = new ContatoreNani2("Capitan America");
        Thread thr2 = new ContatoreNani2("Iron Man");
        thr1.start();
        thr2.start();
    }
}
