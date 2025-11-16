// 函数: sub_427c30
// 地址: 0x427c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

arg2[0x19] = 0xffffffff
arg2[0x1a] = 0xffffffff
arg2[0x1b] = 0xffffffff
arg2[0x1c] = 0xffffffff

if (*arg1 == 0 || arg2[0x13] == 0 || arg2[0x12].b == 0)
    return 0

int32_t eax_1 = arg1[5]
int32_t edx = *arg2
int32_t ecx_3
int32_t edx_3
int32_t ebx_3
int32_t edi_4

if (eax_1 == 0 || eax_1 == 1 || eax_1 == 3)
    if (edx == 0)
        edx_3 = arg2[2]
        ecx_3 = arg2[1]
        ebx_3 = arg1[3] - 1 + ecx_3
        edi_4 = edx_3 - 1 + arg1[4]
    label_427ccf:
        int32_t eax_4 = arg2[0x1e]
        
        if (eax_4 != 0xffffffff || arg2[0x1f] != eax_4 || arg2[0x20] != eax_4
                || arg2[0x21] != eax_4)
            if (eax_4 s> ecx_3)
                ecx_3 = eax_4
            
            int32_t eax_5 = arg2[0x20]
            
            if (eax_5 s< ebx_3)
                ebx_3 = eax_5
            
            int32_t eax_6 = arg2[0x21]
            
            if (arg2[0x1f] s> edx_3)
                edx_3 = arg2[0x1f]
            
            if (eax_6 s< edi_4)
                edi_4 = eax_6
        
        if (ecx_3 s<= ebx_3 && edx_3 s<= edi_4)
            arg2[0x1b] = ebx_3
            arg2[0x1c] = edi_4
            arg2[0x19] = ecx_3
            arg2[0x1a] = edx_3
            return 1
else if (eax_1 == 2)
    void* eax_2 = sub_4d25b0(arg1[1], edx)
    
    if (eax_2 != 0)
        ecx_3 = *(eax_2 + 4) - *(eax_2 + 0x14) + arg2[1]
        edx_3 = *(eax_2 + 8) - *(eax_2 + 0x18) + arg2[2]
        ebx_3 = *(eax_2 + 0xc) - 1 + ecx_3
        edi_4 = *(eax_2 + 0x10) - 1 + edx_3
        goto label_427ccf
return 0
