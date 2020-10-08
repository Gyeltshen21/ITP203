#include<stdio.h>
int main(){
    float radius,area,length,height,breath;
    int choice;
    printf("1.To calculate the area of circle\n");
    printf("2.To calculate the area of rectangle\n");
    printf("3.To calculate the area of triangle\n");
    printf("Enter your choice to do operation:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        //this case will calculate the area of circle
        printf("Enter the radius to find the area of circle:");
        scanf("%f",&radius);
        area = 3.14*radius*radius;
        printf("The area of circle is = %f\n",area);
        break;

        case 2:
        //case to calculate the area of rectangle
        printf("Enter the length first and followed by breath second;");
        scanf("%f",&length);
        scanf("%f",&breath);
        area=length*breath;
        printf("The area of rectangle is=%f\n",area);
        break;
        
        case 3:
        //calculate the area of triangle
        printf("enter the height of triangle: ");
		scanf("%f", &height);
		printf("enter the breath of triangle: ");
		scanf("%f", &breath);
		area = 0.5*breath*height;
		printf("The area of triangle = %f\n",area);
		break;

        default:
        printf("invalid\n");

    }
    return 0;

}
