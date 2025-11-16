// 函数: sub_5affa0
// 地址: 0x5affa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0x1b4) s< 1
int32_t ecx = *(arg1 + 0x188)
int32_t eax = *(arg1 + 0x18c)
*(arg1 + 0x1c8) = 0
*(arg1 + 0x1a8) = ecx
*(arg1 + 0x1ac) = eax
*(arg1 + 0x1b0) = 0

if (not(cond:0) && *(arg1 + 0x1c0) s>= 0 && ecx s>= 1)
    *(arg1 + 0x1a8) = 1

if (*(arg1 + 0x1a8) != 0)
    *(arg1 + 0x1ca) = 0
    return eax

bool cond:1 = *(arg1 + 0x1cd) == 0
*(arg1 + 0x1a8) = 0

if (not(cond:1) && *(data_bac4a0 + 0x1b4) s<= 1)
    sub_661420()

int32_t eax_2 = sub_550bd0(arg1)
*(arg1 + 0x1c9) = 0
*(arg1 + 0x1ca) = 0
return eax_2
