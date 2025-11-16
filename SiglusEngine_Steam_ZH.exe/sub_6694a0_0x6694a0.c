// 函数: sub_6694a0
// 地址: 0x6694a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ecx_1 = arg1
int16_t eax_3 = *(ecx_1 + 6)
int32_t* var_30 = ecx_1

if (eax_3 s> 8)
label_6694dc:
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0x80004005

int32_t edx_1 = 0
void var_2c
void* prgpvarg = &var_2c

if (eax_3 == 0)
    prgpvarg = nullptr

int32_t i = 0

if (arg2[3] u> 0)
    do
        if (prgpvarg == 0)
            goto label_6694dc
        
        int32_t ebx_1 = *(arg2[1] + (i << 2))
        
        if (ebx_1 u>= 8)
            goto label_6694dc
        
        i += 1
        int32_t ecx_6 = *arg2 + edx_1
        edx_1 += 0x10
        *(prgpvarg + (ebx_1 << 2)) = ecx_6
    while (i u< arg2[3])
    
    ecx_1 = var_30

if (i u< arg2[2])
    int32_t ebx_3 = i << 4
    
    do
        if (prgpvarg == 0)
            goto label_6694dc
        
        int32_t ecx_8 = sx.d(*(ecx_1 + 6)) - i
        int32_t edx_3 = *arg2 + ebx_3
        i += 1
        ebx_3 += 0x10
        *(prgpvarg + (ecx_8 << 2) - 4) = edx_3
        ecx_1 = var_30
    while (i u< arg2[2])

int32_t (* var_40)(void* arg1) = sub_760ded
int32_t (** pvInstance)(void* arg1) = &var_40
int32_t ecx
int32_t var_4c = ecx
int32_t var_48 = arg4
int32_t var_44 = arg5
VARIANT pvarg
__builtin_memset(&pvarg, 0, 0x10)
VariantInit(&pvarg)
VARIANT* pvargResult = &pvarg

if (arg3 != 0)
    pvargResult = arg3

HRESULT result = DispCallFunc(&pvInstance, 0, *var_30, zx.d(var_30[1].w), sx.d(*(var_30 + 6)), 
    &var_30[2], prgpvarg, pvargResult)
VariantClear(&pvarg)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
