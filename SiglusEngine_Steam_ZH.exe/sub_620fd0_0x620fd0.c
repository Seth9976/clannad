// 函数: sub_620fd0
// 地址: 0x620fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = data_bac458
int32_t edi = *(esi + 0x340)
char* ebx = *(esi + 0x344)
void* ecx_5

if (edi s< 0)
    ecx_5 = data_bac4a0
    *(ecx_5 + 0x104) = 0
else
    int32_t* eax_1 = data_bac48c
    int32_t edx_1 = *eax_1
    int32_t eax_2
    int32_t edx_2
    edx_2:eax_2 = muls.dp.d(0x2aaaaaab, eax_1[1] - edx_1)
    int32_t edx_3 = edx_2 s>> 1
    
    if ((edx_3 u>> 0x1f) + edx_3 s<= edi || ebx s< 0)
        ecx_5 = data_bac4a0
        *(ecx_5 + 0x104) = 0
    else
        int32_t* ecx_4 = edx_1 + edi * 0xc
        
        if (ecx_4[1] - *ecx_4 s<= ebx)
            ecx_5 = data_bac4a0
            *(ecx_5 + 0x104) = 0
        else
            ecx_5 = data_bac4a0
            
            if (ebx[*ecx_4] == 0)
                *(ecx_5 + 0x104) = 0
            else
                *(ecx_5 + 0x104) = 1

if (*(ecx_5 + 0x104) != 0 || *(esi + 0x354) != 0)
    return 

int32_t eax
eax.b = *(data_bac4e4 + 0x19a)

if (eax.b != 0)
    return 

char* edx_4 = data_bac498
*edx_4 = eax.b
eax = sub_660000()

if (eax.b == 0)
    *edx_4 = eax.b

*(ecx_5 + 0xd1) = 1
