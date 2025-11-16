// 函数: sub_40cc20
// 地址: 0x40cc20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg2[9])
int32_t* var_c = nullptr
int32_t edi_1 = (eax_2 - edx) s>> 1

if (arg7 s> 0)
    int32_t* ebp_1 = arg5
    void* ebx_1 = arg4
    void* eax_5 = arg6 - ebp_1
    void* ecx_2 = ebp_1 - ebx_1
    arg4 = ebx_1
    int32_t* edx_1 = ebx_1
    void* var_8_1 = eax_5
    void* var_4_1 = ecx_2
    arg6 = arg7
    bool cond:0_1
    
    do
        int32_t* esi_1 = ecx_2 + edx_1
        
        if (*(esi_1 + eax_5) != 0)
            if (ebp_1 != 0)
                int32_t eax_6 = 0
                
                if (edi_1 s> 0)
                    do
                        int32_t ecx_3 = *esi_1
                        long double x87_r7_2 = fconvert.t(*(*edx_1 + (eax_6 << 2)))
                            + fconvert.t(*(ecx_3 + (eax_6 << 2)))
                        float* ecx_4 = ecx_3 + (eax_6 << 2)
                        eax_6 += 1
                        *ecx_4 = fconvert.s(x87_r7_2)
                    while (eax_6 s< edi_1)
                    
                    ebp_1 = arg5
                    ecx_2 = var_4_1
            
            int32_t* eax_7 = arg4
            *eax_7 = *edx_1
            arg4 = &eax_7[1]
            eax_5 = var_8_1
            var_c += 1
        
        edx_1 = &edx_1[1]
        cond:0_1 = arg6 != 1
        arg6 -= 1
    while (cond:0_1)
    
    if (var_c != 0)
        void (* var_20)(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4) = sub_40cd50
        sub_40cf70(arg1, arg2, arg3, ebx_1, var_c, arg8)
        
        if (ebp_1 != 0)
            int32_t* esi_7 = ebp_1
            int32_t i_1 = arg7
            int32_t i
            
            do
                if (*(esi_7 + var_8_1) != 0)
                    int32_t ecx_6 = 0
                    
                    if (edi_1 s> 0)
                        do
                            int32_t edx_4 = *esi_7
                            long double x87_r7_4 = fconvert.t(*(edx_4 + (ecx_6 << 2)))
                                - fconvert.t(*(*ebx_1 + (ecx_6 << 2)))
                            float* edx_5 = edx_4 + (ecx_6 << 2)
                            ecx_6 += 1
                            *edx_5 = fconvert.s(x87_r7_4)
                        while (ecx_6 s< edi_1)
                    
                    ebx_1 += 4
                
                esi_7 = &esi_7[1]
                i = i_1
                i_1 -= 1
            while (i != 1)

return 0
