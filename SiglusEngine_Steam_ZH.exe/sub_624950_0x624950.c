// 函数: sub_624950
// 地址: 0x624950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result

if (*(arg1 + 0x4a79e) != 0)
    void* edx_1 = data_bac510
    
    if (*(edx_1 + 0x13c) != 0)
        sub_65d6a0(result, *(edx_1 + 0x144), edx_1 + 0x12c, 0, 0, 1)
        result = sub_673b70()

if (*(arg1 + 0x4a79f) != 0)
    void* edx_3 = *(arg1 + 0x56b34)
    
    if (sub_65d6a0(result, *(edx_3 + 0xfa0), edx_3 + 0xf88, 0, 0, 1).b != 0)
        sub_673b70()

if ((*(arg1 + 0x4a79c) != 0 || *(arg1 + 0x4a79d) != 0) && *(arg1 + 0x4a750) != 0)
    sub_5bfcf0(arg1 + 0x5651c, *(arg1 + 0x5663c), *(arg1 + 0x56640))
    int32_t i_4 = (*(arg1 + 0x56890) - *(arg1 + 0x5688c)) s/ 0x2cc
    
    if (i_4 s> 0)
        int32_t edi_1 = 0
        int32_t i
        
        do
            void* ecx_7 = *(arg1 + 0x5688c) + edi_1
            sub_5bfcf0(ecx_7, *(ecx_7 + 0x120), *(ecx_7 + 0x124))
            edi_1 += 0x2cc
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t edx_8
    edx_8:result = muls.dp.d(0x72c62a25, *(arg1 + 0x56b38) - *(arg1 + 0x56b34))
    int32_t edx_9 = edx_8 s>> 0xa
    int32_t i_5 = (edx_9 u>> 0x1f) + edx_9
    
    if (i_5 s> 0)
        int32_t edi_2 = 0
        int32_t i_1
        
        do
            sub_608b60(*(arg1 + 0x56b34) + edi_2)
            edi_2 += 0x8ec
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    if (*(arg1 + 0x630c4) != 0)
        sub_5bfcf0(arg1 + 0x62a70, *(arg1 + 0x62b90), *(arg1 + 0x62b94))
        int32_t i_6 = (*(arg1 + 0x62de4) - *(arg1 + 0x62de0)) s/ 0x2cc
        
        if (i_6 s> 0)
            int32_t edi_3 = 0
            int32_t i_2
            
            do
                void* ecx_16 = *(arg1 + 0x62de0) + edi_3
                sub_5bfcf0(ecx_16, *(ecx_16 + 0x120), *(ecx_16 + 0x124))
                edi_3 += 0x2cc
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        int32_t edx_13
        edx_13:result = muls.dp.d(0x72c62a25, *(arg1 + 0x62f1c) - *(arg1 + 0x62f18))
        int32_t edx_14 = edx_13 s>> 0xa
        int32_t i_7 = (edx_14 u>> 0x1f) + edx_14
        
        if (i_7 s> 0)
            int32_t edi_4 = 0
            int32_t i_3
            
            do
                sub_608b60(*(arg1 + 0x62f18) + edi_4)
                edi_4 += 0x8ec
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)

result.b = 1
return result
