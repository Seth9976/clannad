// 函数: sub_72fa50
// 地址: 0x72fa50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t j_3 = *(arg1 + 0x5c)
int32_t* eax_1 = *(*(arg1 + 0x1c0) + 0x18)
void* edx = *eax_1
int32_t edx_1 = eax_1[1]
char** result = eax_1[2]
char** result_1 = result

if (arg4 s> 0)
    int32_t* edi_1 = arg3
    result = arg2 - edi_1
    arg2 = result
    int32_t j_2 = j_3
    int32_t i
    
    do
        char* eax_3 = *(result + edi_1)
        int32_t j_1 = j_2
        void* esi_1 = *edi_1
        
        if (j_2 != 0)
            void* edi_3 = edx
            int32_t j
            
            do
                char* ecx_1 = zx.d(*eax_3)
                eax_3 = &eax_3[3]
                esi_1 += 1
                char edx_3 = *(ecx_1 + edi_3) + *(zx.d(eax_3[0xfffffffe]) + edx_1)
                edi_3 = edx
                *(esi_1 - 1) = edx_3 + *(zx.d(eax_3[0xffffffff]) + result_1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            edi_1 = arg3
            j_2 = j_3
        
        result = arg2
        edi_1 = &edi_1[1]
        i = arg4
        arg4 -= 1
        arg3 = edi_1
    while (i != 1)

return result
