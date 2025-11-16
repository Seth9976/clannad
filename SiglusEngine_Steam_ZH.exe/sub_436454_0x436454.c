// 函数: sub_436454
// 地址: 0x436454
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_58 = edi
int32_t var_c = 0
int32_t* var_10 = nullptr
int32_t* var_8 = nullptr
int32_t* i_3 = nullptr
int32_t* eax = sub_745f3f(0x1c)
int32_t* var_18

if (eax == 0)
    var_18 = nullptr
else
    var_18 = sub_42f3c6(eax)

void var_4c

if (var_18 != 0)
    int32_t* eax_2 = sub_745f3f(0x1c)
    
    if (eax_2 == 0)
        var_10 = nullptr
    else
        var_10 = sub_42f3c6(eax_2)
    
    if (var_10 != 0)
        int32_t* eax_4 = sub_745f3f(0x30)
        
        if (eax_4 == 0)
            var_8 = nullptr
        else
            var_8 = sub_4332d1(eax_4)
        
        if (var_8 != 0)
            void* const arg_4
            void* const esi = arg_4
            void* eax_6 = *(esi + 0x14)
            char* var_20_1 = nullptr
            
            if (eax_6 == 0)
                goto label_436505
            
            if (*(eax_6 + 4) == 3 && *(eax_6 + 0x10) == 9)
                var_20_1 = *(eax_6 + 0x18)
            label_436505:
                var_8[9] = 0
                void* edi_1 = *(esi + 0x1c)
                
                while (true)
                    int32_t* arg_10
                    
                    if (edi_1 == 0)
                        void* i = *(esi + 0x18)
                        int32_t* i_2 = &var_4c
                        
                        for (; i != 0; i = *(i + 0xc))
                            int32_t eax_16 = sub_433695(arg1, i, &i_2, 0xffffffff)
                            
                            if (eax_16 s< 0 && var_c s>= 0)
                                var_c = eax_16
                        
                        if (var_c s< 0)
                            goto label_436695
                        
                        arg_4 = nullptr
                        i_2 = i_3
                        
                        if (i_3 != 0)
                            int32_t* i_1
                            
                            do
                                int32_t var_5c_2 = 0xffffffff
                                int32_t* var_60_3 = arg_10
                                int32_t eax_18
                                int80_t st0_1
                                st0_1, eax_18 = sub_4302e7(arg1, i_2, *(arg1 + 0x324), arg2, 
                                    0xffffffff, &arg_4, var_18)
                                
                                if (eax_18 s< 0 && var_c s>= 0)
                                    var_c = eax_18
                                
                                i_1 = i_2[0xa]
                                i_2 = i_1
                            while (i_1 != 0)
                        
                        if (var_c s< 0)
                            goto label_436695
                        
                        if (sub_42f4f9(arg_10, var_20_1, &arg_10) s< 0)
                            goto label_436695
                        
                        if (sub_42f54b(arg3, arg_10, nullptr) s< 0)
                            goto label_436695
                        
                        if (sub_42f442(arg3, &var_8[9], 4, nullptr) s< 0)
                            goto label_436695
                        
                        if (sub_42f442(arg3, &arg_4, 4, nullptr) s< 0)
                            goto label_436695
                        
                        sub_42f5d6(arg3, var_10)
                        var_10 = nullptr
                        sub_42f5d6(arg3, var_18)
                        var_8[8] = var_20_1
                        var_8[0xb] = *arg4
                        *arg4 = var_8
                        goto label_4366bf
                    
                    if (*(edi_1 + 4) != 1)
                        break
                    
                    void* eax_10 = *(edi_1 + 8)
                    
                    if (eax_10 == 0)
                        break
                    
                    if (*(eax_10 + 4) != 6)
                        break
                    
                    if (*(eax_10 + 0x10) != 1)
                        sub_42aba3(arg1 + 0x28, nullptr, 0, 
                            "ID3DXEffectCompiler: There was a problem getting annotations")
                        break
                    
                    void* var_5c_1 = &var_8[0xa]
                    int32_t* var_60_1 = arg_10
                    int32_t eax_11 = sub_433d40(arg1, eax_10, var_10)
                    
                    if (eax_11 s< 0 && var_c s>= 0)
                        var_c = eax_11
                    
                    var_8[9] += 1
                    edi_1 = *(edi_1 + 0xc)

label_436695:

if (var_8 != 0)
    sub_435d03(var_8, 1)

if (var_18 != 0)
    sub_42f421(var_18, 1)

if (var_10 != 0)
    sub_42f421(var_10, 1)

label_4366bf:
sub_42f345(&var_4c)
