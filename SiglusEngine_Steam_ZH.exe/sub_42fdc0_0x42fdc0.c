// 函数: sub_42fdc0
// 地址: 0x42fdc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const i = arg4
int32_t eax = *(i + 4)
void* var_14 = arg1
int32_t var_c = 0
int32_t var_8 = 5
int32_t var_10 = 0
int32_t result
int32_t* arg_8
int32_t arg_10
int32_t** arg_1c

if (eax == 1)
    result = sub_42f442(arg6, &var_c, 4, arg_1c)
    
    if (result s>= 0)
        result = sub_42f442(arg6, &var_8, 4, nullptr)
        
        if (result s>= 0)
            arg_1c = nullptr
            arg4 = i
            
            do
                i = *(i + 0xc)
                arg_1c += 1
            while (i != 0)
            
            int32_t* eax_16 = arg_8
            
            if (eax_16 == 0 || arg7 == 0)
                result = sub_42f442(arg6, &var_10, 4, nullptr)
            label_43011f:
                
                if (result s>= 0)
                    if (arg5 == 0 || arg7 == 0)
                        result = sub_42f442(arg6, &var_10, 4, nullptr)
                    label_430153:
                        
                        if (result s>= 0)
                            result = sub_42f442(arg6, &arg_10, 4, nullptr)
                            
                            if (result s>= 0)
                                result = sub_42f442(arg6, &arg_1c, 4, nullptr)
                                
                                if (result s>= 0)
                                    void* const ebx_1 = arg4
                                    
                                    while (true)
                                        if (ebx_1 == 0)
                                            return result
                                        
                                        if (*(ebx_1 + 4) != 1)
                                            return 0x80004005
                                        
                                        void* eax_17 = *(ebx_1 + 8)
                                        
                                        if (eax_17 == 0)
                                            return 0x80004005
                                        
                                        if (*(eax_17 + 4) != 6)
                                            return 0x80004005
                                        
                                        void* ecx_23 = *(eax_17 + 0x14)
                                        
                                        if (ecx_23 == 0)
                                            return 0x80004005
                                        
                                        if (*(ecx_23 + 4) != 3)
                                            return 0x80004005
                                        
                                        if (*(ecx_23 + 0x10) != 9)
                                            return 0x80004005
                                        
                                        if (*(ecx_23 + 0x18) == 0)
                                            return 0x80004005
                                        
                                        if (*(eax_17 + 0x10) != 1)
                                            return 0x80004005
                                        
                                        void* eax_18 = *(eax_17 + 0x18)
                                        
                                        if (eax_18 == 0)
                                            return 0x80004005
                                        
                                        if (*(eax_18 + 4) != 0xb)
                                            return 0x80004005
                                        
                                        int32_t edx_3 = *(eax_18 + 0x20)
                                        
                                        if (edx_3 == 0)
                                            return 0x80004005
                                        
                                        void* eax_19 = *(eax_18 + 0x2c)
                                        int32_t ecx_24 = 0
                                        
                                        if (eax_19 != 0)
                                            if (*(eax_19 + 4) != 3)
                                                return 0x80004005
                                            
                                            if (*(eax_19 + 0x10) != 9)
                                                return 0x80004005
                                            
                                            ecx_24 = *(eax_19 + 0x18)
                                        
                                        result = sub_42fdc0(edx_3, ecx_23 + 0x10, ecx_24, 0, arg6, 
                                            arg7, 0, 1)
                                        
                                        if (result s< 0)
                                            return result
                                        
                                        ebx_1 = *(ebx_1 + 0xc)
                    else
                        result = sub_42f4f9(arg7, arg5, &arg_8)
                        
                        if (result s>= 0)
                            result = sub_42f54b(arg6, arg_8, nullptr)
                            goto label_430153
            else
                result = sub_42f4f9(arg7, eax_16[2], &arg_8)
                
                if (result s>= 0)
                    result = sub_42f54b(arg6, arg_8, nullptr)
                    goto label_43011f
