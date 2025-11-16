// 函数: sub_4342ab
// 地址: 0x4342ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi
int32_t var_10 = edi

if (arg2 != 0)
    int32_t eax_9 = sub_433f9c(arg1, arg2, 1)
    
    if (eax_9 != 0)
        void* eax_13 = *(*(eax_9 + 4) + 0x40) + *(eax_9 + 0x18) + *(arg1 + 0x344)
        
        if (*(eax_13 + 4) == 5 && (*(eax_9 + 0x10) != 0xffffffff || *(eax_13 + 0x10) == 0))
            void* eax_14 = *(eax_13 + 0x14)
            int32_t eax_15
            
            if (*(eax_9 + 8) == 0)
                void* var_14_2 = eax_14
                eax_15 = sub_4339f8(arg1, eax_9)
            
            if (*(eax_9 + 8) != 0 || eax_15 s>= 0)
                arg2 = nullptr
                
                if (eax_14 u> 0)
                    do
                        int32_t* edx_1 = *(arg1 + 0x344)
                        void* ecx_5 = *(eax_9 + 8) + ebx
                        int32_t eax_21 = *(*(*(ecx_5 + 4) + 0x40) + *(ecx_5 + 0x18) + edx_1 + 0xc)
                        bool cond:4_1
                        
                        if (*(edx_1 + eax_21) == 0 || eax_21 + edx_1 == 0xfffffffc)
                            cond:4_1 = arg3 == 0
                        label_4343b5:
                            
                            if (cond:4_1)
                                break
                        else if (arg3 != 0)
                            cond:4_1 = __stricmp(eax_21 + edx_1 + 4, arg3) == 0
                            goto label_4343b5
                        arg2 = &arg2[1]
                        ebx += 0x20
                    while (arg2 u< eax_14)
                
                if (arg2 != eax_14)
                    return not.d((arg2 << 5) + *(eax_9 + 8))
else
    void* i = *(arg1 + 0x34c)
    
    if (i != 0)
        do
            int32_t ecx_1 = *(arg1 + 0x344)
            int32_t* eax_5 = *(*(*(i + 4) + 0x40) + *(i + 0x18) + ecx_1 + 0xc)
            bool cond:3_1
            
            if (*(eax_5 + ecx_1) == 0 || eax_5 + ecx_1 == 0xfffffffc)
                cond:3_1 = arg3 == 0
            label_434303:
                
                if (cond:3_1)
                    break
            else if (arg3 != 0)
                cond:3_1 = __stricmp(eax_5 + ecx_1 + 4, arg3) == 0
                goto label_434303
            i = *(i + 0x34)
        while (i != 0)
        
        if (i != 0)
            return not.d(i)

return 0
