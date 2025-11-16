// 函数: sub_46e149
// 地址: 0x46e149
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = nullptr
int32_t var_8 = 0xffffffff
int32_t var_10 = 0
void* eax = *(arg1 + 4)

if (eax == 0 || *(eax + 4) != 4)
    return nullptr

void* i_2 = *(eax + 0x1c)
void* i_1 = i_2

if (i_2 != 0)
    int32_t edi
    int32_t var_2c_1 = edi
    void* i
    
    do
        void* esi_1 = *(i_1 + 8)
        
        if (esi_1 != 0 && *(esi_1 + 4) == 6 && *(esi_1 + 0x10) == 2)
            void* eax_2 = arg2
            
            if (eax_2 != 0)
                while (*(esi_1 + 0x24) != *(*(eax_2 + 8) + 0x18))
                    eax_2 = *(eax_2 + 0xc)
                    
                    if (eax_2 == 0)
                        break
                
                if (eax_2 != 0)
                    void* result_1 = *(esi_1 + 0x18)
                    
                    if (*(result_1 + 0x3c) != 0)
                        void* eax_3 = *(result_1 + 0x1c)
                        int32_t ecx_1 = 0
                        void var_20
                        
                        if (eax_3 != 0)
                            int32_t var_1c
                            
                            if (sub_46b27d(*(eax_3 + 0x18), 0, &var_20) s< 0)
                                ecx_1 = 0xffffffff
                            else
                                ecx_1 = var_1c
                        int32_t eax_6 = ecx_1 & 0xffff0000
                        
                        if (eax_6 == 0 || eax_6 == (*(arg1 + 0x10) & 0xffff0000))
                            uint32_t eax_8 = zx.d(ecx_1.w)
                            
                            if ((eax_8 == 0 || eax_8 == zx.d((*(arg1 + 0x10)).w))
                                    && (var_8 == 0xffffffff || ecx_1 u> var_8))
                                result = result_1
                                var_8 = ecx_1
                                var_10 = *(*(esi_1 + 0x14) + 0x18)
        
        i = *(i_1 + 0xc)
        i_1 = i
    while (i != 0)

if (arg3 != 0)
    *arg3 = var_10

return result
