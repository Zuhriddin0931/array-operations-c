#include <stdio.h>

// juft sonlarni chiqaradi (faqat 2 ga bo‘linadiganlar)
void juft_chiqar(int a[],int size);

// massivdagi barcha sonlarni 1 ga kamaytiradi
void sonlarni_kamaytr(int a[],int size);

// berilgan son qaysi indekslarda turganini topadi
void son_indeks(int a[],int size);

// massivni o‘sish tartibida joylaydi (sort)
void tartiblash(int a[],int size);

// berilgan son massivda necha marta uchrashini hisoblaydi
void son_ucrash(int a[],int size);

// massivni ekranga chiqarish uchun
void ekranga_chiqar(int a[],int size);

int main() {
    int size,son1;

    // foydalanuvchidan massiv kattaligini so‘raymiz
    printf("Nechta raqam kiritmoqchisiz ?\n");
    scanf("%d",&size);

    int a[size];

    // massiv elementlarini kiritish
    printf("Ixtiyoriy %d ta raqam kiriting =\n",size);
    for (int i=0;i<size;i++) {
        scanf("%d",&a[i]);
    }

    // menyu chiqaryapmiz
    printf("Amal tanlang:\n");
    printf("1. Faqat juft sonlarni chiqarish:\n");
    printf("2. Barcha sonlarni 1 ga kamaytirish:\n");
    printf("3. Berilgan sonning indekslarini ko‘rsatish:\n");
    printf("4. Massivni tartiblash:\n");
    printf("5. Son necha marta uchrashini aniqlash:\n");
    printf("6. Massivni ekranga chiqarish:\n");
    printf("7. Dasturdan chiqish:\n");

    scanf("%d",&son1);

    // foydalanuvchi chiqmaguncha ishlaydi
    while (1) {

        if (son1==1) {
            juft_chiqar(a,size);
        } else if (son1==2) {
            sonlarni_kamaytr(a,size);
        } else if (son1==3) {
            son_indeks(a,size);
        } else if (son1==4) {
            tartiblash(a,size);
        } else if (son1==5) {
            son_ucrash(a,size);
        } else if (son1==6) {
            ekranga_chiqar(a,size);
        } else if (son1==7) {
            break; // dasturdan chiqish
        }

        printf("\n");

        // yana menyu chiqariladi (loop davom etadi)
        printf("Amal tanlang:\n");
        printf("1. Faqat juft sonlarni chiqarish:\n");
        printf("2. Barcha sonlarni 1 ga kamaytirish:\n");
        printf("3. Berilgan sonning indekslarini ko‘rsatish:\n");
        printf("4. Massivni tartiblash:\n");
        printf("5. Son necha marta uchrashini aniqlash:\n");
        printf("6. Massivni ekranga chiqarish:\n");
        printf("7. Dasturdan chiqish:\n");

        scanf("%d",&son1);
    }

    return 0;
}

// juft sonlarni chiqarish
void juft_chiqar(int a[],int size) {
    for (int i=0;i<size;i++) {
        if (a[i]%2==0) {
            printf("%d ",a[i]);
        }
    }
}

// barcha sonlarni 1 ga kamaytirish
void sonlarni_kamaytr(int a[],int size) {
    for (int i=0;i<size;i++) {
        a[i]=a[i]-1;
    }

    for (int i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
}

// berilgan son qayerda turganini topish
void son_indeks(int a[],int size) {
    int son;
    printf("Qaysi son indekisini bilmoqchisiz ?\n");
    scanf("%d",&son);

    for (int i=0;i<size;i++) {
        if (a[i]==son) {
            printf("%d ",i);
        }
    }
}

// oddiy sorting (o‘sish tartibida)
void tartiblash(int a[],int size) {
    for (int i=0;i<size-1;i++) {
        for (int j=0;j<size-i-1;j++) {
            if (a[j]>a[j+1]) {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t; // bu yerda xatolik tuzatildi
            }
        }
    }

    for (int i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
}

// son necha marta uchrashini hisoblash
void son_ucrash(int a[],int size) {
    int count=0,son;

    printf("Qaysi sonni qidirmoqchisiz ?\n");
    scanf("%d",&son);

    for (int i=0;i<size;i++) {
        if (a[i]==son) {
            count++;
        }
    }

    printf("%d son %d marta uchragan ",son,count);
}

// massivni chiqarish
void ekranga_chiqar(int a[],int size) {
    for (int i=0;i<size;i++) {
        printf("%d ",a[i]);
    }
}