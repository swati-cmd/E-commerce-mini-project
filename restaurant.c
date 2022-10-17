#include <stdio.h>
#include <conio.h>
void starters();
void soup();
void mainc();
void bread();
void rice();
void desserts(); 
void beverages();
void orderlist();
int i=-1,k,catechoice,starterchoice,soupchoice,maincchoice,breadchoice,ricechoice,dessertschoice,beverageschoice,j,total;
int olc[100];
char fn[25]; 
char ln[25];
char pn[25];
char last_name[15];
char ol[100][50];
char cc[25];
void main()
{
printf("**************************************************************************************%C",'\n');
printf("\t\t\t\t\t\t\t\t\t\t\t WELCOME TO THE RESTURANT %c",'\n');
printf(" Enter your First Name %c",'\n');
scanf("%s",fn);
printf(" Enter your Last Name %c",'\n');
scanf("%s",ln);
printf(" Enter Phone no %c",'\n');
scanf("%s",ln);
printf(" Start Ordering %c",'\n');
while(catechoice!=8)
{
printf("%c PLS SELECT THE FOOD CATEGORY FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: STARTERS",'\n');
printf("%c 2: SOUP",'\n');
printf("%c 3: MAIN COURSE",'\n');
printf("%c 4: BREADS",'\n');
printf("%c 5: RICE",'\n');
printf("%c 6: DESSERTS",'\n');
printf("%c 7: BEVERAGES",'\n');
printf("%c 8:EXIT",'\n');
scanf("%d",&catechoice);
if(catechoice==1)
starters();
else if(catechoice==2)
soup();
else if(catechoice==3)
mainc();
else if(catechoice==4)
bread();
else if(catechoice==5)
rice();
else if(catechoice==6)
desserts();
else if(catechoice==7)
beverages();
else 
{ catechoice=0;
    break;
}
}
orderlist();
return;
}
void starters()
{
while(starterchoice!=7)
{
printf("%c PLS SELECT THE STARTER FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: Dahi Vada             ₹40",'\n');
printf("%c 2: Paneer Tikka          ₹90",'\n');
printf("%c 3: Sweet Potato Tikki    ₹35",'\n');
printf("%c 4: Sabudana Tikki        ₹35",'\n');
printf("%c 5: Paneer 65             ₹70",'\n');
printf("%c 6: Bread Roll            ₹30",'\n');
printf("%c 7:EXIT",'\n');
scanf("%d",&starterchoice);
if(starterchoice==1)
{
cc[0]='D';
cc[1]='a';
cc[2]='h';
cc[3]='i';
cc[4]=' ';
cc[5]='V';
cc[6]='a';
cc[7]='d';
cc[8]='a';
cc[9]='\0';
for(k=0;k<10;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
else if(starterchoice==2)
{
cc[0]='P';
cc[1]='a';
cc[2]='n';
cc[3]='e';
cc[4]='e';
cc[5]='r';
cc[6]=' ';
cc[7]='T';
cc[8]='i';
cc[9]='k';
cc[10]='k';
cc[11]='a';
cc[12]='\0';
for(k=0;k<13;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=90;
i++;
}
else if(starterchoice==3)
{
cc[0]='S';
cc[1]='w';
cc[2]='e';
cc[3]='e';
cc[4]='t';
cc[5]=' ';
cc[6]='P';
cc[7]='o';
cc[8]='t';
cc[9]='a';
cc[10]='t';
cc[11]='o';
cc[12]=' ';
cc[13]='T';
cc[14]='i';
cc[15]='k';
cc[16]='k';
cc[17]='a';
cc[18]='\0';
for(k=0;k<19;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=35;
i++;
}
else if(starterchoice==4)
{
cc[0]='S';
cc[1]='a';
cc[2]='b';
cc[3]='u';
cc[4]='d';
cc[5]='a';
cc[6]='n';
cc[7]='a';
cc[8]=' ';
cc[9]='T';
cc[10]='i';
cc[11]='k';
cc[12]='k';
cc[13]='i';
cc[14]='\0';
for(k=0;k<15;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=35;
i++;
}
else if(starterchoice==5)
{
cc[0]='P';
cc[1]='a';
cc[2]='n';
cc[3]='n';
cc[4]='e';
cc[5]='r';
cc[6]=' ';
cc[7]='6';
cc[8]='5';
cc[9]='\0';
for(k=0;k<10;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=70;
i++;
}
else if(starterchoice==6)
{
    cc[0]='B';
cc[1]='r';
cc[2]='e';
cc[3]='a';
cc[4]='d';
cc[5]=' ';
cc[6]='R';
cc[7]='o';
cc[8]='l';
cc[9]='l';
cc[10]='\0';
for(k=0;k<11;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=30;
i++;
}
}
starterchoice=0;
return;
}
void soup()
{
while(soupchoice!=7)
{
printf("%c PLS SELECT THE SOUP FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: Tomato Soup            ₹40",'\n');
printf("%c 2: Mushroom Soup          ₹40",'\n');
printf("%c 3: Spinach Soup           ₹40",'\n');
printf("%c 4: Sweet Corn Soup        ₹40",'\n');
printf("%c 5: Hot And Sour Soup      ₹40",'\n');
printf("%c 6: Manchow Soup           ₹40",'\n');
printf("%c 7:EXIT",'\n');
scanf("%d",&soupchoice);
if(soupchoice==1)
{
  cc[0]='T';
cc[1]='o';
cc[2]='m';
cc[3]='a';
cc[4]='t';
cc[5]='o';
cc[6]=' ';
cc[7]='S';
cc[8]='o';
cc[9]='u';
cc[10]='p';
cc[11]='\0';
for(k=0;k<12;k++)
{
    ol[i+1][k]=cc[k];
}  
olc[i+1]=40;
i++;
}
else if(soupchoice==2)
{
    cc[0]='M';
cc[1]='u';
cc[2]='s';
cc[3]='h';
cc[4]='r';
cc[5]='o';
cc[6]='o';
cc[7]='m';
cc[8]=' ';
cc[9]='S';
cc[10]='o';
cc[11]='u';
cc[12]='p';
cc[13]='\0';
for(k=0;k<18;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
else if(soupchoice==3)
{
    cc[0]='S';
cc[1]='p';
cc[2]='i';
cc[3]='n';
cc[4]='a';
cc[5]='c';
cc[6]='h';
cc[7]=' ';
cc[8]='S';
cc[9]='o';
cc[10]='u';
cc[11]='p';
cc[12]='\0';
for(k=0;k<13;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
else if(soupchoice==4)
{
    cc[0]='S';
cc[1]='w';
cc[2]='e';
cc[3]='e';
cc[4]='t';
cc[5]=' ';
cc[6]='C';
cc[7]='o';
cc[8]='r';
cc[9]='n';
cc[10]=' ';
cc[11]='S';
cc[12]='o';
cc[13]='u';
cc[14]='p';
cc[15]='\0';
for(k=0;k<15;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
else if(soupchoice==5)
{
    cc[0]='H';
cc[1]='o';
cc[2]='t';
cc[3]=' ';
cc[4]='a';
cc[5]='n';
cc[6]='d';
cc[7]=' ';
cc[8]='S';
cc[9]='o';
cc[10]='u';
cc[11]='r';
cc[12]=' ';
cc[13]='S';
cc[14]='o';
cc[15]='u';
cc[16]='p';
cc[17]='\0';
for(k=0;k<18;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
else if(soupchoice==6)
{
    cc[0]='M';
cc[1]='a';
cc[2]='n';
cc[3]='c';
cc[4]='h';
cc[5]='o';
cc[6]='w';
cc[7]=' ';
cc[8]='S';
cc[9]='o';
cc[10]='u';
cc[11]='p';
cc[12]='\0';
for(k=0;k<18;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
}soupchoice=0;
return;
}
void mainc()
{
while(maincchoice!=7)
{
printf("%c PLS SELECT THE MAIN COURSE FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: Palak Paneer         ₹120",'\n');
printf("%c 2: Aloo Gobi            ₹90",'\n');
printf("%c 3: Malai Kofta          ₹110",'\n');
printf("%c 4: Potato Curry         ₹80",'\n');
printf("%c 5: Aloo Dam             ₹100",'\n');
printf("%c 6: Matar Paneer         ₹120",'\n');
printf("%c 7:EXIT",'\n');
scanf("%d",&maincchoice);
if(maincchoice==1)
{
    cc[0]='P';
cc[1]='a';
cc[2]='l';
cc[3]='a';
cc[4]='k';
cc[5]=' ';
cc[6]='P';
cc[7]='a';
cc[8]='n';
cc[9]='e';
cc[10]='e';
cc[11]='r';
cc[12]='\0';
for(k=0;k<13;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=120;
i++;
}
else if(maincchoice==2)
{
    cc[0]='A';
cc[1]='l';
cc[2]='o';
cc[3]='o';
cc[4]=' ';
cc[5]='G';
cc[6]='o';
cc[7]='b';
cc[8]='i';
cc[9]='\0';
for(k=0;k<10;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=90;
i++;
}
else if(maincchoice==3)
{
    cc[0]='M';
cc[1]='a';
cc[2]='l';
cc[3]='a';
cc[4]='i';
cc[5]=' ';
cc[6]='K';
cc[7]='o';
cc[8]='f';
cc[9]='t';
cc[10]='a';
cc[11]='\0';
for(k=0;k<12;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=110;
i++;
}
else if(maincchoice==4)
{
    cc[0]='P';
cc[1]='o';
cc[2]='t';
cc[3]='a';
cc[4]='o';
cc[5]=' ';
cc[6]='C';
cc[7]='u';
cc[8]='r';
cc[9]='r';
cc[10]='y';
cc[11]='\0';
for(k=0;k<12;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=80;
i++;
}
else if(maincchoice==5)
{cc[0]='A';
cc[1]='l';
cc[2]='o';
cc[3]='o';
cc[4]=' ';
cc[5]='D';
cc[6]='a';
cc[7]='m';
cc[8]='\0';
for(k=0;k<9;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=100;
i++;
}
else if(maincchoice==6)
{
    cc[0]='M';
cc[1]='a';
cc[2]='t';
cc[3]='a';
cc[4]='r';
cc[5]=' ';
cc[6]='P';
cc[7]='a';
cc[8]='n';
cc[9]='e';
cc[10]='e';
cc[11]='r';
cc[12]='\0';
for(k=0;k<13;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=120;
i++;
}
}maincchoice=0;
return;
}
void bread()
{
while(breadchoice!=4)
{
printf("%c PLS SELECT THE BREAD FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT ",'\n','\n');
printf("%c 1: PooriX6         ₹60",'\n');
printf("%c 2: ParathaX4       ₹80",'\n');
printf("%c 3: NaanX4          ₹60",'\n');
printf("%c 4: EXIT",'\n');
scanf("%d",&breadchoice);
if(breadchoice==1)
{
    cc[0]='P';
cc[1]='u';
cc[2]='r';
cc[3]='i';
cc[4]='X';
cc[5]='6';
cc[6]='\0';
for(k=0;k<7;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=60;
i++;
}
else if(breadchoice==2)
{
    cc[0]='P';
cc[1]='a';
cc[2]='r';
cc[3]='a';
cc[4]='t';
cc[5]='h';
cc[6]='a';
cc[7]='X';
cc[8]='4';
cc[9]='\0';
for(k=0;k<10;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=80;
i++;
}
else if(breadchoice==3)
{
    cc[0]='N';
cc[1]='a';
cc[2]='a';
cc[3]='n';
cc[4]='X';
cc[5]='4';
cc[6]='\0';
for(k=0;k<7;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=60;
i++;
}
}breadchoice=0;
return;
}
void rice()
{
while(ricechoice!=5)
{
printf("%c PLS SELECT THE RICE FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: Biryani            ₹80",'\n');
printf("%c 2: Fired Rice         ₹60",'\n');
printf("%c 3: Steamed Rice       ₹40",'\n');
printf("%c 4: Pulao              ₹50",'\n');
printf("%c 5:EXIT",'\n');
scanf("%d",&ricechoice);
if(ricechoice==1)
{
    cc[0]='B';
cc[1]='r';
cc[2]='i';
cc[3]='y';
cc[4]='a';
cc[5]='n';
cc[6]='i';
cc[7]='\0';
for(k=0;k<8;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=80;
i++;
}
else if(ricechoice==2)
{
    cc[0]='F';
cc[1]='r';
cc[2]='i';
cc[3]='e';
cc[4]='d';
cc[5]=' ';
cc[6]='R';
cc[7]='i';
cc[8]='c';
cc[9]='e';
cc[10]='\0';
for(k=0;k<11;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=60;
i++;
}
else if(ricechoice==3)
{
    cc[0]='S';
cc[1]='t';
cc[2]='e';
cc[3]='a';
cc[4]='m';
cc[5]='e';
cc[6]='d';
cc[7]=' ';
cc[8]='R';
cc[9]='i';
cc[10]='c';
cc[11]='e';
cc[12]='\0';
for(k=0;k<13;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=40;
i++;
}
else if(ricechoice==4)
{
    cc[0]='P';
cc[1]='u';
cc[2]='l';
cc[3]='a';
cc[4]='o';
cc[5]='\0';
for(k=0;k<6;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=50;
i++;
}
}ricechoice=0;
return;
}
void desserts()
{
while(dessertschoice!=7)
{
printf("%c PLS SELECT THE DESSERT FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: Apple Pie              ₹30",'\n');
printf("%c 2: Almond Malai Kulfi     ₹20",'\n');
printf("%c 3: Lemon Tart             ₹25",'\n');
printf("%c 4: Pistachio Phirni       ₹30",'\n');
printf("%c 5: Fudgy Chewy Brownies   ₹20",'\n');
printf("%c 6: Ice Cream              ₹20",'\n');
printf("%c 7:EXIT",'\n');
scanf("%d",&dessertschoice);
if(dessertschoice==1)
{
    cc[0]='A';
cc[1]='p';
cc[2]='p';
cc[3]='l';
cc[4]='1';
cc[5]=' ';
cc[6]='P';
cc[7]='i';
cc[8]='e';
cc[9]='\0';
for(k=0;k<10;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=30;
i++;
}
else if(dessertschoice==2)
{
    cc[0]='A';
cc[1]='l';
cc[2]='m';
cc[3]='o';
cc[4]='n';
cc[5]='d';
cc[6]=' ';
cc[7]='M';
cc[8]='a';
cc[9]='l';
cc[10]='a';
cc[11]='i';
cc[12]=' ';
cc[13]='K';
cc[14]='u';
cc[15]='l';
cc[16]='f';
cc[17]='i';
cc[18]='\0';
for(k=0;k<19;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=20;
i++;
}
else if(dessertschoice==3)
{
    cc[0]='L';
cc[1]='e';
cc[2]='m';
cc[3]='o';
cc[4]='n';
cc[5]=' ';
cc[6]='T';
cc[7]='a';
cc[8]='r';
cc[9]='t';
cc[10]='\0';
for(k=0;k<11;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=25;
i++;
}
else if(dessertschoice==4)
{
    cc[0]='P';
cc[1]='i';
cc[2]='s';
cc[3]='t';
cc[4]='a';
cc[5]='a';
cc[6]='c';
cc[7]='h';
cc[8]='i';
cc[9]='o';
cc[10]=' ';
cc[11]='P';
cc[12]='h';
cc[13]='i';
cc[14]='r';
cc[15]='n';
cc[16]='i';
cc[17]='\0';
for(k=0;k<18;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=30;
i++;
}
else if(dessertschoice==5)
{
    cc[0]='F';
cc[1]='u';
cc[2]='d';
cc[3]='g';
cc[4]='y';
cc[5]=' ';
cc[6]='C';
cc[7]='h';
cc[8]='e';
cc[9]='w';
cc[10]='y';
cc[11]=' ';
cc[12]='B';
cc[13]='r';
cc[14]='o';
cc[15]='w';
cc[16]='n';
cc[17]='i';
cc[18]='e';
cc[19]='s';
cc[20]='\0';
for(k=0;k<21;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=20;
i++;
}
else if(dessertschoice==6)
{
    cc[0]='I';
cc[1]='c';
cc[2]='e';
cc[3]=' ';
cc[4]='C';
cc[5]='r';
cc[6]='e';
cc[7]='a';
cc[8]='m';
cc[9]='\0';
for(k=0;k<10;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=20;
i++;
}
}dessertschoice=0;
return;
}
void beverages()
{
while(beverageschoice!=7)
{
printf("%c PLS SELECT THE BEVERAGES FROM LIST GIVEN BELOW %c BY ENTERING THE NUMBER IN FRONT OF IT",'\n','\n');
printf("%c 1: Tea                ₹10",'\n');
printf("%c 2: Coffee             ₹10",'\n');
printf("%c 3: Orange Juice       ₹25",'\n');
printf("%c 4: Milk Shake         ₹20",'\n');
printf("%c 5: Coke               ₹15",'\n');
printf("%c 6: Mango Shake        ₹25",'\n');
printf("%c 7:EXIT",'\n');
scanf("%d",&beverageschoice);
if(beverageschoice==1)
{
    cc[0]='T';
cc[1]='e';
cc[2]='a';
cc[3]='\0';
for(k=0;k<4;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=10;
i++;
}
else if(beverageschoice==2)
{
    cc[0]='C';
cc[1]='o';
cc[2]='f';
cc[3]='f';
cc[4]='e';
cc[5]='e';
cc[6]='\0';
for(k=0;k<7;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=10;
i++;
}
else if(beverageschoice==3)
{
    cc[0]='O';
cc[1]='r';
cc[2]='a';
cc[3]='n';
cc[4]='g';
cc[5]='e';
cc[6]=' ';
cc[7]='J';
cc[8]='u';
cc[9]='i';
cc[10]='c';
cc[11]='e';
cc[12]='\0';
for(k=0;k<13;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=25;
i++;
}
else if(beverageschoice==4)
{
    cc[0]='M';
cc[1]='i';
cc[2]='l';
cc[3]='k';
cc[4]=' ';
cc[5]='S';
cc[6]='h';
cc[7]='a';
cc[8]='k';
cc[9]='e';
cc[10]='\0';
for(k=0;k<11;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=20;
i++;
}
else if(beverageschoice==5)
{
cc[0]='C';
cc[1]='o';
cc[2]='k';
cc[3]='e';
cc[4]='\0';
for(k=0;k<5;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=15;
i++;
}
else if(beverageschoice==6)
{
cc[0]='M';
cc[1]='a';
cc[2]='n';
cc[3]='g';
cc[4]='o';
cc[5]=' ';
cc[6]='S';
cc[7]='h';
cc[8]='a';
cc[9]='k';
cc[10]='e';
cc[11]='\0';
for(k=0;k<12;k++)
{
    ol[i+1][k]=cc[k];
}
olc[i+1]=25;
i++;}
}beverageschoice=0;
return;
}
void orderlist()
{
    printf("%c *************************************************************************************",'\n');
printf("%c YOUR BILL ",'\n');
printf("%c YOUR NAME %s %s",'\n',fn,ln);
printf("%c YOUR NUMBER %s ",'\n',pn);
printf("%c YOUR ORDER ARE AS FOLLOWING",'\n');
printf("%c ITEM \t COST",'\n');
j=i+1;
printf("%c",'\n');
for(i=0;i<j;i++)
{for(k=0;k<25;k++)
{
    printf("%c",ol[i][k]);
}
    printf(" \t %d",olc[i]);
    printf("%c",'\n');

}
for(i=0;i<j+1;i++)
{
    total=olc[i]+total;

}
printf("%c Total cost of your order are %d",'\n',total);
printf("%c thank for your order",'\n');
getch();
return;
}
