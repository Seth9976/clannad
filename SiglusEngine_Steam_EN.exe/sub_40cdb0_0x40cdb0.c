// 函数: sub_40cdb0
// 地址: 0x40cdb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1
int32_t i_6 = *ecx
int32_t* ebp = *(ecx[3] + 0x28)
int32_t var_14 = 0

if (i_6 s> 0)
    int32_t edi_1 = *ebp
    int32_t i_7 = i_6
    int32_t i = ebp[3] s>> 1
    int32_t i_3 = i
    void* eax_2 = &arg2[i_6]
    
    while (true)
        float edx_1 = *(eax_2 - 4)
        long double x87_r7_1 = fconvert.t(edx_1)
        long double temp0_1 = fconvert.t(*(edi_1 + (i << 2)))
        x87_r7_1 - temp0_1
        void* eax_3
        eax_3.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if ((eax_3:1.b & 1) == 0)
            i += 1
            int32_t esi_2 = ebp[3] - 1
            
            if (i s< esi_2)
                float* edx_3 = edi_1 + (i << 2)
                
                do
                    long double x87_r7_4 = fconvert.t(edx_1)
                    long double temp4_1 = fconvert.t(*edx_3)
                    x87_r7_4 - temp4_1
                    eax_3.w = (x87_r7_4 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe
                    
                    if ((eax_3:1.b & 1) != 0)
                        break
                    
                    i += 1
                    edx_3 = &edx_3[1]
                while (i s< esi_2)
        else
            long double x87_r7_2 = fconvert.t(edx_1)
            long double temp1_1 = fconvert.t(*(edi_1 + (i << 2) - 4))
            x87_r7_2 - temp1_1
            eax_3.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe
            
            if ((eax_3:1.b & 1) != 0)
                i -= 1
                
                if (i s> 0)
                    float* edx_2 = edi_1 + (i << 2) - 4
                    
                    do
                        long double x87_r7_3 = fconvert.t(edx_1)
                        long double temp5_1 = fconvert.t(*edx_2)
                        x87_r7_3 - temp5_1
                        eax_3.w = (x87_r7_3 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_3, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == temp5_1 ? 1 : 0) << 0xe
                        
                        if ((eax_3:1.b & 1) == 0)
                            break
                        
                        i -= 1
                        edx_2 -= 4
                    while (i s> 0)
        
        var_14 = *(ebp[1] + (i << 2)) + ebp[2] * var_14
        bool cond:5_1 = i_7 != 1
        i_7 -= 1
        
        if (not(cond:5_1))
            break
        
        eax_2 -= 4
        i = i_3
    
    ecx = arg1

int32_t* edx_6 = *(ecx[3] + 8)

if (edx_6[var_14] s<= 0)
    int32_t ebp_1 = ecx[1]
    int32_t esi_4 = ecx[4]
    int32_t edi_2 = 0
    float var_c_1 = 0f
    var_14 = 0xffffffff
    
    if (ebp_1 s> 0)
        int32_t* eax_10 = edx_6
        int32_t* var_10_2 = eax_10
        
        do
            if (*eax_10 s> 0)
                long double x87_r7_5 = fconvert.t(0f)
                
                if (i_6 s> 0)
                    eax_10 = arg2
                    void* ecx_3 = esi_4 - eax_10
                    int32_t i_5 = i_6
                    int32_t i_1
                    
                    do
                        long double x87_r6_2 = fconvert.t(*(ecx_3 + eax_10)) - fconvert.t(*eax_10)
                        eax_10 = &eax_10[1]
                        i_1 = i_5
                        i_5 -= 1
                        x87_r7_5 = x87_r6_2
                    while (i_1 != 1)
                    ecx = arg1
                
                if (var_14 != 0xffffffff)
                    long double temp6_1 = fconvert.t(var_c_1)
                    x87_r7_5 - temp6_1
                    eax_10.w = (x87_r7_5 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_5, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp6_1 ? 1 : 0) << 0xe | 0x3800
                
                if (var_14 == 0xffffffff || (eax_10:1.b & 1) != 0)
                    var_c_1 = fconvert.s(x87_r7_5)
                    var_14 = edi_2
            
            edi_2 += 1
            eax_10 = &var_10_2[1]
            esi_4 += i_6 << 2
            var_10_2 = eax_10
        while (edi_2 s< ebp_1)

void* eax_14 = ecx[4] + ((var_14 * i_6) << 2)

if (i_6 s<= 0)
    return 

int32_t i_4 = i_6
int32_t i_2

do
    eax_14 += 4
    long double x87_r7_8 = fconvert.t(*arg2) - fconvert.t(*(eax_14 - 4))
    void* edx_9 = &arg2[1]
    i_2 = i_4
    i_4 -= 1
    arg2 = edx_9
    *(edx_9 - 4) = fconvert.s(x87_r7_8)
while (i_2 != 1)
