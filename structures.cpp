#include<iostream>
struct mobile{
     char mobile_name[20];
     char mobile_brand[10];
     char model_number[10];
     int mac_address;
     int cost;
};
struct laptop{
     char laptop_name[20];
     char laptop_brand[10];
     char model_number[10];
     int mac_address;
     char model_type[20];
     int cost;
};
struct earpods{
     char pods_name[10];
     char pods_brand[20];
     char model_number[10];
     int pod_serial_num;
     char model_type[20];
};
int main()
{ 
     int n;
     char code;
     struct mobile m[10];
     struct laptop l[10];
     struct earpods e[10];

     printf("enter the number of items going to add in database:");
     scanf("%d",&n);
     printf("choose the product to be added(products with codes ):\n1.mobiles---m\n2.laptops---l\n3.earpods---e");
     scanf("%d",&code);
     switch(code)
     {
          case 'm':
          for(int i=0;i<n;i++)
          {
               printf("mobile name:");
               fgets(m[i].mobile_name,20,stdin);
               printf("mobile brand:");
               fgets(m[i].mobile brand,10,stdin);
               printf("model number: ");
               fgets(m[i].model_number,10,stdin);
               printf("mac address:");
               scanf("%d",&m[i].mac_address);
               printf("price:");
               scanf("%d",&m[i].cost);
          }
          case 'l':
                    for(int i=0;i<n;i++)
          {
               printf("mobile name:");
               fgets(m[i].mobile_name,20,stdin);
               printf("mobile brand:");
               fgets(m[i].mobile brand,10,stdin);
               printf("model number: ");
               fgets(m[i].model_number,10,stdin);
               printf("mac address:");
               scanf("%d",&m[i].mac_address);
               printf("price:");
               scanf("%d",&m[i].cost);
          }

     }



}