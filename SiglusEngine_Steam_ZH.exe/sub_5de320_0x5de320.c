// 函数: sub_5de320
// 地址: 0x5de320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x1a4) == 0 && *(arg1 + 0x17c) == 0)
    *(arg1 + 0xe4) += *(arg1 + 0x48)

int32_t edi = *(arg1 + 0xf0)
*(arg1 + 0xf0) = *(arg1 + 0x110)
void* result = sub_5ddaa0(arg1, arg2, nullptr)

if (*(arg1 + 0x3c) == 1)
    int32_t eax_3 = data_bac510
    int32_t ecx = *(arg1 + 0x44)
    *(arg1 + 0xe0) = ecx
    bool cond:1_1 = *(eax_3 + 0x10bd8) != 1
    *(arg1 + 0x178) = 1
    
    if (cond:1_1)
        *(arg1 + 0x170) = ecx
    else
        *(arg1 + 0x170) = *(arg1 + 0xe4)
    
    *(arg1 + 0x174) = 0
    result = sub_5de520(arg1)

bool cond:0 = *(arg1 + 0x1a4) != 0
*(arg1 + 0xf0) = edi

if (not(cond:0))
    *(arg1 + 0x17c) = 1
    *(arg1 + 0x1a4) = 1

return result
