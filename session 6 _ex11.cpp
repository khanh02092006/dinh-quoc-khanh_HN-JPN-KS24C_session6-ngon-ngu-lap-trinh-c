#include<stdio.h>
int main (){
	int ngay;
	int thang;
	printf (" nhap ngay sinh ");
	scanf("%d",&ngay);
	printf (" nhap thang sinh");
	scanf("%d",&thang);
	 if ((thang==1 && ngay >=20 )||(thang==2 && ngay <=18)){
	 	printf (" cung hoang dao cua ban là: bao binh");
	 	} else if ((thang ==2 && ngay >=19)||(thang==3 && ngay <=20)){
	 		printf (" cung hoang dao cua ban là : song ngu");
	 		} else if ((thang==3 && ngay >= 21) || (thang==4 && ngay <= 19)){
	 			printf (" cung hoang dao cua ban là : bach duong");
	 			} else if (( thang==4 && ngay >=20) || (thang==5 && ngay<=20)){
	 				printf (" cung hoang dao cua ban là : kim nguu");
	 				} else if (( thang==5 && ngay >=21)|| (thang==6 && ngay<=20)){
	 					printf (" cung hoang dao cua ban là : song tu");
	 					} else if ((thang==6&&ngay>= 21)||(thang==7 && ngay<= 22)){
	 						printf (" cung hoang dao cua ban la: cu giai ");
	 						} else if ((thang==7 &&ngay>=23)||(thang==8&& ngay <=22)){
	 							printf(" cung hoang dao cua ban la : su tu ");
	 							} else if ((thang==8&& ngay>=23 )||(thang==9&& ngay<=22)){
	 								printf (" cung hoang dao cua ban la : xu nu");
	 								} else if ((thang==9&& ngay>=23 )||(thang==10&& ngay<=22)){
	 									printf (" cung hoang dao cua ban là : thien binh");
	 									} else if ((thang==10&& ngay>=23 )||(thang==11&& ngay<=21)){
	 										printf (" cung hoang dao cua ban là : bo cap");
	 										} else if ((thang==11&& ngay>=22 )||(thang==12&& ngay<=21)){
	 											printf (" cung hoang dao cua ban la : nhan ma");
	 											} else if ((thang==12&& ngay>=22 )||(thang==1&& ngay<=19)){
	 												printf (" cung hoang dao cua ban là : ma ket");
	 												}
	 												return 0;
	 												}
					 
	 
