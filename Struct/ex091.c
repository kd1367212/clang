//ex091.c ��
#include<stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}

main()
{
	struct profile student;
	struct profile* p;
	p = &student;

	//p->name �͐擪�A�h���X���w�肵�Ă���
	printf("���O����� : "); scanf("%s",p->name);

	printf("���N�������󔒂ŋ�؂��ē��� : ");

	//p->birth[ ] �Ǝw�肵�Ă���̂ŃA�h���X���w�肷�邽�߂� & ������
	scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);

	printf("���t�^����� : "); scanf("%s",student.blood);

	printf("%s  %d �N %d �� %d ���� ���t�^ %s �^", p->name,p->birth[0],
		p->birth[1],p->birth[2], p->blood);
}