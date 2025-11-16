// 函数: sub_5d8430
// 地址: 0x5d8430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* edi = arg1 + 0x228

if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
    int32_t esi_2 = 0
    int32_t i = 0
    
    do
        void* ecx_1 = *edi + esi_2
        *(ecx_1 + 0xe0) = *(ecx_1 + 8)
        *(ecx_1 + 0xe4) = *(ecx_1 + 0xc)
        sub_5dbf60(ecx_1)
        i += 1
        esi_2 += 0x1c0
    while (i s< (*(edi + 4) - *edi) s/ 0x1c0)

*(arg1 + 0x1e0) = 0
int32_t result = sub_5da590(edi, 1)
*(arg1 + 0x1dc) = 0
*(arg1 + 0x338) = 0
*(arg1 + 0x348) = 0
return result
