// 函数: sub_408c40
// 地址: 0x408c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float* ebp = arg1
int32_t i_3 = arg2
float* edx = arg3
int32_t esi_1 = ebp * i_3

if (i_3 s> 0)
    float* eax_1 = edx
    void* var_10_1 = arg4
    float* ecx_1 = &edx[esi_1]
    arg1 = &arg4[ebp * 2 - 1]
    int32_t var_14_1 = arg2
    bool cond:2_1
    
    do
        float* edi_3 = var_10_1
        *edi_3 = fconvert.s(fconvert.t(*eax_1) + fconvert.t(*ecx_1))
        *arg1 = fconvert.s(fconvert.t(*eax_1) - fconvert.t(*ecx_1))
        var_10_1 = &edi_3[ebp * 2]
        eax_1 = &eax_1[ebp]
        ecx_1 = &ecx_1[ebp]
        arg1 = &arg1[ebp * 2]
        cond:2_1 = var_14_1 != 1
        var_14_1 -= 1
    while (cond:2_1)
    i_3 = arg2

if (ebp s< 2)
    return 

void* eax_8

if (ebp != 2)
    if (i_3 s> 0)
        float* var_10_2 = arg4
        arg1 = edx
        float* esi_2 = &arg4[ebp * 2]
        void* var_14_2 = &edx[esi_1]
        float* var_c_1 = esi_2
        int32_t i_4 = i_3
        bool cond:3_1
        
        do
            if (ebp s> 2)
                float* ecx_3 = arg1
                float* edi_10 = var_10_2
                void* eax_3 = var_14_2
                float* edx_2 = arg5 + 4
                uint32_t i_2 = (ebp - 1) u>> 1
                uint32_t i
                
                do
                    long double x87_r7_6 = fconvert.t(edx_2[-1]) * fconvert.t(*(eax_3 + 4))
                    long double x87_r6_2 = fconvert.t(*(eax_3 + 8)) * fconvert.t(*edx_2)
                    eax_3 += 8
                    ecx_3 = &ecx_3[2]
                    edi_10 = &edi_10[2]
                    esi_2 -= 8
                    long double x87_r7_7 = x87_r7_6 + x87_r6_2
                    long double x87_r6_4 = fconvert.t(edx_2[-1]) * fconvert.t(*eax_3)
                    long double x87_r5_2 = fconvert.t(*edx_2) * fconvert.t(*(eax_3 - 4))
                    edx_2 = &edx_2[2]
                    i = i_2
                    i_2 -= 1
                    long double x87_r6_5 = x87_r6_4 - x87_r5_2
                    *edi_10 = fconvert.s(x87_r6_5 + fconvert.t(*ecx_3))
                    *esi_2 = fconvert.s(x87_r6_5 - fconvert.t(*ecx_3))
                    edi_10[-1] = fconvert.s(x87_r7_7 + fconvert.t(ecx_3[-1]))
                    esi_2[-1] = fconvert.s(fconvert.t(ecx_3[-1]) - x87_r7_7)
                while (i != 1)
                i_3 = arg2
                edx = arg3
            
            esi_2 = &var_c_1[ebp * 2]
            arg1 = &arg1[ebp]
            cond:3_1 = i_4 != 1
            var_c_1 = esi_2
            var_14_2 += ebp << 2
            var_10_2 = &var_10_2[ebp * 2]
            i_4 -= 1
        while (cond:3_1)
    
    eax_8 = ebp & 0x80000001
    
    if (eax_8 s< 0)
        eax_8 = ((eax_8 - 1) | 0xfffffffe) + 1

if ((ebp != 2 && eax_8 == 1) || i_3 s<= 0)
    return 

void* ecx_8 = &edx[ebp - 1]
void* eax_12 = &arg4[ebp]
float* edx_3 = &edx[ebp - 1 + esi_1]
int32_t i_1

do
    *eax_12 = fconvert.s(fneg(fconvert.t(*edx_3)))
    edx_3 = &edx_3[ebp]
    *(eax_12 - 4) = *ecx_8
    eax_12 += ebp << 3
    ecx_8 += ebp << 2
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
