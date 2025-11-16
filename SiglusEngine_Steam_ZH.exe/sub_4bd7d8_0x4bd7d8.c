// 函数: sub_4bd7d8
// 地址: 0x4bd7d8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = (*(arg2 + 0x6c)).b
uint32_t edx_1 = zx.d(*(arg2 + 0x6d))
*arg3 = edx_1
uint32_t eax_1 = zx.d(eax)
int32_t esi_1 = 1
bool cond:0_1

if (eax_1 != 1)
    esi_1 = 3
    
    if (eax_1 == 3)
        cond:0_1 = edx_1 u>= *(arg1 + 0x3c)
        goto label_4bd808
else
    cond:0_1 = edx_1 u>= *(arg1 + 0x28)
label_4bd808:
    
    if (not(cond:0_1))
        *arg4 = esi_1
        return 0
return 0x80004005
