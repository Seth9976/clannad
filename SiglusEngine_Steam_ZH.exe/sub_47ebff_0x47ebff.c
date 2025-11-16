// 函数: sub_47ebff
// 地址: 0x47ebff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t edi
int32_t var_10 = edi
char* edx = arg2[2]
int32_t result = 0

if (edx != 0)
    int32_t* ecx
    ecx.b = *edx
    
    if (ecx.b != 0)
        char* esi_1 = edx
        
        do
            int32_t ecx_1 = sx.d(ecx.b)
            
            if (ecx_1 s> 0x77)
                if (ecx_1 == 0x78)
                label_47ec41:
                    ecx = nullptr
                    result |= 0x10000
                else if (ecx_1 == 0x79)
                label_47ec7e:
                    ecx = 1
                    result |= 0x20000
                else
                    if (ecx_1 != 0x7a)
                    label_47ec86:
                        char* var_14_1 = edx
                        sub_42aba3(*arg1, arg2, 0x7d3, "invalid mask '%s'")
                        arg1[0x13] = 1
                        return 0
                    
                    ecx = 2
                    result |= 0x40000
            else if (ecx_1 == 0x77 || ecx_1 == 0x61)
                ecx = 3
                result |= 0x80000
            else
                if (ecx_1 != 0x62)
                    if (ecx_1 == 0x67)
                        goto label_47ec7e
                    
                    if (ecx_1 != 0x72)
                        goto label_47ec86
                    
                    goto label_47ec41
                
                ecx = 2
                result |= 0x40000
            
            if (esi_1 != edx && ecx u<= var_8)
                goto label_47ec86
            
            esi_1 = &esi_1[1]
            var_8 = ecx
            ecx.b = *esi_1
        while (ecx.b != 0)
        
        return result

return 0xf0000
