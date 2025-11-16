// 函数: sub_4dba2f
// 地址: 0x4dba2f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2
int32_t ecx = arg1[8]
int32_t edi
int32_t var_10 = edi
arg1[7] = eax

if (eax u> ecx)
    arg1[7] = ecx

int32_t edi_1 = arg1[7]

if (edi_1 u<= 0)
    edi_1.w -= arg1[7].w
    *arg2 = zx.d(edi_1.w)
else
    int32_t eax_1 = arg1[0xb]
    
    if (eax_1 == 0)
        goto label_4dbaa2
    
    if (eax_1 == 1)
        ecx = sub_4db838(ecx, arg1, 1)
    label_4dbaa2:
        
        while (*arg1 == 0)
            if (arg1[7] u<= 0)
                break
            
            int32_t eax_7
            eax_7, ecx = sub_4db91b(ecx, arg1)
            
            if (eax_7 != 0)
                int32_t ecx_2
                ecx_2.b = eax_7 != 3
                return ecx_2 + 2
        
        edi_1.w -= arg1[7].w
        *arg2 = zx.d(edi_1.w)
    else
        if (eax_1 == 2)
            ecx = sub_4dafd5(ecx, arg1, arg1[0xe], arg1[0xf], arg1[0x10], arg1[0x11], 1)
            goto label_4dbaa2
        
        if (eax_1 != 3)
            return 3
        
        *arg2 = 0

return 0
