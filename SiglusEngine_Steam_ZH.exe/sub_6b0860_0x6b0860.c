// 函数: sub_6b0860
// 地址: 0x6b0860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (data_bac4f5 == 0)
    sub_6b0680()

if (arg7 s>= arg2 || arg8 s>= arg3)
    return 

int32_t i_2 = arg2 - arg7
int32_t j_2 = arg5

if (i_2 s< arg5)
    j_2 = i_2

if (j_2 s<= 0)
    return 

int32_t i_3 = arg3 - arg8
i_2 = arg6

if (i_3 s< i_2)
    i_2 = i_3

if (i_2 s<= 0)
    return 

char* edi_1 = &arg1[(arg2 * arg8 + arg7) << 2]
char* esi_4 = arg4
int32_t i_1 = i_2
int32_t i

do
    int32_t j_1 = j_2
    int32_t j
    
    do
        i_2.b = esi_4[3]
        i_2.b = i_2.b
        
        if (i_2.b == 0)
            edi_1 = &edi_1[4]
            esi_4 = &esi_4[4]
        else if (i_2.b != 0xff)
            int32_t ebx
            ebx.b = edi_1[3]
            ebx.b = ebx.b
            
            if (ebx.b != 0)
                ebx.b = esi_4[3]
                data_4eccf7c = ebx
                int32_t ecx_6 = data_4eccf7c << 2
                int32_t eax_3
                eax_3.b = edi_1[3]
                i_2 = eax_3 << 2
                int32_t ecx_10 = *(*(ecx_6 + &data_c6cd40) + i_2)
                
                if (ecx_10 != 0)
                    int32_t edx_7 = *(*(ecx_6 + &data_bec540) + i_2)
                    int32_t ebx_1
                    ebx_1.b = esi_4[2]
                    data_4eccf80 = ebx_1
                    int32_t ebx_2
                    ebx_2.b = esi_4[1]
                    data_4eccf84 = ebx_2
                    int32_t ebx_3
                    ebx_3.b = *esi_4
                    data_4eccf88 = ebx_3
                    i_2 = data_4eccf7c
                    
                    if (i_2 != 0xff)
                        int32_t ebx_8
                        ebx_8.b = edi_1[3]
                        
                        if (ebx_8 != 0)
                            int32_t eax_6 = *((i_2 << 2) + &data_bec940)
                            data_4eccf80 = *((data_4eccf80 << 2) + eax_6)
                            data_4eccf84 = *((data_4eccf84 << 2) + eax_6)
                            data_4eccf88 = *((data_4eccf88 << 2) + eax_6)
                            int32_t eax_7
                            eax_7.b = edi_1[2]
                            edi_1[2] = (divu.dp.d(mulu.dp.d(eax_7, edx_7), ecx_10)).b
                            int32_t eax_12
                            eax_12.b = edi_1[1]
                            edi_1[1] = (divu.dp.d(mulu.dp.d(eax_12, edx_7), ecx_10)).b
                            int32_t eax_17
                            eax_17.b = *edi_1
                            *edi_1 = divu.dp.d(mulu.dp.d(eax_17, edx_7), ecx_10).b
                            edi_1[3] = ecx_10.b
                        else
                            edi_1[2] = (data_4eccf80).b
                            edi_1[1] = (data_4eccf84).b
                            *edi_1 = data_4eccf88.b
                            edi_1[3] = i_2.b
                    else
                        edi_1[2] = (data_4eccf80).b
                        edi_1[1] = (data_4eccf84).b
                        *edi_1 = data_4eccf88.b
                        edi_1[3] = i_2.b
                
                edi_1 = &edi_1[4]
                esi_4 = &esi_4[4]
            else
                *edi_1 = *esi_4
                edi_1 = &edi_1[4]
                esi_4 = &esi_4[4]
        else
            *edi_1 = *esi_4
            edi_1 = &edi_1[4]
            esi_4 = &esi_4[4]
        
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_1 = &edi_1[(arg2 - j_2) << 2]
    esi_4 = &esi_4[(arg5 - j_2) << 2]
    i = i_1
    i_1 -= 1
while (i != 1)
