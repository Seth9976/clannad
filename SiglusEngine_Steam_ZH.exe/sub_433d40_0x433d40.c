// 函数: sub_433d40
// 地址: 0x433d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t edi
int32_t var_44 = edi
int32_t result = 0
int32_t var_10 = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* var_c

if (eax == 0)
    var_c = nullptr
else
    var_c = sub_42f3c6(eax)

if (var_c != 0)
    void* esi_1 = *(arg2 + 0x18)
    
    if (esi_1 == 0 || *(esi_1 + 4) != 0xb)
        result = 0x80004005
        sub_42f421(ebp_1[-2], 1)
    else
        void* eax_3 = *(arg2 + 0x14)
        
        if (eax_3 == 0 || *(eax_3 + 4) != 3)
            result = 0x80004005
            sub_42f421(ebp_1[-2], 1)
        else if ((*(esi_1 + 0x1c) & 2) != 0)
            sub_42f421(ebp_1[-2], 1)
        else
            char* var_14_1 = eax_3 + 0x10
            
            if (*(eax_3 + 0x10) != 9)
                result = 0x80004005
                sub_42f421(ebp_1[-2], 1)
            else
                int32_t eax_4 = *(eax_3 + 0x18)
                int32_t var_2c_1 = eax_4
                
                if (eax_4 == 0)
                    result = 0x80004005
                    sub_42f421(ebp_1[-2], 1)
                else
                    void* eax_5 = *(esi_1 + 0x20)
                    
                    if (eax_5 == 0)
                        result = 0x80004005
                        sub_42f421(ebp_1[-2], 1)
                    else
                        void var_3c
                        void var_38
                        void var_34
                        void var_30
                        int32_t var_24
                        uint32_t var_18
                        result = sub_42f655(arg1, eax_5, &var_24, &var_3c, &var_38, &var_34, 
                            &var_30, &var_18)
                        
                        if (result s>= 0)
                            int32_t eax_9 = var_24
                            
                            if (eax_9 == 0 || eax_9 == 4 || eax_9 == 3 || eax_9 == 1 || eax_9 == 2)
                                int32_t eax_13 = sub_745f3f(var_18)
                                
                                if (eax_13 != 0)
                                    uint32_t ecx_7 = var_18
                                    __builtin_memset(__builtin_memset(eax_13, 0, ecx_7 u>> 2 << 2), 
                                        0, ecx_7 & 3)
                                    int32_t var_28 = eax_13
                                    result = sub_42fcc6(arg1, *(esi_1 + 0x20), &var_28)
                                    
                                    if (result s< 0)
                                        sub_42f421(ebp_1[-2], 1)
                                    else
                                        int32_t* var_20
                                        result = sub_42f442(arg3, eax_13, var_18, &var_20)
                                        
                                        if (result s< 0)
                                            sub_42f421(ebp_1[-2], 1)
                                        else
                                            int32_t var_4c_6 = 0
                                            void var_1c
                                            void* var_50_4 = &var_1c
                                            int32_t* var_54_5 = var_c
                                            void* var_58_4 = arg3
                                            int32_t result_1
                                            result_1, ebp_1 = sub_42fdc0(arg1, esi_1, result, 
                                                *(esi_1 + 0x20), var_14_1, nullptr, nullptr)
                                            result = result_1
                                            
                                            if (result s>= 0)
                                                sub_42f5d6(ebp_1[4], ebp_1[-2])
                                                result = sub_42f54b(ebp_1[3], ebp_1[-6], nullptr)
                                                
                                                if (result s>= 0)
                                                    result =
                                                        sub_42f54b(ebp_1[3], ebp_1[-7], nullptr)
                                                    
                                                    if (result s>= 0)
                                                        int32_t* eax_19 = sub_745f3f(0x48)
                                                        int32_t* eax_20
                                                        
                                                        if (eax_19 == 0)
                                                            eax_20 = nullptr
                                                        else
                                                            eax_20 = sub_433367(eax_19)
                                                        
                                                        if (eax_20 != 0)
                                                            eax_20[8] = ebp_1[-0xa]
                                                            eax_20[9] = 0
                                                            eax_20[0xa] = 0
                                                            eax_20[0x10] = ebp_1[-6]
                                                            eax_20[0xf] = ebp_1[-7]
                                                            void** ecx_22 = ebp_1[5]
                                                            eax_20[0x11] = 0
                                                            eax_20[0xb] = esi_1
                                                            eax_20[0xd] = *ecx_22
                                                            eax_20[0xe] = *(ebp_1[2] + 0x14) + 0x10
                                                            *ecx_22 = eax_20
                                                        else
                                                            result = 0x8007000e
                                            else
                                                sub_42aba3(ebp_1[-1] + 0x28, ebp_1[-4], 0, 
                                                    "ID3DXEffectCompiler: Error initializing annotation "
                                                "type")
                                                sub_42f421(ebp_1[-2], 1)
                                else
                                    result = 0x8007000e
                                    sub_42f421(ebp_1[-2], 1)
                            else
                                sub_42aba3(arg1 + 0x28, var_14_1, 0, 
                                    "ID3DXEffectCompiler: Only numeric types and strings are allowed as "
                                "annotations")
                                result = 0x80004005
                                sub_42f421(ebp_1[-2], 1)
                        else
                            sub_42aba3(ebp_1[-1] + 0x28, ebp_1[-4], 0, 
                                "ID3DXEffectCompiler: There was a problem getting variable type")
                            sub_42f421(ebp_1[-2], 1)
    
    if (ebp_1[-3] != 0)
        j__free(ebp_1[-3])
else
    result = 0x8007000e

*ebp_1
return result
