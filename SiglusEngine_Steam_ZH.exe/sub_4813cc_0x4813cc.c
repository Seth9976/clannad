// 函数: sub_4813cc
// 地址: 0x4813cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg3 & 0xffffff3c) != 0)
    return 0x8876086c

int32_t* eax = arg5

if (eax == 0)
    return 0x8876086c

*eax = 0
j__free(arg1[0x16])
int32_t ecx = arg1[0x1e]

if (ecx != 0)
    sub_480197(ecx, 1)

data_b98078 = arg1
arg1[0xe] = 0xffffffff
*arg1 = arg2 + 0x18
int32_t edi
int32_t var_20_2 = edi
arg1[0xf] = arg3
arg1[1] = arg2
arg1[2] = 0
arg1[0xc] = 0
arg1[0xd] = 0
__builtin_memset(&arg1[0x13], 0, 0x2c)
int32_t var_8
sub_42bd4e(arg2, &var_8, nullptr)

if (var_8 == 0)
    sub_42bd7d(arg1[1], &arg1[0x1b], &arg1[0x1c])

void* result = sub_42bd0a(arg1[1], 2)

if (result s>= 0)
    sub_4801b8(arg1)
    void var_14
    
    if (arg1[4] == 9 && sub_46b27d(arg1[6], 1, &var_14) s>= 0)
        arg1[4] = 0
        int32_t var_10
        arg1[6] = var_10
    
    int32_t var_28_3
    char const* const var_24_3
    void* result_1
    
    if (arg1[4] == 0)
        if (arg1[6] == 0xfffe0100)
            sub_42ac7a(*arg1, &arg1[4], 0x7df, "vs_1_0 is no longer supported; using vs_1_1")
            arg1[6] = 0xfffe0101
        
        if (arg1[6] == 0xffff0100)
            sub_42ac7a(*arg1, &arg1[4], 0x7df, "ps_1_0 is no longer supported; using ps_1_1")
            arg1[6] = 0xffff0101
        
        if (arg1[6] == 0xffff0202)
            arg1[6] = 0xffff0201
        
        if ((arg3.b & 0x40) != 0 && (arg1[6] & 0xffff0000) == 0xfffe0000)
            arg1[0xf] |= 1
        else if ((arg3.b & 0x80) != 0 && (arg1[6] & 0xffff0000) == 0xffff0000)
            arg1[0xf] |= 1
        
        int32_t eax_9 = arg1[6]
        
        if (eax_9 u> 0xffff0102)
            switch (eax_9)
                case 0xffff0103
                    arg1[0xe] = 8
                case 0xffff0104
                    arg1[0xe] = 9
                case 0xffff0200
                    arg1[0xe] = 0xa
                case 0xffff0201
                    arg1[0xe] = 0xb
                case 0xffff02ff
                    arg1[0xe] = 0xc
                case 0xffff0300
                    arg1[0xe] = 0xd
                default
                    if (eax_9 != 0xffff03ff)
                    label_481637:
                        var_24_3 = "unrecognized shader version"
                        var_28_3 = 0x7d2
                        goto label_4814ca
                    
                    arg1[0xe] = 0xe
        else
            switch (eax_9)
                case 0xfffe0101
                    arg1[0xe] = 0
                case 0xfffe0200
                    arg1[0xe] = 1
                case 0xfffe0201
                    arg1[0xe] = 2
                case 0xfffe02ff
                    arg1[0xe] = 3
                case 0xfffe0300
                    arg1[0xe] = 4
                case 0xfffe03ff
                    arg1[0xe] = 5
                case 0xffff0102
                    arg1[0xe] = 7
                default
                    if (eax_9 != 0xffff0101)
                        goto label_481637
                    
                    arg1[0xe] = 6
        
        if (arg4 == 0)
        label_48171c:
            
            if ((arg1[0xf].b & 2) == 0)
                HMODULE hModule = GetModuleHandleA("d3d9.dll")
                
                if (hModule != 0)
                label_48173f:
                    int32_t eax_20 = GetProcAddress(hModule, "Direct3DShaderValidatorCreate9")
                    
                    if (eax_20 != 0)
                        int32_t* eax_21 = eax_20()
                        arg1[2] = eax_21
                        
                        if (eax_21 != 0)
                            result_1 = (*(*eax_21 + 0xc))(eax_21, sub_47e266, arg1, 0)
                            
                            if (result_1 s< 0)
                                goto label_481858
                else
                    hModule = LoadLibraryA("d3d9.dll")
                    
                    if (hModule != 0)
                        goto label_48173f
            
            result_1 = sub_47ee56(arg1, arg1[6])
            
            if (result_1 s< 0)
                goto label_481858
            
            result_1 = sub_47ed70(arg1, &arg1[4])
            
            if (result_1 s< 0)
                goto label_481858
            
            if (arg1[0x13] != 0)
                goto label_4814d2
            
            if (sub_480de5() != 0)
                arg1[0x13] = 1
            
            if (arg1[0x13] != 0)
                goto label_4814d2
            
            if (arg1[0x1b] != 0)
                sub_42bd7d(arg1[1], &arg3, nullptr)
                int32_t ecx_17 = arg1[0x1b]
                int32_t eax_27 = arg3
                
                if (ecx_17 u< eax_27 && arg1[0x1c] + ecx_17 u> eax_27)
                    arg1[0x1c] = eax_27 - ecx_17
            
            if (arg1[0x1e] != 0)
                result_1 = sub_47f6c2(arg1, arg1)
            
            if (arg1[0x1e] != 0 && result_1 s< 0)
                goto label_481858
            
            if ((arg1[0xf].b & 1) != 0)
                result_1 = sub_47f95a(arg1)
            
            if ((arg1[0xf].b & 1) != 0 && result_1 s< 0)
                goto label_481858
            
            result_1 = sub_47ee56(arg1, 0xffff)
            
            if (result_1 s< 0)
                goto label_481858
            
            result_1 = sub_47ed70(arg1, &arg1[4])
            
            if (result_1 s< 0)
                goto label_481858
            
            int32_t* eax_34 = arg1[2]
            
            if (eax_34 != 0)
                result_1 = (*(*eax_34 + 0x14))(eax_34)
            
            if (eax_34 != 0 && result_1 s< 0)
                goto label_481858
            
            if (sub_699170(*arg1) != 0)
                goto label_4814d2
            
            result_1 = sub_47fc80(arg1, arg5)
            
            if (result_1 s< 0)
                goto label_481858
            
            result_1 = nullptr
            goto label_481863
        
        arg1[0xf] |= 2
        arg1[0x1f] = arg4
        void* eax_11 = sub_745f3f(0xb8)
        void* const eax_12
        
        if (eax_11 == 0)
            eax_12 = nullptr
        else
            eax_12 = sub_47fd69(eax_11, arg1[0xe])
        
        arg1[0x1e] = eax_12
        
        if (eax_12 != 0)
            int32_t eax_13 = arg1[0xe]
            
            if (eax_13 s>= 0 && eax_13 s<= 5)
                arg1[6] = (zx.d(*(arg1 + 0x19)) | 0x7ffe00) << 8 | zx.d((arg1[6]).b)
            else if (eax_13 s< 0xa || eax_13 s> 0xe)
                sub_42aba3(*arg1, &arg1[4], 0x7d1, 
                    "only vs_1_1, vs_2_0, vs_2_x, vs_2_sw, ps_2_0, ps_2_x, and ps_2_sw are supported for "
                "assembly fragments")
            else
                arg1[6] = (zx.d(*(arg1 + 0x19)) | 0x7fff00) << 8 | zx.d((arg1[6]).b)
            
            goto label_48171c
        
        result = 0x8007000e
    else
        var_24_3 = "shader version expected"
        var_28_3 = 0x7d1
    label_4814ca:
        sub_42aba3(*arg1, &arg1[4], var_28_3, var_24_3)
    label_4814d2:
        result_1 = 0x88760b59
    label_481858:
        arg1[0x13] = 1
    label_481863:
        int32_t* eax_38 = arg1[2]
        
        if (eax_38 != 0)
            (*(*eax_38 + 8))(eax_38)
            arg1[2] = 0
        
        sub_42f202(arg1[1])
        result = result_1

return result
