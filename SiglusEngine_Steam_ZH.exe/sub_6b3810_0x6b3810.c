// 函数: sub_6b3810
// 地址: 0x6b3810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** edi = arg2
int32_t eax = edi[4]

if (eax u< arg3)
    sub_7431bf("invalid string position")
    noreturn

void* ebx = arg4
void* eax_1 = eax - arg3
void** ecx_1 = arg1[4]

if (eax_1 u< ebx)
    ebx = eax_1

if (0xffffffff - ecx_1 u<= ebx)
    sub_743191("string too long")
    noreturn

if (ebx != 0 && sub_541df0(arg1, ecx_1 + ebx, 0) != 0)
    if (edi[5] u>= 0x10)
        edi = *edi
    
    int32_t* ecx_3
    
    if (arg1[5] u< 0x10)
        ecx_3 = arg1
    else
        ecx_3 = *arg1
    
    if (ebx != 0)
        sub_748840(arg1[4] + ecx_3, arg3 + edi, ebx)
    
    int32_t ecx_5 = ecx_1 + ebx
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = ecx_5
    
    if (not(cond:1_1))
        (*arg1)[ecx_5] = 0
        return arg1
    
    *(arg1 + ecx_5) = 0

return arg1
