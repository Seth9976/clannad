// 函数: sub_464c00
// 地址: 0x464c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[5]
int32_t edi
int32_t var_c = edi

if (ecx - 0xc8 u> 0xa)
label_464c7e:
    void* eax_7 = *arg1
    *(eax_7 + 0x14) = 0x14
    *(eax_7 + 0x18) = ecx
    (*eax_7)(arg1)
    return 0

switch (ecx)
    case 0xc8
        (*(arg1[0x6e] + 4))(arg1)
        (*(arg1[6] + 8))(arg1)
        arg1[5] = 0xc9
    label_464c49:
        int32_t result = (*arg1[0x6e])(arg1)
        
        if (result != 1)
            return result
        
        sub_464a90(arg1)
        arg1[5] = 0xca
        return result
    case 0xc9
        goto label_464c49
    case 0xca
        return 1
    case 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd2
        return (*arg1[0x6e])(arg1)
    case 0xd1
        goto label_464c7e
