/*
 *    Real-time Billing with Discount & Tax
 *    	Inputs:
 *    		Total Bill Amount
 *    	    Customer type (1-Regular, 2-Member, 3-Premium)
 *    	Logic:
 *    		If amount ≥ 5000
 *    			Regular → 5% discount
 *    			Member → 10% discount
 *    			Premium → 15% discount
 *    		Else
 *    			Regular → No discount
 *    			Member → 5%
 *    			Premium → 10%
 *
 *    		After discount, apply 18% GST → Final Bill
 */

#include <stdio.h>

int main()
{
    float billAmount;
    int customerType;
    float discount;

    printf("1. Regular\n2. Member\n3. Premium\nSelect Your Customer Type : ");
    scanf("%d", &customerType);
    printf("Enter Bill Amount : ");
    scanf("%f", &billAmount);

    if (billAmount >= 5000)
    {
        if (customerType == 1)
        {
            discount = 5;
            printf("Amount - %f\tRegular Customer\n", billAmount);
        }
        else if (customerType == 2)
        {
            discount = 10;
            printf("Amount - %f\tMember Customer\n", billAmount);
        }
        else
        {
            discount = 15;
            printf("Amount - %f\tPremium Customer\n", billAmount);
        }
    }
    else
    {
        if (customerType == 1)
        {
            discount = 0;
            printf("Amount - %f\tRegular Customer\n", billAmount);
        }
        else if (customerType == 2)
        {
            discount = 5;
            printf("Amount - %f\tMember Customer\n", billAmount);
        }
        else
        {
            discount = 10;
            printf("Amount - %f\tPremium Customer\n", billAmount);
        }
    }

    printf("Bill Before Discount of %0.1f percent = %f\n", discount, billAmount);

    float discountAmount = billAmount * discount / 100;
    printf("Discount Amount = %f\n", discountAmount);

    billAmount = billAmount - discountAmount;
    printf("Bill After Discount = %f\n", billAmount);

    float gstAmount = billAmount * 18 / 100;
    printf("Gst Amount = %f\n", gstAmount);

    billAmount = billAmount + gstAmount;
    printf("Bill After GST of 18 percent = %f", billAmount);

    return 0;
}