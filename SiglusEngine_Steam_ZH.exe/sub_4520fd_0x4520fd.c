// 函数: sub_4520fd
// 地址: 0x4520fd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* ecx = *(arg1 + 0x30)
int32_t edi
int32_t var_14 = edi

if (ecx != 0)
    sub_44cbb2(ecx, 1)
    *(arg1 + 0x30) = 0

int32_t* ecx_1 = *(arg1 + 0x38)

if (ecx_1 != 0)
    sub_44ccc0(ecx_1, 3)
    *(arg1 + 0x38) = 0

int32_t eax = *(arg1 + 0x40)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x40) = 0

int32_t* eax_1 = *(arg1 + 0x88)

if (eax_1 != 0)
    (*(*eax_1 + 8))(eax_1)
    *(arg1 + 0x88) = 0

void* edi_2 = arg1 + 0x8c
int32_t i_1 = 2
int32_t i

do
    int32_t* eax_2 = *(edi_2 + 8)
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
        *(edi_2 + 8) = 0
    
    int32_t* eax_3 = *edi_2
    
    if (eax_3 != 0)
        (*(*eax_3 + 8))(eax_3)
        *edi_2 = 0
    
    edi_2 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
return sub_44bad4(arg1)
