#include<stdio.h>
int main(){
	double total=0,money=0;
	int choose;
	printf("=======CHUONG TRINH DOI TIEN TE=======\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf("7. VND to GBP\n");
	printf("8. VND to JPY\n");
	printf("Nhap don vi tien te ban muon chuyen doi (1-8) ? ");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 25.365;
			printf("so tien ban doi USD sang VND la: %.2f VND",total);
			break;	
		case 2:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 26.638;
			printf("so tien ban doi EUR sang VND la: %.2f VND",total);
			break;
		case 3:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 32.366;
			printf("so tien ban doi GBP sang VND la: %.2f VND",total);
			break;
		case 4:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 16.654;
			printf("so tien ban doi JPY sang VND la: %.2f VND",total);
			break;
		case 5:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 0.000039;
			printf("so tien ban doi VND sang USD la: %.6f USD",total);
			break;
		case 6:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 0.000037;
			printf("so tien ban doi VND sang EUR la: %.6f EUR",total);
			break;
		case 7:
			printf("so tien ban muon doi: ");
			scanf("%lf",&money);
			total=money * 0.000031;
			printf("so tien ban doi VND sang GBP la: %.6f GBP",total);
			break;
	    case 8:
			printf("so tien ban muon doi: ");
			scanf("lf",&money);
			total=money * 0.0060;
			printf("so tien ban doi VND sang JPY la: %.4f JPY",total);
			break;
		default:
			printf("khong hop le chon 1-8 thoi");
			break;
	}
	return 0;
}
