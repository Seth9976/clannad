// 函数: sub_4e12a0
// 地址: 0x4e12a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1[0x73]
int32_t edx = *(result + 0xc)
int32_t ebx = arg1[0x52]
int32_t edi
int32_t var_34 = edi
int32_t edi_1 = arg1[0x1c]
int32_t ecx_1 = *(result + 8)
int32_t ecx_2 = *(result + 0x10)
int32_t edx_1 = *(result + 0x14)
int32_t edi_2 = edi_1 & 0xfffffff8
int32_t var_24 = ebx
int32_t var_2c = edi_2

if (arg5 - 1 s>= 0)
    int32_t eax = edi_2 * 3
    result = arg3 << 2
    void* i_1 = arg5
    void* i
    
    do
        int32_t* ecx_7 = *(result + *arg2)
        int32_t* edx_4 = *(result + arg2[2])
        int32_t* ecx_9 = *(result + arg2[1])
        int32_t* edx_5 = arg4
        void* esi_1 = *edx_5
        result += 4
        arg3 = result
        arg4 = &edx_5[1]
        
        if (edi_2 u> 0)
            sub_4e7950(edi_2, ecx_7, ecx_9, edx_4, esi_1)
            result = arg3
        
        void* esi_2 = esi_1 + eax
        
        if (edi_2 u< edi_1)
            int32_t* edx_10 = edx_4 - ecx_9
            char* eax_3 = ecx_9 + edi_2
            arg5 = edx_10
            arg1 = edi_1 - edi_2
            
            while (true)
                uint32_t edi_3 = zx.d(*(edx_10 + eax_3))
                uint32_t ecx_14 = zx.d(*(ecx_7 - ecx_9 + eax_3))
                char* edx_13
                edx_13.b = (*(ecx_1 + (edi_3 << 2)) + ecx_14)[ebx]
                *esi_2 = edx_13.b
                ebx = var_24
                int32_t edx_18
                edx_18.b = *(((*(edx_1 + (zx.d(*eax_3) << 2)) + *(ecx_2 + (edi_3 << 2))) s>> 0x10)
                    + ecx_14 + ebx)
                *(esi_2 + 1) = edx_18.b
                ecx_14.b = (*(edx + (zx.d(*eax_3) << 2)) + ecx_14)[ebx]
                *(esi_2 + 2) = ecx_14.b
                esi_2 += 3
                eax_3 = &eax_3[1]
                bool cond:2_1 = arg1 != 1
                arg1 -= 1
                
                if (not(cond:2_1))
                    break
                
                edx_10 = arg5
            
            edi_2 = var_2c
            result = arg3
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
