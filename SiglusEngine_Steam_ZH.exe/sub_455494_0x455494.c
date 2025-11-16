// 函数: sub_455494
// 地址: 0x455494
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t esi_1

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 4
    **(arg1 + 0xc4) = 5
    *(*(arg1 + 0xc4) + 0x10) = 0
    esi_1 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (esi_1 != 0)
        goto label_4554dc
else
    esi_1 = not.d(arg2)
label_4554dc:
    int32_t* eax_4 = *(esi_1 + 4)
    
    if (eax_4[4] == 0 || *(esi_1 + 8) != 0xffffffff)
        int32_t eax_5 = *eax_4
        
        if (eax_5 s>= 5 && eax_5 s<= 9)
            if (*(arg1 + 0x3c) == 3)
                return sub_44e6d8(arg1, not.d(esi_1), arg3)
            
            char* ecx_6 = *(*(*(arg1 + 0xb0) + (*(esi_1 + 0x14) << 2)) + 0x40)
            int32_t eax_10 = **esi_1
            int32_t ecx_7
            
            if (ecx_6 != 0)
                ecx_7 = *(*(ecx_6 + 8) + (eax_10 << 2))
            else
                ecx_7 = eax_10
            
            if (arg3 == *(*(arg1 + 0x18) + ecx_7 * 0x18 + 4))
                return 0
            
            sub_4448a4(arg1, arg3, eax_10, ecx_6)
            return sub_448129(arg1, esi_1)
return 0x8876086c
