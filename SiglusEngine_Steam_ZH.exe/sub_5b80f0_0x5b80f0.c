// 函数: sub_5b80f0
// 地址: 0x5b80f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xa2) == 0)
    *(arg1 + 0xb0) = arg2
    return 

int32_t edx = *(arg1 + 0xa4)
int32_t edi = *(arg1 + 0xa8)

if (edi == edx)
    *(arg1 + 0xb0) = 0
    return 

int32_t ecx = *(arg1 + 0xac)
int32_t eax_4 = divs.dp.d(sx.q((arg2 - edx) * ecx), edi - edx)
bool cond:0 = *(arg1 + 0xa3) == 0
*(arg1 + 0xb0) = eax_4

if (not(cond:0))
    ecx -= 1

if (eax_4 s< 0)
    *(arg1 + 0xb0) = 0
    return 

if (eax_4 s> ecx)
    eax_4 = ecx

*(arg1 + 0xb0) = eax_4
