// 函数: sub_406040
// 地址: 0x406040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t* ebp = arg1
int32_t esi = 0
int32_t* ebx = *ebp
arg1 = ebx
float var_4 = fconvert.s(fconvert.t(*(ebp[1] + 0x1f0)) - fconvert.t(arg6))

if (ebx s<= 0)
    return 

do
    int32_t edi_1 = ebp[5]
    long double x87_r7_2 = fconvert.t(*(arg3 + (esi << 2)))
    int32_t i = *(edi_1 + (esi << 2))
    float* ecx_2 = arg3 + (esi << 2)
    arg6 = fconvert.s(x87_r7_2)
    
    if (esi + 1 s< ebx)
        int32_t ebx_1 = esi + 1
        int32_t* edi_2 = edi_1 + ((esi + 1) << 2)
        
        while (*edi_2 == i)
            long double temp1_1 = fconvert.t(ecx_2[1])
            x87_r7_2 - temp1_1
            ecx_2 = &ecx_2[1]
            esi += 1
            edi_2 = &edi_2[1]
            ebx_1 += 1
            int32_t eax_1
            eax_1.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_1:1.b & 1) != 0)
                x87_r7_2 = fconvert.t(*ecx_2)
            
            if (ebx_1 s>= arg1)
                break
        
        arg6 = fconvert.s(x87_r7_2)
        ebx = arg1
    
    long double x87_r7_3 = x87_r7_2 + fconvert.t(6f)
    long double temp0_1 = fconvert.t(*(arg4 + (esi << 2)))
    x87_r7_3 - temp0_1
    int32_t eax_2
    eax_2.w = (x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe
    
    if ((eax_2:1.b & 0x41) == 0)
        int32_t edx_1 = i s>> (ebp[8]).b
        
        if (edx_1 s>= 0x11)
            edx_1 = 0x10
        else if (edx_1 s< 0)
            edx_1 = 0
        
        sub_406120(arg5, *(arg2 + (edx_1 << 2)), arg6, *(ebp[5] + (esi << 2)) - ebp[7], ebp[0xa], 
            ebp[9], var_4)
    
    esi += 1
while (esi s< ebx)
