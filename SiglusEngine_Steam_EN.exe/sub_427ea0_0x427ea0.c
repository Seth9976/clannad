// 函数: sub_427ea0
// 地址: 0x427ea0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg3
*arg4 = 0xffffffff
*arg5 = 0xffffffff
*arg6 = 0xffffffff
*arg7 = 0xffffffff

if (*edi == 0 || arg2[0x13] == 0 || arg2[0x12].b == 0)
    return 0

int32_t eax_5 = edi[5]
int32_t edx = *arg2
int32_t ecx_3
int32_t edx_3

if (eax_5 == 0 || eax_5 == 1 || eax_5 == 3)
    if (edx == 0)
        ecx_3 = arg2[1]
        edx_3 = arg2[2]
    label_427f3b:
        int32_t ebx_3 = edi[3] - 1 + ecx_3
        int32_t edi_2 = edx_3 - 1 + edi[4]
        int32_t eax_8 = arg2[0x1e]
        
        if (eax_8 != 0xffffffff || arg2[0x1f] != eax_8 || arg2[0x20] != eax_8
                || arg2[0x21] != eax_8)
            if (eax_8 s> ecx_3)
                ecx_3 = eax_8
            
            int32_t eax_9 = arg2[0x20]
            
            if (eax_9 s< ebx_3)
                ebx_3 = eax_9
            
            int32_t eax_10 = arg2[0x21]
            
            if (arg2[0x1f] s> edx_3)
                edx_3 = arg2[0x1f]
            
            if (eax_10 s< edi_2)
                edi_2 = eax_10
        
        if (ecx_3 s<= ebx_3 && edx_3 s<= edi_2)
            *arg4 = ecx_3
            *arg5 = edx_3
            *arg6 = ebx_3
            *arg7 = edi_2
            return 1
else if (eax_5 == 2)
    edi = sub_4d25b0(edi[1], edx)
    
    if (edi != 0)
        ecx_3 = edi[1] - edi[5] + arg2[1]
        edx_3 = edi[2] - edi[6] + arg2[2]
        goto label_427f3b
return 0
