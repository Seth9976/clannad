// 函数: sub_67f240
// 地址: 0x67f240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[8] = arg1[7]
int32_t result = *arg1
int32_t edx = arg1[1]

if (result != edx)
    sub_55c6f0(&arg1[7], (edx - result) s/ 0x4c)
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 5
    
    if ((edx_5 u>> 0x1f) + edx_5 s> 0)
        int32_t ebx_1 = 0
        int32_t i = 0
        int32_t edx_7
        
        do
            int32_t ecx_4 = *arg1 + ebx_1
            ebx_1 += 0x4c
            *(arg1[7] + (i << 2)) = ecx_4
            i += 1
            int32_t eax_10
            int32_t edx_6
            edx_6:eax_10 = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
            edx_7 = edx_6 s>> 5
        while (i s< (edx_7 u>> 0x1f) + edx_7)
    
    void* edx_8 = arg1[8]
    int32_t* ecx_7 = arg1[7]
    int32_t eax_16 = (edx_8 - ecx_7) s>> 2
    sub_67fb90(eax_16, edx_8, ecx_7, eax_16, sub_67f200)

result.b = 1
return result
