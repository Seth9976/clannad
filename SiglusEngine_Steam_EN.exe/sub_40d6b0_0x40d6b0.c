// 函数: sub_40d6b0
// 地址: 0x40d6b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2[9])
int32_t edi = arg7
int32_t var_c = 0
int32_t i_4 = (eax_1 - edx) s>> 1
int32_t ecx_1 = 0
int32_t var_8 = sub_4038a0(arg2, (i_4 * edi) << 2)
int32_t var_10 = 0

if (edi s> 0)
    int32_t* edx_1 = arg6
    int32_t* esi_2 = arg4 - edx_1
    arg6 = edx_1
    int32_t* var_4_1 = esi_2
    
    do
        int32_t* eax_7 = *(esi_2 + edx_1)
        
        if (*edx_1 != 0)
            var_c += 1
        
        if (i_4 s> 0)
            int32_t ecx_2 = ecx_1 << 2
            int32_t i_2 = i_4
            int32_t i
            
            do
                int32_t edi_1 = *eax_7
                eax_7 = &eax_7[1]
                *(ecx_2 + var_8) = edi_1
                ecx_2 += edi << 2
                i = i_2
                i_2 -= 1
            while (i != 1)
            edi = arg7
            ecx_1 = var_10
            edx_1 = arg6
            esi_2 = var_4_1
        
        ecx_1 += 1
        edx_1 = &edx_1[1]
        var_10 = ecx_1
        arg6 = edx_1
    while (ecx_1 s< edi)
    
    if (var_c != 0)
        void (* var_24_1)(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4) = sub_40cd50
        sub_40cf70(arg1, arg2, arg3, &var_8, 1, arg8)
        int32_t* eax_10 = arg5
        
        if (eax_10 != 0)
            int32_t edx_3 = 0
            void* ebx_4 = arg4 - eax_10
            int32_t var_10_1 = 0
            arg2 = eax_10
            arg4 = ebx_4
            
            do
                void* ecx_5 = *eax_10
                
                if (i_4 s> 0)
                    int32_t edx_4 = edx_3 << 2
                    float* esi_5 = *(ebx_4 + eax_10) - ecx_5
                    int32_t i_3 = i_4
                    int32_t i_1
                    
                    do
                        long double x87_r7_2 =
                            fconvert.t(*(esi_5 + ecx_5)) - fconvert.t(*(edx_4 + var_8))
                        ecx_5 += 4
                        edx_4 += edi << 2
                        i_1 = i_3
                        i_3 -= 1
                        *(ecx_5 - 4) = fconvert.s(x87_r7_2 + fconvert.t(*(ecx_5 - 4)))
                    while (i_1 != 1)
                    edi = arg7
                    edx_3 = var_10_1
                    eax_10 = arg2
                    ebx_4 = arg4
                
                edx_3 += 1
                eax_10 = &eax_10[1]
                var_10_1 = edx_3
                arg2 = eax_10
            while (edx_3 s< edi)

return 0
