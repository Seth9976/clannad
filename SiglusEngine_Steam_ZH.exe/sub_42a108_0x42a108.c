// 函数: sub_42a108
// 地址: 0x42a108
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg2 + 0x20)
int32_t edi
int32_t var_30 = edi
int32_t* edi_1 = arg3
int32_t* esi = *(arg1 + 0x1c)
void* result_1 = edi_1[0xb] + edx
void* ecx_1 = edi_1[0xc] + edx
void* result_6 = result_1
void* result

while (true)
    int32_t var_14
    
    if (esi != 0)
        int32_t* ecx_2 = *(arg1 + 0x10)
        int32_t* var_34_1 = &var_14
        void* var_38_1 = *esi + ecx_2
        
        if (sub_429641(*(arg2 + 0x20), result_1, ecx_2) s>= 0)
            if (var_14 != 0)
                void* eax_13 = *esi[7]
                
                if (eax_13 != 0 && *(arg2 + 0xc) != *(eax_13 + 0xc))
                    result = 0x80004005
                    break
            
            if (&esi[3] == esi[7])
                void* var_34_6 = ecx_1
                int32_t var_38_4 = esi[1] + *(arg1 + 0x10)
                void* result_7 = result_6
                void* result_4 = sub_429d2b()
                result = result_4
                
                if (result_4 s< 0)
                    break
        else
            esi = esi[8]
            result_1 = result_6
            continue
        
        goto label_42a2f2
    
    void* var_10
    int32_t* var_34_2 = &var_10
    int32_t var_1c
    int32_t* var_38_2 = &var_1c
    result = result_1
    void* result_2 = sub_429664(*(arg2 + 0x20), &result, &var_14)
    result = result_2
    
    if (result_2 s< 0)
        break
    
    int32_t ecx_3 = *(arg1 + 0x18)
    void* eax_9 = *(arg1 + 0x14) + var_14 + var_1c + var_10
    
    if (eax_9 u<= ecx_3)
    label_42a256:
        int32_t var_20
        int32_t* var_34_5 = &var_20
        int32_t var_38_3 = var_14
        void* result_3 =
            sub_429acc(*(arg2 + 0x20), result_6, ecx_1, *(arg1 + 0x10), *(arg1 + 0x14), var_10)
        result = result_3
        
        if (result_3 s< 0)
            break
        
        void* eax_17 = sub_745f3f(0x24)
        
        if (eax_17 == 0)
            esi = nullptr
        else
            esi = sub_429490(eax_17)
        
        if (esi != 0)
            *esi = *(arg1 + 0x14) + var_10
            esi[1] = *(arg1 + 0x14) + var_14 + var_10
            esi[2] = var_20
            esi[8] = *(arg1 + 0x1c)
            *(arg1 + 0x1c) = esi
            *(arg1 + 0x14) = eax_9
        label_42a2f2:
            void** eax_30 = sub_745f3f(0x14)
            
            if (eax_30 == 0)
                arg3 = nullptr
                eax_30 = nullptr
            else
                eax_30[2] = 0
                *eax_30 = nullptr
                eax_30[4] = eax_30
                eax_30[3] = eax_30
                arg3 = eax_30
            
            if (eax_30 != 0)
                int32_t ecx_22 = esi[2]
                
                if (ecx_22 u<= 0)
                    goto label_42a35a
                
                int32_t eax_33 = sub_745f3f(ecx_22 << 2)
                arg3[2] = eax_33
                
                if (eax_33 != 0)
                    int32_t var_34_8 = eax_33
                    void* var_38_5 = ecx_1
                    void* result_8 = result_6
                    void* result_5 = sub_429c01()
                    result = result_5
                    
                    if (result_5 s>= 0)
                        eax_30 = arg3
                    label_42a35a:
                        *eax_30 = arg2
                        eax_30[1] = edi_1
                        *(esi[7] + 0xc) = eax_30
                        eax_30[3] = &esi[3]
                        eax_30[4] = esi[7]
                        esi[7] = eax_30
                        edi_1[0x10] = eax_30
                        edi_1[0xb] = *esi
                        edi_1[0xc] = esi[1]
                        arg3 = nullptr
                        edi_1[1] = *(arg1 + 0x10) + *esi
                        *edi_1 = *(arg1 + 0x10) + esi[1]
                        int32_t var_34_9 = esi[6]
                        int32_t ebx_1 = *(arg1 + 0x10)
                        int32_t var_38_6 = edi_1[0x10]
                        result = sub_42a08b(edi_1[0xb] + ebx_1, edi_1[0xc] + ebx_1)
                else
                    result = 0x8007000e
                
                if (arg3 != 0)
                    sub_42a0e7(arg3, 1)
                
                break
    else
        uint32_t ecx_4 = ecx_3 * 2
        uint32_t eax_10 = 0x10000
        
        if (ecx_4 u>= 0x10000)
            eax_10 = ecx_4
        
        *(arg1 + 0x18) = eax_10
        int32_t edx_3 = sub_745f3f(eax_10)
        var_1c = edx_3
        
        if (edx_3 != 0)
            int32_t ecx_8 = *(arg1 + 0x14)
            
            if (ecx_8 u> 0)
                int32_t esi_2
                int32_t edi_3
                edi_3, esi_2 = __builtin_memcpy(edx_3, *(arg1 + 0x10), ecx_8 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_2, ecx_8 & 3)
            
            int32_t esi_3 = *(arg1 + 0x14)
            int32_t ecx_13 = *(arg1 + 0x18) - esi_3
            __builtin_memset(__builtin_memset(esi_3 + edx_3, 0, ecx_13 u>> 2 << 2), 0, ecx_13 & 3)
            int32_t eax_15 = *(arg1 + 0x10)
            
            if (eax_15 != 0)
                j__free(eax_15)
                *(arg1 + 0x10) = 0
                edx_3 = var_1c
            
            *(arg1 + 0x10) = edx_3
            sub_42a0b6(arg1)
            edi_1 = arg3
            goto label_42a256
    
    result = 0x8007000e
    break

return result
