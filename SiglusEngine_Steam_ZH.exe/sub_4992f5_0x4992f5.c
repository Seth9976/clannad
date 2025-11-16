// 函数: sub_4992f5
// 地址: 0x4992f5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg3 == 0 || *arg3 != 0x31 || arg4 != 0x38)
    return 0xfffffffa

if (arg1 == 0)
    return 0xfffffffe

bool cond:0_1 = *(arg1 + 0x20) != 0
*(arg1 + 0x18) = 0

if (not(cond:0_1))
    *(arg1 + 0x20) = sub_4e425d
    *(arg1 + 0x28) = 0

if (*(arg1 + 0x24) == 0)
    *(arg1 + 0x24) = sub_4e427d

void* eax_1 = (*(arg1 + 0x20))(*(arg1 + 0x28), 1, 0x18)
*(arg1 + 0x1c) = eax_1

if (eax_1 == 0)
    return 0xfffffffc

int32_t ecx_1 = arg2
*(eax_1 + 0x14) = 0
*(*(arg1 + 0x1c) + 0xc) = 0

if (ecx_1 s< 0)
    ecx_1 = neg.d(ecx_1)
    *(*(arg1 + 0x1c) + 0xc) = 1

int32_t result

if (ecx_1 s< 8 || ecx_1 s> 0xf)
    result = 0xfffffffe
else
    *(*(arg1 + 0x1c) + 0x10) = ecx_1
    int32_t eax_6 = *(*(arg1 + 0x1c) + 0xc)
    int32_t eax_7 = neg.d(eax_6)
    *(*(arg1 + 0x1c) + 0x14) =
        sub_4e4301(arg1, not.d(sbb.d(eax_7, eax_7, eax_6 != 0)) & sub_4e2ce8, 1 << ecx_1.b)
    
    if (*(*(arg1 + 0x1c) + 0x14) != 0)
        sub_499270(arg1)
        return 0
    
    result = 0xfffffffc

sub_4992b4(arg1)
return result
