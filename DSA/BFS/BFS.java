import java.util.*;
import javax.swing.*;
import java.io.*;
public class BFS {
	public static Object[] BFS(ArrayList[] A, int s){ 
		String[] color=new String[A.length];
		int[] pred=new int[A.length];
		int[] dis=new int[A.length];
		for(int i=0; i<A.length;i++){
			color[i]="white";
			pred[i]=-1;
			dis[i]=-1;
		}
		if(color[s]=="white"){
			//System.out.println("outer for: "+ s);
			color[s]="grey";
			pred[s]=-1;
			dis[s]=0;
			Queue<Integer> q= new LinkedList<Integer>();
			q.add(s);
			while(q.size()!=0){
				int u=q.remove();
				//System.out.println("u is: "+u);
				ArrayList<Integer> adjListu=A[u];
				//System.out.println("while: "+ i);
				for(int v=0; v<adjListu.size();v++){
					if(color[adjListu.get(v)]=="white"){
						//System.out.println("inner for: "+ v);
						color[adjListu.get(v)]="grey";
						dis[adjListu.get(v)]=dis[u]+1;
						pred[adjListu.get(v)]=u;
						q.add(adjListu.get(v));
					}
				}
			color[u]="black";
			}
		}
	
	Object[] rs=new Object[2];
	rs[0]=pred;
	rs[1]=dis;
	return rs;
	}
	public static void main(String args[]){
		HashMap<Integer,Character> vertices=new HashMap<Integer,Character>();
		vertices.put(0,'v');
		vertices.put(1,'r');
		vertices.put(2,'s');
		vertices.put(3,'w');
		vertices.put(4,'t');
		vertices.put(5,'x');
		vertices.put(6,'u');
		vertices.put(7,'y');
		ArrayList[] A=new ArrayList[8];
		ArrayList<Integer> Adj0=new ArrayList<Integer>();
		ArrayList<Integer> Adj1=new ArrayList<Integer>();
		ArrayList<Integer> Adj2=new ArrayList<Integer>();
		ArrayList<Integer> Adj3=new ArrayList<Integer>();
		ArrayList<Integer> Adj4=new ArrayList<Integer>();
		ArrayList<Integer> Adj5=new ArrayList<Integer>();
		ArrayList<Integer> Adj6=new ArrayList<Integer>();
		ArrayList<Integer> Adj7=new ArrayList<Integer>();
		Adj0.add(1);
		Adj1.add(0);
		Adj1.add(2);
		Adj2.add(1);
		Adj2.add(3);
		Adj3.add(2);
		Adj3.add(4);
		Adj3.add(5);
		Adj4.add(3);
		Adj4.add(6);
		Adj4.add(5);
		Adj5.add(3);
		Adj5.add(4);
		Adj5.add(7);
		Adj6.add(4);
		Adj6.add(7);
		Adj7.add(5);
		Adj7.add(6);
		A[0]=Adj0;
		A[1]=Adj1;
		A[2]=Adj2;
		A[3]=Adj3;
		A[4]=Adj4;
		A[5]=Adj5;
		A[6]=Adj6;
		A[7]=Adj7;
		Object[] resultset=new Object[2];
		int start=0;
		resultset=BFS(A,start);
		int[] predecessor=(int[])resultset[0];
		int[] distance=(int[])resultset[1];
		
		// printing predecessor and distance of each vertex
		for(int i=0;i<vertices.size();i++){
			System.out.println("Vertex= "+ vertices.get(i) +", predecessor= "+ predecessor[i] + " distance= "+distance[i]);
		}
	}
}