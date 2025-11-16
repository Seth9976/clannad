// 函数: sub_410310
// 地址: 0x410310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]
int32_t* edi_1 = *arg1 + eax
int32_t ebx_1 = arg1[2] - eax

if (arg1[5] != 0)
label_410388:
    
    if (arg1[5] + arg1[6] s> ebx_1)
        return 0
    
    int32_t* ebp_3 = *(edi_1 + 0x16)
    *(edi_1 + 0x16) = 0
    void* eax_8 = arg1[5]
    int32_t ecx_5 = arg1[6]
    void* var_c_1 = eax_8
    int32_t* var_10 = edi_1
    void* var_8_1 = eax_8 + edi_1
    int32_t var_4_1 = ecx_5
    sub_4100f0(&var_10)
    
    if (ebp_3 == *(edi_1 + 0x16))
        int32_t eax_18 = *arg1 + arg1[3]
        
        if (arg2 != 0)
            *arg2 = eax_18
            arg2[1] = arg1[5]
            arg2[2] = arg1[5] + eax_18
            arg2[3] = arg1[6]
        
        int32_t result = arg1[5] + arg1[6]
        int32_t ecx_11 = arg1[3] + result
        arg1[4] = 0
        arg1[3] = ecx_11
        arg1[5] = 0
        arg1[6] = 0
        return result
    
    *(edi_1 + 0x16) = ebp_3
else
    if (ebx_1 s< 0x1b)
        return 0
    
    if (*edi_1 == (*"OggS")[0].d)
        int32_t ecx_2
        ecx_2.b = *(edi_1 + 0x1a)
        
        if (ebx_1 s< ecx_2 + 0x1b)
            return 0
        
        int32_t eax_4 = 0
        
        if (ecx_2 s> 0)
            int32_t ecx_4
            
            do
                int32_t ecx_3
                ecx_3.b = *(edi_1 + eax_4 + 0x1b)
                arg1[6] += ecx_3
                ecx_4.b = *(edi_1 + 0x1a)
                eax_4 += 1
            while (eax_4 s< ecx_4)
        
        arg1[5] = ecx_2 + 0x1b
        goto label_410388

arg1[5] = 0
arg1[6] = 0
void* ecx_7 = _memchr(edi_1 + 1, 0x4f, ebx_1 - 1)

if (ecx_7 == 0)
    ecx_7 = arg1[2] + *arg1

arg1[3] = ecx_7 - *arg1
return edi_1 - ecx_7
