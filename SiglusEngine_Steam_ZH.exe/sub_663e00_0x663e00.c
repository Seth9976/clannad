// 函数: sub_663e00
// 地址: 0x663e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* var_34 = arg2
int16_t* var_28 = arg4
int16_t* var_24 = arg5

if (arg2 == 0 || arg3 == 0 || arg4 == 0 || arg5 == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0x80004003

int32_t result = 0x80004005
*arg2 = data_aac190
*arg3 = data_aac190
*arg4 = 0
*arg5 = 0

if (arg1 != 0)
    int32_t* var_40 = nullptr
    result = (**arg1)(arg1, 0xaf2610, &var_40)
    
    if (result s>= 0)
        int32_t* eax_5 = var_40
        int32_t* var_38 = nullptr
        result = (*(*eax_5 + 0x10))(eax_5, 0, 0, &var_38)
        
        if (result s>= 0)
            int32_t* eax_7 = var_38
            int32_t* var_2c = nullptr
            result = (*(*eax_7 + 0x48))(eax_7, &var_2c, 0)
            
            if (result s>= 0)
                int32_t* eax_9 = var_2c
                int32_t* var_44
                result = (*(*eax_9 + 0x1c))(eax_9, &var_44)
                
                if (result s>= 0)
                    sub_5c49b0(_memcpy_s(var_34, 0x10, var_44, 0x10))
                    int32_t* edx = var_44
                    *var_28 = edx[6].w
                    *var_24 = *(edx + 0x1a)
                    int32_t* eax_14 = var_2c
                    (*(*eax_14 + 0x30))(eax_14, edx)
                    int32_t eax_15 = *arg1
                    int32_t* var_3c = nullptr
                    int32_t eax_16 = (*eax_15)(arg1, 0xaf9498, &var_3c)
                    int32_t* eax_17
                    
                    if (eax_16 s>= 0)
                        eax_17 = var_3c
                    
                    if (eax_16 s< 0 || eax_17 == 0)
                        int32_t eax_19 = *arg1
                        int32_t* var_20 = nullptr
                        var_28 = nullptr
                        result = (*eax_19)(arg1, 0xaf9488, &var_28)
                        
                        if (result s>= 0)
                            int16_t* eax_21 = var_28
                            void var_1c
                            result = (*(*eax_21 + 0xc))(eax_21, &var_1c)
                            
                            if (result s>= 0)
                                int32_t* eax_23 = var_2c
                                result = (*(*eax_23 + 0x18))(eax_23, &var_1c, &var_20)
                                
                                if (result s>= 0)
                                    int32_t* eax_25 = var_20
                                    void* var_30 = nullptr
                                    (*(*eax_25 + 0xc))(eax_25, &var_30)
                                    void* edx_1 = var_30
                                    
                                    if (edx_1 != 0)
                                        int32_t i = 0
                                        
                                        if (0 u< *(edx_1 + 0x30))
                                            do
                                                int32_t* eax_26 = var_20
                                                int32_t var_48
                                                result = (*(*eax_26 + 0x24))(eax_26, i, &var_48)
                                                
                                                if (result s>= 0 && var_48 == 3)
                                                    int32_t* eax_29 = var_20
                                                    int32_t var_4c
                                                    result = (*(*eax_29 + 0x20))(eax_29, i, &var_4c)
                                                    
                                                    if (result s>= 0)
                                                        int32_t* eax_31 = var_20
                                                        int32_t var_60_10 = var_4c
                                                        var_24 = nullptr
                                                        result = (*(*eax_31 + 0x38))(eax_31, 
                                                            var_60_10, &var_24)
                                                        
                                                        if (result s>= 0)
                                                            int16_t* eax_33 = var_24
                                                            (*(*eax_33 + 0xc))(eax_33, &var_34)
                                                            char* eax_34 = var_34
                                                            
                                                            if (eax_34 != 0)
                                                                sub_5c49b0(_memcpy_s(arg3, 0x10, 
                                                                    eax_34, 0x10))
                                                                int16_t* eax_36 = var_24
                                                                (*(*eax_36 + 0x4c))(eax_36, var_34)
                                                        
                                                        int16_t* eax_37 = var_24
                                                        
                                                        if (eax_37 != 0)
                                                            (*(*eax_37 + 8))(eax_37)
                                                    
                                                    edx_1 = var_30
                                                    break
                                                
                                                edx_1 = var_30
                                                i += 1
                                            while (i s< zx.d(*(edx_1 + 0x30)))
                                        
                                        int32_t* eax_38 = var_20
                                        (*(*eax_38 + 0x4c))(eax_38, edx_1)
                        
                        int16_t* eax_39 = var_28
                        
                        if (eax_39 != 0)
                            (*(*eax_39 + 8))(eax_39)
                        
                        int32_t* eax_40 = var_20
                        
                        if (eax_40 != 0)
                            (*(*eax_40 + 8))(eax_40)
                    else
                        result = (*(*eax_17 + 0x10))(eax_17, 1, arg3)
                    
                    int32_t* eax_41 = var_3c
                    
                    if (eax_41 != 0)
                        (*(*eax_41 + 8))(eax_41)
            
            int32_t* eax_42 = var_2c
            
            if (eax_42 != 0)
                (*(*eax_42 + 8))(eax_42)
        
        int32_t* eax_43 = var_38
        
        if (eax_43 != 0)
            (*(*eax_43 + 8))(eax_43)
    
    int32_t* eax_44 = var_40
    
    if (eax_44 != 0)
        (*(*eax_44 + 8))(eax_44)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
