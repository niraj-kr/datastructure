package com.trigger.linkedlist;

public class Main {

	public static void main(String[] args) {
		/*
		LinkedList<Integer> list = new LinkedList();
		list.addLast(10);
		list.addLast(20);
		list.addLast(30);
		System.out.println(list.contains(10));
		System.out.println(list.indexOf(10));
		System.out.println(list.size());
		var array = list.toArray();
		System.out.println(Arrays.toString(array));
		System.out.println(list);
		*/
		var list = new LinkedList();
		list.addLast(10);
		list.addLast(20);
		list.addLast(30);
		list.removeLast();
		 
		System.out.println(list.indexOf(30)); 
		 
		
		
		

	}

}
