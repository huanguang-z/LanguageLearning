//#include"head.h"
//#define MaxTableSize 100000//�����ٵ����ɢ�б���
//typedef int Index;
//typedef Index Position;
//typedef enum { Legitimate, Empty, Deleted } EntryType;
////ɢ�е�Ԫ״̬���ͣ��ֱ��Ӧ���кϷ�Ԫ�ء��յ�Ԫ������ɾ��Ԫ��
//typedef struct HashEntry Cell;
//struct HashEntry//ɢ�б�Ԫ����
//{
//	ElementType Data;
//	EntryType Info;//��Ԫ״̬
//};
//
//typedef struct TblNode* HashTable;
//struct TblNode//ɢ�б�����
//{
//	int TableSize;//�����󳤶�
//	Cell* Cells;
//};
//
//int NextPrime(int N)
//{//���ش���N�Ҳ�����MAXTABLESIZE����С����
//	int i, p = (N % 2) ? N + 2 : N + 1;//�Ӵ���N����һ��������ʼ
//	while (p <= MaxTableSize)
//	{
//		for (i = (int)sqrt(p); i > 2; i--)
//		{
//			if (!(p % i))break;
//		}
//			if (i == 2) break;
//			else
//				p += 2;
//	}
//	return p;
//}
//
//HashTable CreateTable(int TableSize)
//{
//	HashTable H;
//	int i;
//	H = (HashTable)malloc(sizeof(struct TblNode));
//	H->TableSize = NextPrime(TableSize);//��֤ɢ�б���󳤶�������
//	H->Cells = (Cell*)malloc(H->TableSize * sizeof(Cell));
//	for (i = 0; i < H->TableSize; i++)//��ʼ����Ԫ״̬Ϊ���յ�Ԫ��
//		H->Cells[i].Info = Empty;
//	return H;
//}
//
////ƽ��̽�ⷨ
//Position Find(HashTable H, ElementType Key)
//{
//    Position CurrentPos, NewPos;
//    int CNum = 0; /* ��¼��ͻ���� */
//
//    NewPos = CurrentPos = Hash(Key, H->TableSize); /* ��ʼɢ��λ�� */
//    /* ����λ�õĵ�Ԫ�ǿգ����Ҳ���Ҫ�ҵ�Ԫ��ʱ��������ͻ */
//    while (H->Cells[NewPos].Info != Empty && H->Cells[NewPos].Data != Key) {
//        /* �ַ������͵Ĺؼ�����Ҫ strcmp ����!! */
///* ͳ��1�γ�ͻ�����ж���ż�� */
//        if (++CNum % 2) { /* �����γ�ͻ */
//            NewPos = CurrentPos + (CNum + 1) * (CNum + 1) / 4; /* ����Ϊ+[(CNum+1)/2]^2 */
//            if (NewPos >= H->TableSize)
//                NewPos = NewPos % H->TableSize; /* ����Ϊ�Ϸ���ַ */
//        }
//        else { /* ż���γ�ͻ */
//            NewPos = CurrentPos - CNum * CNum / 4; /* ����Ϊ-(CNum/2)^2 */
//            while (NewPos < 0)
//                NewPos += H->TableSize; /* ����Ϊ�Ϸ���ַ */
//        }
//    }
//    return NewPos; /* ��ʱNewPos������Key��λ�ã�������һ���յ�Ԫ��λ�ã���ʾ�Ҳ�����*/
//}
//
//bool Insert(HashTable H, ElementType Key)
//{
//    Position Pos = Find(H, Key); /* �ȼ��Key�Ƿ��Ѿ����� */
//
//    if (H->Cells[Pos].Info != Legitimate) { /* ��������Ԫû�б�ռ��˵��Key���Բ����ڴ� */
//        H->Cells[Pos].Info = Legitimate;
//        H->Cells[Pos].Data = Key;
//        /*�ַ������͵Ĺؼ�����Ҫ strcpy ����!! */
//        return true;
//    }
//    else {
//        printf("��ֵ�Ѵ���");
//        return false;
//    }
//}
//
////�������ӷ�
//#define KEYLENGTH 15                   /* �ؼ����ַ�������󳤶� */
//typedef char ElementType[KEYLENGTH + 1]; /* �ؼ����������ַ��� */
//typedef int Index;                     /* ɢ�е�ַ���� */
///******** �����ǵ�����Ķ��� ********/
//typedef struct LNode* PtrToLNode;
//struct LNode {
//    ElementType Data;
//    PtrToLNode Next;
//};
//typedef PtrToLNode Position;
//typedef PtrToLNode List;
///******** �����ǵ�����Ķ��� ********/
//
//typedef struct TblNode* HashTable; /* ɢ�б����� */
//struct TblNode {   /* ɢ�б��㶨�� */
//    int TableSize; /* �����󳤶� */
//    List Heads;    /* ָ������ͷ�������� */
//};
//
//HashTable CreateTable(int TableSize)
//{
//    HashTable H;
//    int i;
//
//    H = (HashTable)malloc(sizeof(struct TblNode));
//    /* ��֤ɢ�б���󳤶������������������5.3 */
//    H->TableSize = NextPrime(TableSize);
//
//    /* ���·�������ͷ������� */
//    H->Heads = (List)malloc(H->TableSize * sizeof(struct LNode));
//    /* ��ʼ����ͷ��� */
//    for (i = 0; i < H->TableSize; i++) {
//        H->Heads[i].Data[0] = '\0';
//        H->Heads[i].Next = NULL;
//    }
//
//    return H;
//}
//
//Position Find(HashTable H, ElementType Key)
//{
//    Position P;
//    Index Pos;
//
//    Pos = Hash(Key, H->TableSize); /* ��ʼɢ��λ�� */
//    P = H->Heads[Pos].Next; /* �Ӹ�����ĵ�1����㿪ʼ */
//    /* ��δ����β������Keyδ�ҵ�ʱ */
//    while (P && strcmp(P->Data, Key))
//        P = P->Next;
//
//    return P; /* ��ʱP����ָ���ҵ��Ľ�㣬����ΪNULL */
//}
//
//bool Insert(HashTable H, ElementType Key)
//{
//    Position P, NewCell;
//    Index Pos;
//
//    P = Find(H, Key);
//    if (!P) { /* �ؼ���δ�ҵ������Բ��� */
//        NewCell = (Position)malloc(sizeof(struct LNode));
//        strcpy(NewCell->Data, Key);
//        Pos = Hash(Key, H->TableSize); /* ��ʼɢ��λ�� */
//        /* ��NewCell����ΪH->Heads[Pos]����ĵ�1����� */
//        NewCell->Next = H->Heads[Pos].Next;
//        H->Heads[Pos].Next = NewCell;
//        return true;
//    }
//    else { /* �ؼ����Ѵ��� */
//        printf("��ֵ�Ѵ���");
//        return false;
//    }
//}
//
//void DestroyTable(HashTable H)
//{
//    int i;
//    Position P, Tmp;
//
//    /* �ͷ�ÿ������Ľ�� */
//    for (i = 0; i < H->TableSize; i++) {
//        P = H->Heads[i].Next;
//        while (P) {
//            Tmp = P->Next;
//            free(P);
//            P = Tmp;
//        }
//    }
//    free(H->Heads); /* �ͷ�ͷ������� */
//    free(H);        /* �ͷ�ɢ�б��� */
//}

