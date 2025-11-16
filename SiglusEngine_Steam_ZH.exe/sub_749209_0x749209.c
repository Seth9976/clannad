// 函数: sub_749209
// 地址: 0x749209
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t i = arg2
int32_t esi = *(arg1 + 0xc)
int32_t ecx_1 = *(arg1 + 0x10)
int32_t var_c_1 = ecx_1
int32_t var_8_1 = esi
int32_t edi = esi

while (i s>= 0)
    if (esi == 0xffffffff)
        _inconsistency()
        noreturn
    
    esi -= 1
    int32_t eax_1 = esi * 0x14
    
    if (*(eax_1 + ecx_1 + 4) s>= arg3)
        if (esi == 0xffffffff)
            goto label_749251
    else if (arg3 s<= *(eax_1 + ecx_1 + 8) || esi == 0xffffffff)
    label_749251:
        edi = var_8_1
        i -= 1
        var_8_1 = esi

*arg4 = esi + 1
*arg5 = edi

if (edi u<= *(arg1 + 0xc) && esi + 1 u<= edi)
    return (esi + 1) * 0x14 + ecx_1

_inconsistency()
noreturn
