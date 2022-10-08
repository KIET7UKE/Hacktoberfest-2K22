import java.util.*;
import javax.swing.*;
import java.io.*;
public class DFS {
	//overall running time is O(V+E) where V is for outer loop and E is time of DFSvisit
	public static Object[] DFS(ArrayList[] A){ 
		String[] color=new String[A.length];
		int[] pred=new int[A.length];
		int[] dTime=new int[A.length];
		int[] fTime=new int[A.length];
		for(int i=0; i<A.length;i++){
			color[i]="white";
			pred[i]=-1;
			dTime[i]=-1;
			fTime[i]=-1;
		}
		int time=0;
		Object[] resultset=new Object[4];
		for (int i=0;i<A.length;i++)
		{
		    if(color[i]=="white"){
			resultset=DFSvisit(A,i,color,pred,dTime,fTime,time);		
		     }
		 }
		return resultset;
	}
   // running time is O(E) 
	public static Object[] DFSvisit(ArrayList[] A,int i, String[] color, int[] pred, int[] dTime, int[] fTime,int time){
		int u=i;
		color[u]="grey";
		time=time+1;
		dTime[u]=time;
		ArrayList<Integer> adjListu=A[u];
		Object[] rs=new Object[4];
		for(int v=0; v<adjListu.size();v++){
				if(color[adjListu.get(v)]=="white"){
					pred[adjListu.get(v)]=u;
					rs=DFSvisit(A,adjListu.get(v),color,pred,dTime,fTime,time);
					time=(int)rs[3];
				}
		}
		color[u]="black";
		time=time+1;
		fTime[u]=time;
		rs[0]=pred;
		rs[1]=dTime;
		rs[2]=fTime;
		rs[3]=time;
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
		Object[] resultset=new Object[4];
		resultset=DFS(A);
		int[] predecessor=(int[])resultset[0];
		int[] dTime=(int[])resultset[1];
		int[] fTime=(int[])resultset[2];
		
		// printing predecessor and distance of each vertex
		for(int i=0;i<vertices.size();i++){
			System.out.println("Vertex= "+ vertices.get(i) +", predecessor= "+ predecessor[i] + " discovery time= "+dTime[i]  + " finish time= "+fTime[i]);
		}
	}
}