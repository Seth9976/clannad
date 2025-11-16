// 函数: sub_428828
// 地址: 0x428828
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi
int32_t var_10 = edi

if (arg1 u> 0)
    while (true)
        int32_t* ecx_1 = *arg2
        int32_t edx_1 = *ecx_1
        *arg2 = &ecx_1[1]
        
        if (edx_1 != 0)
            int32_t edi_1 = 0
            
            if (edx_1 u> 0)
                do
                    int32_t* ecx_3 = *arg2
                    bool cond:2_1 = *ecx_3 == 9
                    *arg2 = &ecx_3[2]
                    
                    if (cond:2_1)
                        return 0x80004005
                    
                    edi_1 += 1
                while (edi_1 u< edx_1)
        
        int32_t* ecx_5 = *arg2
        int32_t edx_2 = *ecx_5
        *arg2 = &ecx_5[2]
        
        if (edx_2 u<= 0 || edx_2 u> 9)
            return 0x80004005
        
        ebx += 1
        
        if (ebx u>= arg1)
            break
        
        continue

return 0
