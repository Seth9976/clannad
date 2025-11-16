// 函数: sub_419ab2
// 地址: 0x419ab2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg2
int32_t edi
int32_t var_1c = edi
int32_t edi_1 = arg5
void* eax_2 = arg4 * edi_1 + edx

if (edx u< eax_2)
    arg4 = edx + (arg3 << 2)
    
    do
        int32_t* var_8_1 = arg1
        
        if (edx u< arg4)
            int32_t* ecx_2 = edx + 4
            int32_t* var_10_1 = ecx_2
            int32_t i_1 = ((arg4 - edx - 1) u>> 3) + 1
            int32_t i
            
            do
                int32_t edx_1 = *(ecx_2 + edi_1)
                int32_t edi_2 = *(edi_1 + ecx_2 - 4)
                int32_t edx_2 = *ecx_2
                int32_t ecx_3 = ecx_2[-1]
                int32_t ebx_12 = ((ecx_3 u>> 2 & 0xffc03fc0) + (edi_2 u>> 2 & 0xffc03fc0)
                    + (edx_1 u>> 2 & 0xffc03fc0) + (edx_2 u>> 2 & 0xffc03fc0) - 0x7fff80) ^ ((ecx_3
                    & 0xff00ff) + (edi_2 & 0xff00ff) + (edx_1 & 0xff00ff) + (edx_2 & 0xff00ff)
                    + 0x20002) u>> 2
                edi_1 = arg5
                int32_t* ecx_9 = var_8_1
                var_8_1 = &var_8_1[1]
                *ecx_9 = (ebx_12 & 0xff00ff) ^ ((ecx_3 u>> 2 & 0x3fc03fc0)
                    + (edi_2 u>> 2 & 0x3fc03fc0) + (edx_1 u>> 2 & 0x3fc03fc0)
                    + (edx_2 u>> 2 & 0x3fc03fc0) + 0x800080)
                ecx_2 = &var_10_1[2]
                i = i_1
                i_1 -= 1
                var_10_1 = ecx_2
            while (i != 1)
            edx = arg2
        
        arg1 += arg6
        int32_t ecx_12 = edi_1 * 2
        arg4 += ecx_12
        edx += ecx_12
        arg2 = edx
    while (edx u< eax_2)

return 0
