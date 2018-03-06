import java.util.Scanner;
class Leer{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String cad;
		while (s.hasNextLine()) {
			cad =s.nextLine();
			int times=0;
			StringBuilder cadena = new StringBuilder();
			//System.out.println(cad.length());
			for (int i=0;i<cad.length();i++ ) {
				//System.out.printf("%c ",cad.charAt(i));
				if (cad.charAt(i)=='\"'){
					times++;
					if (times%2==0){
						//es par o sea esta al final
						//cadena.setCharAt(i,'\'');
						cadena.append("\'\'");
						//cadena.append('\'');
					}else{
						//es impar esta al principio
						//cadena.setCharAt(i,'´');
						cadena.append("``");
					}
				}else{
					cadena.append(cad.charAt(i));
				}
			}
			System.out.println(cadena);
			times =0;
		}
	}	
}
