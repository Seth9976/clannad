// 函数: sub_5e3960
// 地址: 0x5e3960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
char* esi_2 = nullptr
int32_t ecx_2 = (*(arg1 + 0x304) - *(arg1 + 0x300)) s/ 0x15fc

if (ecx_2 s> 0)
    void* ecx_3 = data_bac458
    int32_t ebx_1 = 0
    int32_t eax_1 = ecx_2
    
    do
        if (*(ecx_3 + 0x37b) == 0)
            if (esi_2[*(ecx_3 + 0x314)] == 0)
                sub_5f38a0(*(arg1 + 0x300) + ebx_1)
                ecx_3 = data_bac458
            
            eax_1 = ecx_2
        
        esi_2 = &esi_2[1]
        ebx_1 += 0x15fc
    while (esi_2 s< eax_1)

int32_t i_2 = (*(arg1 + 0x4c0) - *(arg1 + 0x4bc)) s/ 0x15fc

if (i_2 s> 0)
    int32_t esi_3 = 0
    int32_t i
    
    do
        sub_5f38a0(*(arg1 + 0x4bc) + esi_3)
        esi_3 += 0x15fc
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t ecx_11 = *(arg1 + 0x67c) - *(arg1 + 0x678)
void* result
int32_t edx_6
edx_6:result = muls.dp.d(0xba506bb7, ecx_11)
int32_t i_3 = ecx_11 s/ 0x15fc

if (i_3 s> 0)
    int32_t esi_4 = 0
    int32_t i_1
    
    do
        result = sub_5f38a0(*(arg1 + 0x678) + esi_4)
        esi_4 += 0x15fc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
