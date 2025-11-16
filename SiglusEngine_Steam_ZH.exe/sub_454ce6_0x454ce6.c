// 函数: sub_454ce6
// 地址: 0x454ce6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t esi_1

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 2
    **(arg1 + 0xc4) = 3
    *(*(arg1 + 0xc4) + 0x10) = arg4
    *(*(arg1 + 0xc4) + 0x14) = 4
    *(*(arg1 + 0xc4) + 0x18) = 4
    esi_1 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (esi_1 != 0)
        goto label_454d3a
else
    esi_1 = not.d(arg2)
label_454d3a:
    int32_t* eax_4 = *(esi_1 + 4)
    
    if (eax_4[1] == 2 && arg4 u<= eax_4[4] && *(esi_1 + 8) == 0xffffffff)
        if (*(arg1 + 0x3c) == 3)
            return sub_44e503(arg1, not.d(esi_1), arg3, arg4)
        
        int32_t result = sub_444ff9(eax_4, *esi_1, arg3, arg4)
        
        if (result s< 0)
            return result
        
        return sub_448129(arg1, esi_1)
return 0x8876086c
