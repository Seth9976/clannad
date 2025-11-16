// 函数: sub_43a80b
// 地址: 0x43a80b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t result = 0
void* eax_1

if (arg3 != 0)
    eax_1 = *(arg2 + 0x1c)

if (arg3 == 0 || eax_1 == 0)
    int32_t eax_15
    eax_15.b = *(arg2 + 0x1c) == 0
    int32_t ecx_3
    ecx_3.b = arg3 == 0
    
    if (ecx_3 != eax_15)
        result = 2
    
    goto label_43a8e8

void var_18
int32_t eax_2 = sub_46b27d(*(eax_1 + 0x18), 0, &var_18)
int32_t eax_3
void var_24

if (eax_2 s>= 0)
    eax_3 = sub_46b27d(arg3[6], 0, &var_24)

if (eax_2 s< 0 || eax_3 s< 0)
    char* esi_1 = *(*(arg2 + 0x1c) + 0x18)
    char* eax_11 = arg3[6]
    int32_t eax_14
    
    while (true)
        char edx_1 = *eax_11
        char temp1_1 = *esi_1
        bool c_2 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            if (edx_1 == 0)
                eax_14 = 0
                break
            
            edx_1 = eax_11[1]
            char temp4_1 = esi_1[1]
            c_2 = edx_1 u< temp4_1
            
            if (edx_1 == temp4_1)
                eax_11 = &eax_11[2]
                esi_1 = &esi_1[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_14 = 0
                break
        
        bool c_3 = unimplemented  {sbb eax, eax}
        eax_14 = sbb.d(sbb.d(eax_11, eax_11, c_2), 0xffffffff, c_3)
        break
    
    if (eax_14 == 0)
        goto label_43a8e8
else
    int32_t var_20
    int32_t var_14
    
    if (var_14 == var_20)
        goto label_43a8e8
    
    if (((var_20 ^ var_14) & 0xffff0000) == 0 && ((var_14 & 0xffff) == 0 || (0xffff & var_20) == 0))
        int32_t eax_5 = var_20 & 0xffff
        int32_t eax_6 = neg.d(eax_5)
        result = sbb.d(eax_6, eax_6, eax_5 != 0) + 2
    label_43a8e8:
        void* i = *(arg2 + 0x24)
        arg2 = arg4
        
        while (i != 0)
            void* eax_19 = *(i + 8)
            i = *(i + 0xc)
            int32_t ecx_4 = 0
            
            if (i != 0 && *(*(i + 8) + 4) == 0xc)
                i = *(i + 0xc)
                ecx_4 = 1
            
            if ((arg5 & 0x10) == 0 || (*(*(eax_19 + 0x18) + 0x1c) & 0x40) != 0)
                if (arg2 != 0)
                    void* esi_3 = *(eax_19 + 0x18)
                    void* eax_20 = *(arg2 + 8)
                    void*** ebx_1 = *(esi_3 + 0x20)
                    
                    if (eax_20 == 0)
                        arg3 = nullptr
                    else
                        arg3 = *(eax_20 + 0x10)
                    
                    if ((*(esi_3 + 0x1c) & 0x10) != 0)
                        if (sub_4392fd(arg1, ebx_1, arg3, 0) == 0)
                            return 0xffffffff
                        
                        result += sub_439127(arg1, ebx_1, arg3)
                    
                    if ((*(esi_3 + 0x1c) & 0x20) != 0)
                        int32_t eax_24 = sub_437693(arg1, arg3)
                        
                        if (eax_24 != 0)
                            return 0xffffffff
                        
                        if (sub_4392fd(arg1, arg3, ebx_1, eax_24) == 0)
                            return 0xffffffff
                        
                        result += sub_439127(arg1, arg3, ebx_1)
                    
                    arg2 = *(arg2 + 0xc)
                else if (ecx_4 == 0)
                    return 0xffffffff
        
        if (arg2 == 0)
            return result

return 0xffffffff
