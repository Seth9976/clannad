// 函数: sub_4dcf30
// 地址: 0x4dcf30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = *(arg1 + 0x24)
void* ecx = *(arg1 + 0x1ac)
int32_t var_8 = 0

if (i s<= 0)
    return 

int32_t eax = *(arg1 + 0x140)
void* eax_1 = ecx + (*(ecx + 0x40) << 2) + 0x38
void* ebx_1 = *(arg1 + 0xdc) + 0xc
int32_t edi
int32_t var_24_1 = edi
int32_t ecx_3

do
    uint32_t ecx_2 = *(ebx_1 + 0x18) * *ebx_1
    int32_t temp0_1 = divs.dp.d(sx.q(ecx_2), eax)
    uint32_t esi_1 = modu.dp.d(0:(*(ebx_1 + 0x20)), ecx_2)
    
    if (esi_1 == 0)
        esi_1 = ecx_2
    
    ecx_3 = var_8
    
    if (ecx_3 == 0)
        *(ecx + 0x48) = divs.dp.d(sx.q(esi_1 - 1), temp0_1) + 1
    
    int32_t j_1 = temp0_1 * 2
    
    if (j_1 s> 0)
        int32_t* ecx_4 = *(*eax_1 + (ecx_3 << 2)) + (esi_1 << 2)
        int32_t* eax_13 = ecx_4
        int32_t j
        
        do
            *eax_13 = ecx_4[-1]
            eax_13 = &eax_13[1]
            j = j_1
            j_1 -= 1
        while (j != 1)
        ecx_3 = var_8
    
    ebx_1 += 0x54
    var_8 = ecx_3 + 1
while (ecx_3 + 1 s< i)
