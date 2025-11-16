// 函数: sub_4a27b4
// 地址: 0x4a27b4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t edi_1 = arg5
int32_t i = sub_4a2766(arg1, arg2, arg3, edi_1)
arg5 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* eax_1 = *(*(arg1 + 0x18) + (arg5 << 2))
        int32_t j = 0
        
        if (*(eax_1 + 0x24) == 0 && *(eax_1 + 0x14) u> 0)
            do
                void* ecx_3 = *(*(arg1 + 0x18) + (*(*(eax_1 + 0x18) + (j << 2)) << 2))
                
                if (edi_1 != *(eax_1 + 0x38))
                    if (edi_1 == *(ecx_3 + 0x38))
                        *arg4 += 0x10000
                else if (*(ecx_3 + 0x24) != 0)
                    *arg4 -= 0x10000
                
                j += 1
            while (j u< *(eax_1 + 0x14))
        
        arg5 += 1
        i = arg5
    while (i u< *(arg1 + 0xc))

return i
