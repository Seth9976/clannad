// 函数: sub_433695
// 地址: 0x433695
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_38 = edi
void* var_c = arg1
char const (** const edi_1)[0x8] = &data_ab8790

if (arg4 != 0xffffffff)
    edi_1 = &data_ab9ba8

void* edx = *(arg2 + 8)
arg2 = nullptr
void* esi = *(edx + 0x10)
void* var_14 = edx

if (*edi_1 != 0)
    char const (** const eax_1)[0x8] = edi_1
    char const (** const ebx_1)[0x8] = edi_1
    
    do
        if (__stricmp(*eax_1, *(esi + 0x18)) == 0)
            break
        
        arg2 += 1
        ebx_1 = &ebx_1[7]
        eax_1 = ebx_1
    while (*ebx_1 != 0)
    
    arg1 = var_c
    edx = var_14

void* eax_5 = arg2 * 0x1c + edi_1
int32_t ebx_2 = *eax_5

if (ebx_2 != 0)
    void* edi_2 = *(edx + 0x14)
    char* var_8_1 = nullptr
    char* edi_3
    
    if (edi_2 != 0)
        int32_t eax_6 = *(eax_5 + 0x10)
        
        if (eax_6 != 1)
            edi_3 = *(edi_2 + 0x18)
            var_8_1 = edi_3
            
            if (eax_6 == 0 || eax_6 u> edi_3)
                goto label_433779
            
            int32_t var_3c_4 = eax_6 - 1
            int32_t var_40_3 = ebx_2
            sub_42aba3(arg1 + 0x28, esi + 0x10, 0, 
                "ID3DXEffectCompiler: Max index for effect state '%s' is %d")
        else
            int32_t var_3c_3 = ebx_2
            sub_42aba3(arg1 + 0x28, esi + 0x10, 0, "ID3DXEffectCompiler: State '%s' is not indexed")
    else if (*(eax_5 + 0x10) == 1)
        edi_3 = nullptr
    label_433779:
        
        if (arg4 != 0xffffffff)
            arg2 = nullptr
            char const (** const edi_4)[0x8] = &data_ab8790
            char const (** const eax_8)[0x8] = &data_ab8790
            
            do
                if (__stricmp(*eax_8, *(esi + 0x18)) == 0)
                    break
                
                arg2 += 1
                edi_4 = &edi_4[7]
                eax_8 = edi_4
            while (*edi_4 != 0)
            
            arg1 = var_c
            edx = var_14
            var_8_1 = arg4
            edi_3 = arg4
        
        void* eax_12 = arg2 * 0x1c
        
        if (*(eax_12 + 0xab87a0) != 0x105)
        label_433852:
            void* var_2c
            int32_t var_24
            int32_t var_20
            int32_t var_1c
            int32_t var_18
            int32_t var_10
            int32_t result = sub_430e32(arg1, *(edx + 0x18), eax_12 + &data_ab8790, &var_10, 
                &var_24, &var_20, &var_1c, &var_18, &var_2c, esi + 0x10)
            
            if (result s< 0)
                return result
            
            result = sub_431000(var_c, eax_12 + &data_ab8790, var_10, var_24, var_20, var_1c, 
                var_18, esi + 0x10)
            
            if (result s< 0)
                return result
            
            int32_t ecx_6 = var_10
            
            if (ecx_6 s< 0xa || (ecx_6 s> 0xe && ecx_6 != &data_f30000))
            label_4339a6:
                int32_t* eax_28 = sub_745f3f(0x2c)
                int32_t* eax_29
                
                if (eax_28 == 0)
                    eax_29 = nullptr
                else
                    eax_29 = sub_42f2fb(eax_28, arg2, var_8_1, *(var_14 + 0x18), var_10, var_24, 
                        var_20, var_1c, var_18, var_2c, esi + 0x10)
                
                if (eax_29 == 0)
                    return 0x8007000e
                
                (*arg3)[0xa] = eax_29
                *arg3 = eax_29
                return result
            
            void* eax_16 = *(var_14 + 0x18)
            
            if (*(eax_16 + 4) != 0xd)
                goto label_4339a6
            
            int32_t* var_48_2
            void* var_44_1
            char* var_3c_8
            
            if (*(eax_16 + 0x1c) != 0)
            label_433989:
                var_3c_8 = "ID3DXEffectCompiler: Unsupported sampler or stateblock expression "
                "(static usage not supported)."
                int32_t var_40_10 = 0
                var_44_1 = esi + 0x10
                var_48_2 = var_c + 0x28
            else
                void* eax_17 = *(eax_16 + 0x20)
                
                if (eax_17 == 0 || *(eax_17 + 4) != 1)
                    goto label_433989
                
                void* eax_18 = *(eax_17 + 8)
                
                if (eax_18 == 0 || *(eax_18 + 4) != 0xe)
                    goto label_433989
                
                void* i
                
                if (*(eax_18 + 0x10) != 6)
                    i = *(eax_18 + 0x18)
                label_433985:
                    
                    for (; i != 0; i = *(i + 0xc))
                        char* eax_26
                        
                        eax_26 = var_10 != &data_f30000 ? var_8_1 : 0xffffffff
                        
                        result = sub_433695(i, arg3, eax_26)
                        
                        if (result s< 0)
                            break
                    
                    return result
                
                if (ecx_6 != &data_f30000)
                    goto label_4339a6
                
                int32_t* edi_6 = *(var_c + 0x358)
                
                if (edi_6 != 0)
                    while (true)
                        char* eax_20 = *edi_6
                        char* esi_6 = *(eax_18 + 0x28)
                        int32_t eax_23
                        
                        while (true)
                            char edx_1 = *esi_6
                            ecx_6.b = edx_1
                            char temp1_1 = *eax_20
                            bool c_1 = edx_1 u< temp1_1
                            
                            if (edx_1 == temp1_1)
                                if (ecx_6.b == 0)
                                    eax_23 = 0
                                    break
                                
                                edx_1 = esi_6[1]
                                ecx_6.b = edx_1
                                char temp4_1 = eax_20[1]
                                c_1 = edx_1 u< temp4_1
                                
                                if (edx_1 == temp4_1)
                                    esi_6 = &esi_6[2]
                                    eax_20 = &eax_20[2]
                                    
                                    if (ecx_6.b != 0)
                                        continue
                                    
                                    eax_23 = 0
                                    break
                            
                            bool c_2 = unimplemented  {sbb eax, eax}
                            eax_23 = sbb.d(sbb.d(eax_20, eax_20, c_1), 0xffffffff, c_2)
                            break
                        
                        if (eax_23 == 0)
                            break
                        
                        edi_6 = edi_6[2]
                        
                        if (edi_6 == 0)
                            break
                    
                    if (edi_6 == 0)
                        goto label_433942
                    
                    i = edi_6[1]
                    goto label_433985
                
            label_433942:
                var_3c_8 = "ID3DXEffectCompiler: Unsupported sampler or stateblock expression "
                "(static usage not supported)."
                int32_t var_40_8 = 0
                var_44_1 = esi + 0x10
                var_48_2 = var_c + 0x28
            
            sub_42aba3(var_48_2, var_44_1, 0, var_3c_8)
        else if (edi_3 u< 0x10 || edi_3 == 0x101 || edi_3 == 0x102 || edi_3 == 0x103
                || edi_3 == 0x104)
            if (*(eax_12 + 0xab87a4) != 0x300000d)
                goto label_433852
            
            int32_t var_40_5 = 0
            sub_42aba3(arg1 + 0x28, esi + 0x10, 0, 
                "ID3DXEffectCompiler: DMAPOFFSET sampler state can only be used with D3DDMAPSAMPLER (i."
            "e. sampler index 256)")
        else
            if (edi_3 == 0x100)
                goto label_433852
            
            char* var_3c_7 = edi_3
            sub_42aba3(arg1 + 0x28, esi + 0x10, 0, "ID3DXEffectCompiler: Invalid sampler index %d")
    else
        int32_t var_3c_5 = ebx_2
        sub_42aba3(arg1 + 0x28, esi + 0x10, 0, 
            "ID3DXEffectCompiler: Index is required for state '%s'")
else
    int32_t var_3c_2 = *(esi + 0x18)
    sub_42aba3(arg1 + 0x28, esi + 0x10, 0, "ID3DXEffectCompiler: Unrecognized state '%s'")

return 0x80004005
