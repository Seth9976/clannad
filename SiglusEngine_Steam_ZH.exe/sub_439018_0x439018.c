// 函数: sub_439018
// 地址: 0x439018
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x1c)
int32_t ecx
ecx.b = eax == 0
int32_t edi
int32_t var_28 = edi
int32_t edx
edx.b = arg2 == 0

if (edx != ecx)
    return 0xffffffff

if (arg2 == 0)
label_4390b4:
    void* edx_2 = *(arg1 + 0x24)
    void* esi_3 = arg3
    
    while (true)
        if (edx_2 != 0)
            if (esi_3 != 0)
                void* eax_11 = *(*(edx_2 + 8) + 0x18)
                void* ecx_3 = *(*(esi_3 + 8) + 0x18)
                
                if (*(eax_11 + 0x1c) != *(ecx_3 + 0x1c))
                    break
                
                int32_t eax_12
                eax_12, edx_2 = sub_43782f(*(eax_11 + 0x20), *(ecx_3 + 0x20))
                
                if (eax_12 == 0)
                    break
                
                do
                    edx_2 = *(edx_2 + 0xc)
                    
                    if (edx_2 == 0)
                        break
                while (*(*(edx_2 + 8) + 4) != 6)
                
                do
                    esi_3 = *(esi_3 + 0xc)
                    
                    if (esi_3 == 0)
                        break
                while (*(*(esi_3 + 8) + 4) != 6)
                
                continue
            else if (edx_2 != 0)
                break
        
        if (esi_3 != 0)
            break
        
        return 0
else
    void var_14
    int32_t eax_2 = sub_46b27d(*(eax + 0x18), 0, &var_14)
    int32_t eax_3
    void var_20
    
    if (eax_2 s>= 0)
        eax_3 = sub_46b27d(*(arg2 + 0x18), 0, &var_20)
    int32_t var_1c
    int32_t var_10
    
    if (eax_2 s< 0 || eax_3 s< 0)
        char* esi_1 = *(*(arg1 + 0x1c) + 0x18)
        char* eax_6 = *(arg2 + 0x18)
        int32_t eax_9
        
        while (true)
            char edx_1 = *eax_6
            char temp1_1 = *esi_1
            bool c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                if (edx_1 == 0)
                    eax_9 = 0
                    break
                
                edx_1 = eax_6[1]
                char temp4_1 = esi_1[1]
                c_1 = edx_1 u< temp4_1
                
                if (edx_1 == temp4_1)
                    eax_6 = &eax_6[2]
                    esi_1 = &esi_1[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    eax_9 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_9 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
            break
        
        if (eax_9 == 0)
            goto label_4390b4
    else if (var_10 == var_1c)
        goto label_4390b4

return 0xffffffff
