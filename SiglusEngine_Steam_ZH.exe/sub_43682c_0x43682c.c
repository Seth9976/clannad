// 函数: sub_43682c
// 地址: 0x43682c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t result_1 = 0
int32_t* var_10 = nullptr
int32_t* ebx = nullptr
int32_t* eax = sub_745f3f(0x1c)
int32_t* var_c

if (eax == 0)
    var_c = nullptr
else
    var_c = sub_42f3c6(eax)

int32_t result

if (var_c == 0)
    result = 0x8007000e
else
    int32_t* eax_2 = sub_745f3f(0x1c)
    
    if (eax_2 == 0)
        var_10 = nullptr
    else
        var_10 = sub_42f3c6(eax_2)
    
    if (var_10 == 0)
        result = 0x8007000e
    else
        int32_t* eax_4 = sub_745f3f(0x38)
        
        if (eax_4 == 0)
            ebx = nullptr
        else
            ebx = sub_4332b1(eax_4)
        
        if (ebx == 0)
            result = 0x8007000e
        else
            void* eax_6 = *(arg2 + 0x14)
            char* var_18_1 = nullptr
            
            if (eax_6 == 0)
                goto label_4368d4
            
            if (*(eax_6 + 4) != 3 || *(eax_6 + 0x10) != 9)
            label_436a5c:
                result = 0x80004005
            else
                var_18_1 = *(eax_6 + 0x18)
            label_4368d4:
                ebx[9] = 0
                void* esi_1 = *(arg2 + 0x1c)
                
                while (true)
                    char* var_28_2
                    int32_t* arg_c
                    
                    if (esi_1 == 0)
                        ebx[0xa] = 0
                        void* edi_2 = *(arg2 + 0x18)
                        
                        while (true)
                            if (edi_2 == 0)
                                result = result_1
                                *(arg1 + 0x334) += ebx[0xa]
                                
                                if (result s< 0)
                                    break
                                
                                result = sub_42f4f9(arg_c, var_18_1, &arg_c)
                                
                                if (result s< 0)
                                    break
                                
                                result = sub_42f54b(arg3, arg_c, nullptr)
                                
                                if (result s< 0)
                                    break
                                
                                result = sub_42f442(arg3, &ebx[9], 4, nullptr)
                                
                                if (result s< 0)
                                    break
                                
                                result = sub_42f442(arg3, &ebx[0xa], 4, nullptr)
                                
                                if (result s< 0)
                                    break
                                
                                sub_42f5d6(arg3, var_c)
                                var_c = nullptr
                                sub_42f5d6(arg3, var_10)
                                ebx[8] = var_18_1
                                ebx[0xd] = *(arg1 + 0x348)
                                *(arg1 + 0x324) += 1
                                *(arg1 + 0x348) = ebx
                                return 0
                            
                            if (*(edi_2 + 4) != 1)
                                goto label_436a5c
                            
                            void* eax_9 = *(edi_2 + 8)
                            
                            if (eax_9 == 0)
                                goto label_436a5c
                            
                            if (*(eax_9 + 4) != 6)
                                goto label_436a5c
                            
                            if (*(eax_9 + 0x10) != 4)
                                var_28_2 =
                                    "ID3DXEffectCompiler: Only pass allowed within a technique"
                                goto label_436a54
                            
                            void* var_28_3 = &ebx[0xb]
                            int32_t* var_2c_2 = arg_c
                            int32_t result_3 = sub_436454(arg1, eax_9, ebx[0xa], var_10)
                            int16_t top = top - 1
                            unimplemented  {call 0x436454}
                            
                            if (result_3 s< 0 && result_1 s>= 0)
                                result_1 = result_3
                            
                            ebx[0xa] += 1
                            edi_2 = *(edi_2 + 0xc)
                        
                        break
                    
                    if (*(esi_1 + 4) != 1)
                        goto label_436a5c
                    
                    void* eax_8 = *(esi_1 + 8)
                    
                    if (eax_8 == 0)
                        goto label_436a5c
                    
                    if (*(eax_8 + 4) != 6)
                        goto label_436a5c
                    
                    if (*(eax_8 + 0x10) != 1)
                        var_28_2 = "ID3DXEffectCompiler: There was a problem getting annotations"
                    label_436a54:
                        sub_42aba3(arg1 + 0x28, nullptr, 0, var_28_2)
                        goto label_436a5c
                    
                    void* var_28_1 = &ebx[0xc]
                    int32_t* var_2c_1 = arg_c
                    int32_t result_2 = sub_433d40(arg1, eax_8, var_c)
                    
                    if (result_2 s< 0 && result_1 s>= 0)
                        result_1 = result_2
                    
                    ebx[9] += 1
                    esi_1 = *(esi_1 + 0xc)

if (ebx != 0)
    sub_436726(ebx, 1)

if (var_c != 0)
    sub_42f421(var_c, 1)

if (var_10 != 0)
    sub_42f421(var_10, 1)

return result
