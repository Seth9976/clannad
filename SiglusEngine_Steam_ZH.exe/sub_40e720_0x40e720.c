// 函数: sub_40e720
// 地址: 0x40e720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
void* ebx = arg1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t edi
int32_t var_28 = edi
int32_t* esp_1 = &var_28
bool cond:0 = *(ebx + 0x234) == 0
int32_t result = 0
int32_t var_c = 0

if (not(cond:0))
    bool cond:1_1 = (*(ebx + 0x218) & 0x40) == 0
    int32_t var_2c_1 = *(ebx + 8)
    int32_t* eax_1 = *(ebx + 0x230)
    int32_t ecx_1 = *eax_1
    int32_t* var_30 = eax_1
    
    if (cond:1_1)
        (*(ecx_1 + 0x15c))()
        int32_t* eax_20 = *(ebx + 0x230)
        int32_t var_38_4 = 0
        int32_t var_40_2 = 0
        (*(*eax_20 + 0x190))(eax_20, 0, *(ebx + 0x234), 0, *(ebx + 0x238))
        int32_t* eax_21 = *(ebx + 0x230)
        (*(*eax_21 + 0x1a0))(eax_21, *(ebx + 0x248))
        esp_1 = &var_30
        
        if ((*(ebx + 0x218) & 0x10) == 0)
            int32_t edx_9 = 0
            int32_t i = 0
            
            if (*(ebx + 0x264) u> 0)
                do
                    if (*(*(ebx + 0x254) + (i << 2)) != arg2)
                        if (edx_9 u> 0)
                            void** ecx_28 = *(ebx + 0x230)
                            int32_t var_40_4 = 0
                            int32_t var_44_4 = 0
                            int32_t var_48_2 = 4
                            int32_t result_4 = (*(*ecx_28 + 0x148))(ecx_28, 4, 0, 0, 
                                *(ebx + 0x23c), (i - edx_9) * 3, edx_9)
                            esp_1 = &var_30
                            result = result_4
                            
                            if (result_4 s< 0)
                                goto label_40ea3c
                        
                        edx_9 = 0
                    else
                        edx_9 += 1
                    
                    i += 1
                while (i u< *(ebx + 0x264))
                
                if (edx_9 u> 0)
                    int32_t* eax_34 = *(ebx + 0x230)
                    int32_t var_40_5 = 0
                    int32_t var_44_5 = 0
                    int32_t var_48_3 = 4
                    esp_1 = &var_30
                    result = (*(*eax_34 + 0x148))(eax_34, 4, 0, 0, *(ebx + 0x23c), (i - edx_9) * 3, 
                        edx_9)
        else
            int32_t esi_15 = *(ebx + 0x260)
            int32_t eax_23
            
            if (arg2 u>= esi_15 || *(*(ebx + 0x25c) + arg2 * 0x14) != arg2)
                eax_23 = 0
                
                if (esi_15 u> 0)
                    int32_t* edx_7 = *(ebx + 0x25c)
                    
                    while (*edx_7 != arg2)
                        eax_23 += 1
                        edx_7 = &edx_7[5]
                        
                        if (eax_23 u>= *(ebx + 0x260))
                            break
            else
                eax_23 = arg2
            
            if (eax_23 u< esi_15)
                void* eax_25 = *(ebx + 0x25c) + eax_23 * 0x14
                int32_t ecx_25 = *(eax_25 + 8)
                
                if (ecx_25 u> 0)
                    int32_t* edx_8 = *(ebx + 0x230)
                    int32_t var_44_3 = 0
                    int32_t var_48_1 = 4
                    esp_1 = &var_30
                    result = (*(*edx_8 + 0x148))(edx_8, 4, 0, *(eax_25 + 0xc), *(eax_25 + 0x10), 
                        *(eax_25 + 4) * 3, ecx_25)
    else
        (*(ecx_1 + 0x15c))()
        int32_t var_18_1 = *(ebx + 0x264)
        arg1:3.b = 0
        int32_t esi = 0
        __chkstk((*(ebx + 0x238) * 3 + 3) & 0xfffffffc)
        int32_t** var_14_1 = &var_30
        
        if ((*(ebx + 0x218) & 0x10) != 0)
            int32_t edx_1 = *(ebx + 0x260)
            int32_t eax_7 = 0
            
            if (edx_1 u> 0)
                int32_t* ecx_2 = *(ebx + 0x25c)
                
                while (*ecx_2 != arg2)
                    eax_7 += 1
                    ecx_2 = &ecx_2[5]
                    
                    if (eax_7 u>= *(ebx + 0x260))
                        break
            
            if (eax_7 == edx_1)
                return 0
            
            void* eax_10 = *(ebx + 0x25c) + eax_7 * 0x14
            esi = *(eax_10 + 4)
            var_18_1 = *(eax_10 + 8) + esi
            arg1:3.b = 1
        
        int32_t var_34_1 = 0x10
        int32_t result_1 = sub_40bed2(ebx, &var_c, 0x10)
        esp_1 = &var_30
        result = result_1
        
        if (result_1 s>= 0)
            int32_t var_34_2 = 0x10
            int32_t result_2 = sub_40b67c(ebx, ebx + 0x24c, 0x10)
            esp_1 = &var_30
            result = result_2
            
            if (result_2 s>= 0)
                int32_t var_10_1 = esi
                
                if (esi u< var_18_1)
                    int32_t ecx_7 = esi * 0xc
                    int32_t var_1c_1 = ecx_7
                    
                    do
                        int32_t* eax_15 = *(ebx + 0x24c) + ecx_7
                        
                        if (arg1:3.b != 0 || *(*(ebx + 0x254) + (var_10_1 << 2)) == arg2)
                            int32_t ecx_8 = *(ebx + 0x238)
                            int32_t esi_6
                            int32_t edi_3
                            edi_3, esi_6 = __builtin_memcpy(var_14_1, *eax_15 * ecx_8 + var_c, 
                                ecx_8 u>> 2 << 2)
                            __builtin_memcpy(edi_3, esi_6, ecx_8 & 3)
                            void* ecx_12 = *(ebx + 0x238)
                            void* edi_4 = ecx_12 + var_14_1
                            int32_t esi_10
                            int32_t edi_5
                            edi_5, esi_10 = __builtin_memcpy(edi_4, eax_15[1] * ecx_12 + var_c, 
                                ecx_12 u>> 2 << 2)
                            __builtin_memcpy(edi_5, esi_10, ecx_12 & 3)
                            void* ecx_16 = *(ebx + 0x238)
                            int32_t esi_14
                            int32_t edi_7
                            edi_7, esi_14 = __builtin_memcpy(ecx_16 + edi_4, 
                                eax_15[2] * ecx_16 + var_c, ecx_16 u>> 2 << 2)
                            __builtin_memcpy(edi_7, esi_14, ecx_16 & 3)
                            int32_t* eax_18 = *(ebx + 0x230)
                            int32_t var_3c_1 = 1
                            int32_t var_40_1 = 4
                            int32_t result_3 =
                                (*(*eax_18 + 0x14c))(eax_18, 4, 1, var_14_1, *(ebx + 0x238))
                            esp_1 = &var_30
                            result = result_3
                            
                            if (result_3 s< 0)
                                break
                            
                            ecx_7 = var_1c_1
                        
                        var_10_1 += 1
                        ecx_7 += 0xc
                        var_1c_1 = ecx_7
                    while (var_10_1 u< var_18_1)
    
label_40ea3c:
    
    if (var_c != 0)
        int32_t* eax_35 = *(ebx + 0x234)
        (*(*eax_35 + 0x30))(eax_35)
        esp_1 = &var_30

if (*(ebx + 0x24c) != 0)
    int32_t* ebx_1 = *(ebx + 0x248)
    int32_t eax_36 = *ebx_1
    *(esp_1 - 4) = ebx_1
    (*(eax_36 + 0x30))()
    *(ebx + 0x24c) = 0

return result
