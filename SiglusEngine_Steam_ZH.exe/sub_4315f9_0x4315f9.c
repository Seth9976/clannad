// 函数: sub_4315f9
// 地址: 0x4315f9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_dc = edi
float result = 0f
int32_t* var_c = nullptr
void var_d0
sub_46cade(&var_d0)
void* const arg_4
void* const edi_1 = arg_4
void* eax_1 = *(*(edi_1 + 0x2c) + 0x28)

if (eax_1 != 0)
    if (*(eax_1 + 4) == 0xd)
        void* edx_1 = eax_1
        void* var_10_1 = edx_1
        
        if (*(edx_1 + 0x1c) == 0)
            void* eax_3
            
            do
                void* eax_2 = *(edx_1 + 0x20)
                
                if (eax_2 == 0)
                    break
                
                if (*(eax_2 + 4) != 1)
                    break
                
                eax_3 = *(eax_2 + 8)
                
                if (eax_3 == 0)
                    break
                
                if (*(eax_3 + 4) != 0xd)
                    break
                
                var_10_1 = eax_3
                edx_1 = eax_3
            while (*(eax_3 + 0x1c) == 0)
            
            if (*(edx_1 + 0x1c) == 0)
                void* eax_4 = *(edx_1 + 0x20)
                
                if (eax_4 != 0 && *(eax_4 + 4) == 1)
                    void* ecx_1 = *(eax_4 + 8)
                    
                    if (ecx_1 != 0 && *(ecx_1 + 4) == 0xe)
                        float* esi_2 = *(arg1 + 0x344) + *(edi_1 + 0x3c)
                        void* var_14_1 = eax_4
                        
                        while (*(var_14_1 + 4) == 1)
                            void* eax_6 = *(var_14_1 + 8)
                            
                            if (eax_6 == 0)
                                break
                            
                            if (*(eax_6 + 4) != 0xe)
                                break
                            
                            int32_t ecx_2 = *(eax_6 + 0x10)
                            
                            if (ecx_2 == 0)
                                float ecx_17
                                ecx_17.b = *(eax_6 + 0x18) != 0
                                *esi_2 = ecx_17
                                esi_2 = &esi_2[1]
                            else if (ecx_2 == 1 || ecx_2 == 2)
                                *esi_2 = *(eax_6 + 0x18)
                                esi_2 = &esi_2[1]
                            else if (ecx_2 == 3)
                                *esi_2 = fconvert.s(fconvert.t(*(eax_6 + 0x18)))
                                esi_2 = &esi_2[1]
                            else
                                int32_t edi_2
                                
                                if (ecx_2 != 4)
                                    if (ecx_2 != 5)
                                        sub_42aba3(arg1 + 0x28, edx_1 + 0x30, 0, 
                                            "ID3DXEffectCompiler::CompileEffect: Unrecognized value type")
                                        break
                                    
                                    edi_2 = *(eax_6 + 0x18)
                                    void* eax_7 = *(eax_6 + 0x1c)
                                    result = *esi_2
                                    arg_4 = eax_7
                                    goto label_431797
                                
                                void* edi_3 = *(eax_6 + 0x18)
                                
                                if (edi_3 != 0 && *(edi_3 + 4) == 0xd && *(edi_3 + 0x1c) == 0x1b)
                                    int32_t* eax_8 = var_c
                                    
                                    if (eax_8 != 0)
                                        (*(*eax_8 + 8))(eax_8)
                                        var_c = nullptr
                                    
                                    float result_1 = sub_47dc65(&var_d0, arg1 + 0x10, 
                                        *(arg1 + 0x320), edi_3, 0, arg4, &var_c, nullptr)
                                    result = result_1
                                    
                                    if (result_1 s< 0)
                                        sub_42aba3(arg1 + 0x28, var_10_1 + 0x30, 0, 
                                            "ID3DXEffectCompiler::CompileEffect: There was an error "
                                        "compiling HLL shader parameter")
                                        goto label_431829
                                    
                                    int32_t* eax_10 = var_c
                                    
                                    if (eax_10 == 0)
                                        edi_2 = 0
                                        arg_4 = nullptr
                                    else
                                        edi_2 = (*(*eax_10 + 0xc))(eax_10)
                                        int32_t* eax_12 = var_c
                                        arg_4 = (*(*eax_12 + 0x10))(eax_12)
                                    
                                    result = *esi_2
                                label_431797:
                                    float result_2 = sub_42f442(arg2, &result, 4, nullptr)
                                    result = result_2
                                    
                                    if (result_2 s< 0)
                                        goto label_431829
                                    
                                    float result_3 = sub_42f442(arg2, &arg_4, 4, nullptr)
                                    result = result_3
                                    
                                    if (result_3 s< 0)
                                        goto label_431829
                                    
                                    float result_4 = sub_42f442(arg2, edi_2, arg_4, nullptr)
                                    result = result_4
                                    
                                    if (result_4 s< 0)
                                        goto label_431829
                                    
                                    *arg3 += 1
                                    edx_1 = var_10_1
                                    esi_2 = &esi_2[1]
                            
                            void* eax_18 = *(var_14_1 + 0xc)
                            var_14_1 = eax_18
                            
                            if (eax_18 == 0)
                                goto label_431829
    
    result = -2.29658805e-41f

label_431829:
int32_t* eax_21 = var_c

if (eax_21 != 0)
    (*(*eax_21 + 8))(eax_21)
    var_c = nullptr

sub_46e503(&var_d0)
return result
