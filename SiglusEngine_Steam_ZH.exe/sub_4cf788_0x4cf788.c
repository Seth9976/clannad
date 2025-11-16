// 函数: sub_4cf788
// 地址: 0x4cf788
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi

if (arg4 u> 0x1e)
    return 0x80004005

if (*(arg1 + 0xfc) u< *(arg1 + 0xc))
    void* ebx_1 = arg3
    
    do
        int32_t* ecx_1 = *(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2))
        int32_t eax_4 = *ecx_1 & 0xfff00000
        
        if (eax_4 == 0x73400000)
            break
        
        if (arg5 != 0)
            if (eax_4 == 0x73100000)
                break
            
            if (eax_4 == 0x73300000)
                break
        
        if (eax_4 == 0x73000000 || eax_4 == 0x73300000 || eax_4 == 0x73100000
                || eax_4 == 0x73200000)
            int32_t var_8_1 = 1
            
            if (eax_4 == 0x73100000 || eax_4 == 0x73200000)
                var_8_1 = 0
            
            int32_t var_10_1 = 0
            
            if (arg4 u< 1)
                goto label_4cf903
            
            int32_t* ecx_4 = ebx_1 + 4
            int32_t* i_1 = arg4
            int32_t* i
            
            do
                if (*ecx_1[4] == *(arg2 - ebx_1 + ecx_4) && *ecx_4 == var_8_1)
                    var_10_1 = 1
                
                ecx_4 = &ecx_4[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (var_10_1 == 0)
                ebx_1 = arg3
            label_4cf903:
                
                if (eax_4 == 0x73000000 || eax_4 == 0x73200000)
                    *(arg1 + 0xfc) += 1
                    *(arg2 + (arg4 << 2) + 4) = *ecx_1[4]
                    *(ebx_1 + (arg4 << 2) + 4) = var_8_1
                    sub_4cf788(arg2, ebx_1, arg4 + 1, 0)
            else
                if (eax_4 == 0x73000000 || eax_4 == 0x73200000)
                    *ecx_1 = 0
                else
                    *ecx_1 = 0x73400000
                
                *(arg1 + 0xfc) += 1
                ebx_1 = arg3
                *(arg2 + (arg4 << 2) + 4) = *(arg2 + (arg4 << 2))
                void* eax_8 = ebx_1 + (arg4 << 2)
                *(eax_8 + 4) = *eax_8
                sub_4cf788(arg2, ebx_1, arg4 + 1, 1)
                int32_t* ecx_8 = *(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2))
                int32_t eax_12 = *ecx_8 & 0xfff00000
                
                if (eax_12 == 0x73400000)
                    *ecx_8 = 0
                else if (eax_12 == 0x73100000)
                    *ecx_8 = 0x73200001
                else if (eax_12 == 0x73300000)
                    *ecx_8 = 0x73000001
        
        int32_t eax_17 = *(arg1 + 0xfc)
        
        if (eax_17 u>= *(arg1 + 0xc))
            return 0x80004005
        
        int32_t eax_20 = **(*(arg1 + 0x18) + (eax_17 << 2)) & 0xfff00000
        
        if (eax_20 == 0x73100000 || eax_20 == 0x73300000)
            int32_t eax_21
            eax_21.b = *(ebx_1 + (arg4 << 2)) == 0
            *(ebx_1 + (arg4 << 2)) = eax_21
        
        *(arg1 + 0xfc) += 1
    while (*(arg1 + 0xfc) u< *(arg1 + 0xc))

return 0
