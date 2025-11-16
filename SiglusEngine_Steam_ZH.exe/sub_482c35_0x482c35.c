// 函数: sub_482c35
// 地址: 0x482c35
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *(arg1 + 8)
int32_t* esi = arg3
char* eax = *esi
arg3 = eax
*(arg1 + 0x10) = eax
int32_t result

if (edx == 0)
    int32_t ecx_3 = *(*(arg1 + 4) + 4)
    
    if (ecx_3 u> 8)
        return 0x88760388
    
    switch (ecx_3)
        case 0, 6
            result = sub_482a25(arg2, zx.d(*eax))
            *esi = arg3 + 2
        case 1, 7
            result = sub_482a25(arg2, *eax)
            *esi = &arg3[1]
        case 2
            int32_t var_c_4 = ecx_3
            result = sub_482a91(arg2, fconvert.s(fconvert.t(*eax)))
            *esi = &arg3[1]
        case 3
            int32_t var_c_6 = ecx_3
            result = sub_482a91(arg2, fconvert.s(fconvert.t(*eax)))
            *esi = &arg3[2]
        case 4, 5
            result = sub_482a25(arg2, zx.d(*eax))
            *esi = arg3 + 1
        case 8
            int32_t ebx
            int32_t var_c_8 = ebx
            int32_t edi
            int32_t var_10_2 = edi
            result = sub_482b23(arg2, eax)
            int32_t* edi_1 = arg3
            int32_t* ecx_14 = edi_1
            void* edx_1 = ecx_14 + 1
            
            do
                ebx.b = *ecx_14
                ecx_14 += 1
            while (ebx.b != 0)
            
            *esi = ecx_14 - edx_1 + edi_1 + 1
else
    result = sub_482db7(edx, arg2, &arg3, 0)
    *esi = arg3

return result
