// 函数: sub_42a958
// 地址: 0x42a958
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* eax = arg3
*eax = 0
*eax = *arg2
int32_t* ecx = *(arg1 + 4)
int32_t edi
int32_t var_14 = edi
arg3 = ecx

if (&arg2[1] u< ecx)
    int32_t ebx
    ebx.b = *arg2
    
    if (ebx.b == 0x23)
        ecx.b = arg2[1]
    
    if (ebx.b == 0x23 && (ecx.b == ebx.b || ecx.b == 0x40))
        *(eax + 1) = ecx.b
        return 2
    
    void* edx_1
    edx_1.b = arg2[1]
    
    if (ebx.b == edx_1.b)
        int32_t edi_1 = sx.d(ebx.b)
        
        if (edi_1 s> 0x3a)
            if (edi_1 == 0x3c)
            label_42a9ec:
                *(eax + 1) = edx_1.b
                
                if (&arg2[2] u>= *(arg1 + 4) || arg2[2] != 0x3d)
                    return 2
                
                *(eax + 2) = 0x3d
                return 3
            
            if (edi_1 == 0x3d)
                *(eax + 1) = edx_1.b
                return 2
            
            if (edi_1 == 0x3e)
                goto label_42a9ec
            
            if (edi_1 == 0x7c)
                *(eax + 1) = edx_1.b
                return 2
        else
            if (edi_1 == 0x3a || edi_1 == 0x26 || edi_1 == 0x2b || edi_1 == 0x2d)
                *(eax + 1) = edx_1.b
                return 2
            
            if (edi_1 == 0x2e && &arg2[2] u< arg3 && arg2[2] == 0x2e)
                *(eax + 1) = edx_1.b
                void* ecx_1
                ecx_1.b = arg2[2]
                *(eax + 2) = ecx_1.b
                return 3
    else if (edx_1.b == 0x3d)
        int32_t ecx_3 = sx.d(ebx.b)
        
        if (ecx_3 s<= 0x2f)
            if (ecx_3 == 0x2f || ecx_3 == 0x21)
                *(eax + 1) = 0x3d
                return 2
            
            if (ecx_3 s> 0x24)
                if (ecx_3 s<= 0x26)
                    *(eax + 1) = 0x3d
                    return 2
                
                if (ecx_3 s> 0x29 && (ecx_3 s<= 0x2b || ecx_3 == 0x2d))
                    *(eax + 1) = 0x3d
                    return 2
        else if (ecx_3 == 0x3c || ecx_3 == 0x3e || ecx_3 == 0x5e || ecx_3 == 0x7c)
            *(eax + 1) = 0x3d
            return 2
    else if (ebx.b == 0x2d && edx_1.b == 0x3e)
        *(eax + 1) = edx_1.b
        return 2

return 1
