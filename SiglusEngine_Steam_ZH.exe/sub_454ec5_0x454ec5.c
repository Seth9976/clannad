// 函数: sub_454ec5
// 地址: 0x454ec5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t esi_1

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 2
    **(arg1 + 0xc4) = 3
    *(*(arg1 + 0xc4) + 0x10) = 0
    *(*(arg1 + 0xc4) + 0x14) = 4
    *(*(arg1 + 0xc4) + 0x18) = 4
    esi_1 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (esi_1 != 0)
        goto label_454f16
else
    esi_1 = not.d(arg2)
label_454f16:
    int32_t* eax_4 = *(esi_1 + 4)
    
    if (eax_4[1] == 2 && (eax_4[4] == 0 || *(esi_1 + 8) != 0xffffffff))
        if (*(arg1 + 0x3c) == 3)
            return sub_44e3b2(arg1, not.d(esi_1), arg3)
        
        int32_t result = sub_444a77(eax_4, *esi_1, arg3, 1)
        
        if (result s< 0)
            return result
        
        return sub_448129(arg1, esi_1)
return 0x8876086c
