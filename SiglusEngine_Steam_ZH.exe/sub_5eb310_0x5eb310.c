// 函数: sub_5eb310
// 地址: 0x5eb310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
FI::`default constructor closure'(arg1 + 0x12d0)
int32_t* esi = *(arg1 + 0x1580)
sub_6efe60(esi)
esi[0x48] = 0
esi[0x49] = 0
esi[0x4a] = 0
esi[0x4b] = 0
sub_6efdb0(esi)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x6bca1af3, *(arg1 + 0x158c) - *(arg1 + 0x1588))
int32_t edx_1 = edx s>> 7
int32_t i_4 = (edx_1 u>> 0x1f) + edx_1
int32_t i_2 = i_4

if (i_4 s> 0)
    int32_t ebx_1 = 0
    int32_t i
    
    do
        int32_t* esi_2 = *(arg1 + 0x1588) + ebx_1
        sub_6efe60(esi_2)
        esi_2[0x48] = 0
        esi_2[0x49] = 0
        esi_2[0x4a] = 0
        esi_2[0x4b] = 0
        sub_6efdb0(esi_2)
        ebx_1 += 0x130
        i = i_2
        i_2 -= 1
    while (i != 1)

__builtin_memset(arg1 + 0x15a0, 0, 0x36)
*(arg1 + 0x15d8) = 0
int32_t* esi_3 = *(arg1 + 0x15dc)
*(arg1 + 0x15dc) = 0

if (esi_3 != 0)
    bool cond:0_1 = esi_3[1] != 1
    esi_3[1]
    esi_3[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_3 + 4))()
        int32_t ebx_2 = esi_3[2]
        esi_3[2] -= 1
        
        if (ebx_2 == 1)
            (*(*esi_3 + 8))()

int32_t ecx_11 = *(arg1 + 0x1438) - *(arg1 + 0x1434)
int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0xba506bb7, ecx_11)
int32_t i_3 = ecx_11 s/ 0x15fc

if (i_3 s> 0)
    int32_t esi_4 = 0
    int32_t i_1
    
    do
        *(arg1 + 0x1434)
        result = sub_5eb310()
        esi_4 += 0x15fc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
