// 函数: sub_497cf0
// 地址: 0x497cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
void* edi_1 = arg1[1]
int32_t* i = *(edi_1 + 0x44)
int32_t esi = 0
int32_t ebx = 0
void* var_8_1 = edi_1

for (; i != 0; i = i[0xb])
    if (*i == 0)
        int32_t ecx_2 = i[2]
        esi += i[3] * ecx_2
        ebx += i[1] * ecx_2

int32_t* i_1

for (i_1 = *(edi_1 + 0x48); i_1 != 0; i_1 = i_1[0xb])
    if (*i_1 == 0)
        int32_t ecx_3 = i_1[2]
        esi += (i_1[3] * ecx_3) << 7
        ebx += (i_1[1] * ecx_3) << 7

if (esi s> 0)
    int32_t var_18_1 = *(edi_1 + 0x4c)
    int32_t var_1c_1 = ebx
    i_1 = sub_4e2b80(arg1, esi)
    int32_t* i_4
    
    if (i_1 s< ebx)
        i_1 = divs.dp.d(sx.q(i_1), esi)
        i_4 = i_1
        
        if (i_4 s<= 0)
            i_4 = 1
    else
        i_4 = 0x3b9aca00
    
    for (int32_t* i_2 = *(edi_1 + 0x44); i_2 != 0; i_2 = i_2[0xb])
        if (*i_2 == 0)
            int32_t edi_2 = i_2[1]
            int32_t ecx_5 = i_2[3]
            
            if (divu.dp.d(0:(edi_2 - 1), ecx_5) + 1 s> i_4)
                int32_t var_18_2 = i_2[2] * edi_2
                i_2[4] = ecx_5 * i_4
                sub_4e2c80(arg1, &i_2[0xc])
                i_2[0xa] = 1
            else
                i_2[4] = edi_2
            
            *i_2 = sub_497ab0(arg1, 1, i_2[2], i_2[4])
            i_2[5] = *(var_8_1 + 0x50)
            i_1 = nullptr
            i_2[6] = 0
            i_2[7] = 0
            i_2[9] = 0
            edi_1 = var_8_1
    
    for (void** i_3 = *(edi_1 + 0x48); i_3 != 0; i_3 = i_3[0xb])
        if (*i_3 == 0)
            int32_t edi_3 = i_3[1]
            int32_t ecx_9 = i_3[3]
            
            if (divu.dp.d(0:(edi_3 - 1), ecx_9) + 1 s> i_4)
                i_3[4] = ecx_9 * i_4
                int32_t var_18_4 = (i_3[2] * edi_3) << 7
                sub_4e2c80(arg1, &i_3[0xc])
                i_3[0xa] = 1
            else
                i_3[4] = edi_3
            
            void* eax_15 = sub_497b60(arg1, 1, i_3[2], i_3[4])
            int32_t edx_23 = *(var_8_1 + 0x50)
            *i_3 = eax_15
            i_1 = nullptr
            i_3[5] = edx_23
            i_3[6] = 0
            i_3[7] = 0
            i_3[9] = 0

return i_1