else
    if (eax == 8)
        int32_t ecx_11 = arg_10
        
        if (ecx_11 == 0)
            ecx_11 = 1
        
        return sub_42fdc0(*(i + 0x10), arg_8, arg5, *(i + 0x14) * ecx_11, arg6, arg7, arg_1c, 0)
    
    if (eax != 9)
        return 0x80004005
    
    int32_t eax_4 = *(i + 0x10)
    int32_t arg_20
    
    if (eax_4 == 0)
        arg_20 = 0
        var_8 = 1
        var_c = 1
    else
        int32_t eax_10
        
        if (eax_4 == 1)
            var_8 = *(i + 0x1c)
            eax_10 = *(i + 0x18)
            arg_20 = 1
            var_c = eax_10
        else if (eax_4 == 2)
            var_8 = *(i + 0x18)
            eax_10 = *(i + 0x1c)
            arg_20 = 2
            var_c = eax_10
        else
            if (eax_4 != 3)
                return 0x80004005
            
            if (arg_20 != 0)
                sub_42aba3(arg1 + 0x28, arg_8, 0, 
                    "ID3DXEffectCompiler: Only numeric types are allowed inside structures")
                return 0x80004005
            
            arg_20 = 4
            var_8 = 0
            var_c = 0
    
    int32_t esi = *(i + 0x14)
    
    if (esi u> 0x1d)
        return 0x80004005
    
    switch (esi)
        case 0
            arg4 = 1
        case 1, 2, 3, 4, 5, 6, 7, 8, 0xd
            arg4 = 2
        case 9, 0xa, 0xb, 0xc
            arg4 = 3
        case 0xe
            arg4 = 4
        case 0xf
            arg4 = 5
        label_43002e:
            
            if (arg_10 u> 0)
                sub_42aba3(arg1 + 0x28, arg_8, 0, 
                    "ID3DXEffectCompiler: Arrays must be either numeric, structure, string or shader")
                return 0x80004005
        case 0x10
            arg4 = 6
            goto label_43002e
        case 0x11
            arg4 = 7
            goto label_43002e
        case 0x12
            arg4 = 8
            goto label_43002e
        case 0x13
            arg4 = 9
            goto label_43002e
        case 0x14
            arg4 = 0xa
        case 0x15
            arg4 = 0xb
        case 0x16
            arg4 = 0xc
        case 0x17
            arg4 = 0xd
        case 0x18
            arg4 = 0xe
        case 0x19
            arg4 = 0xf
        case 0x1a
            arg4 = 0x10
        case 0x1b
            arg4 = 0x11
            goto label_43002e
        case 0x1c
            arg4 = 0x12
            goto label_43002e
        case 0x1d
            arg4 = &data_f30000
            goto label_43002e
    
    result = sub_42f442(arg6, &arg4, 4, arg_1c)
    
    if (result s>= 0)
        result = sub_42f442(arg6, &arg_20, 4, nullptr)
        
        if (result s>= 0)
            int32_t* eax_12 = arg_8
            
            if (eax_12 == 0 || arg7 == 0)
                result = sub_42f442(arg6, &var_10, 4, nullptr)
            label_42fede:
                
                if (result s>= 0)
                    if (arg5 == 0 || arg7 == 0)
                        int32_t* var_2c_8 = &var_10
                        int32_t __saved_ebp
                        int32_t entry_ebx
                        return sub_430074(&__saved_ebp, arg6, nullptr, 4, nullptr, arg3, arg2, 
                            entry_ebx) __tailcall
                    
                    result = sub_42f4f9(arg7, arg5, &arg_8)
                    
                    if (result s>= 0)
                        result = sub_42f54b(arg6, arg_8, nullptr)
                        
                        if (result s>= 0)
                            result = sub_42f442(arg6, &arg_10, 4, nullptr)
                            
                            if (result s>= 0 && arg4 s> 0 && arg4 s<= 3)
                                result = sub_42f442(arg6, &var_8, 4, nullptr)
                                
                                if (result s>= 0)
                                    return sub_42f442(arg6, &var_c, 4, nullptr)
            else
                result = sub_42f4f9(arg7, eax_12[2], &arg_8)
                
                if (result s>= 0)
                    result = sub_42f54b(arg6, arg_8, nullptr)
                    goto label_42fede
return result
