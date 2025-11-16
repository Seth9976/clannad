// 函数: sub_5f8379
// 地址: 0x5f8379
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int32_t var_8 = 0
int32_t (* ecx)()

if (data_641874 == 0)
    ecx = sub_5ffc8b
else
    ecx = DecodePointer(data_20f34c4)

void* result
int32_t var_2c
double var_14_1
double* esi_1

if (arg4 s> 0xa6)
    result = arg4 - 0x3e8
    
    if (result u<= 0xd)
        double* eax_21
        long double x87_r7_10
        
        switch (result)
            case nullptr
                void* const var_28_14 = &data_607b70
            label_5f850b:
                eax_21 = arg1
                esi_1 = arg3
                *esi_1 = fconvert.d(fconvert.t(*eax_21))
                goto label_5f85f5
            case 1
                char const* const var_28_15 = "log10"
                goto label_5f850b
            case 2
                void* const var_28_16 = &data_607b7c
                goto label_5f850b
            case 3
                char const* const var_28_17 = "atan"
                goto label_5f850b
            case 4
                char const* const var_28_18 = "ceil"
                goto label_5f850b
            case 5
                char const* const var_28_19 = "floor"
                goto label_5f850b
            case 6
            label_5f851a:
                void* const var_28_12 = &data_607b80
                goto label_5f85ea
            case 7
                char const* const var_28_20 = "modf"
                goto label_5f850b
            case 8
            label_5f84f8:
                char const* const var_28_10 = "acos"
                goto label_5f85ea
            case 9
            label_5f84ec:
                char const* const var_28_9 = "asin"
            label_5f85ea:
                eax_21 = arg1
                esi_1 = arg3
            label_5f85f5:
                double var_24_4 = fconvert.d(fconvert.t(*eax_21))
                double var_1c_4 = fconvert.d(fconvert.t(*arg2))
                x87_r7_10 = fconvert.t(*esi_1)
            case 0xa
                void* const var_28_21 = &data_607bbc
            label_5f85b8:
                esi_1 = arg3
                x87_r7_10 = fconvert.t(*arg1) * fconvert.t(var_c.q)
                *esi_1 = fconvert.d(x87_r7_10)
                double var_24_3 = fconvert.d(fconvert.t(*arg1))
                double var_1c_3 = fconvert.d(fconvert.t(*arg2))
            case 0xb
                void* const var_28_22 = &data_607bc0
                goto label_5f85b8
            case 0xc
                void* const var_28_23 = &data_607bc4
                goto label_5f85b8
            case 0xd
            label_5f85e3:
                char const* const var_28_24 = "sqrt"
                goto label_5f85ea
        
        var_2c = 1
        var_14_1 = fconvert.d(x87_r7_10)
        result = ecx(&var_2c)
        
        if (result == 0)
            result = __errno()
            *result = 0x21
        
        *esi_1 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 == 0xa6)
    var_2c = 3
    char const* const var_28_13 = "exp10"
label_5f8412:
    esi_1 = arg3
    double var_24_1 = fconvert.d(fconvert.t(*arg1))
    double var_1c_1 = fconvert.d(fconvert.t(*arg2))
    var_14_1 = fconvert.d(fconvert.t(*esi_1))
    result = ecx(&var_2c)
    
    if (result == 0)
        result = __errno()
        *result = 0x22
    
    *esi_1 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 s> 0x19)
    if (arg4 == 0x1a)
        result = arg3
        *result = fconvert.d(float.t(1))
    else
        if (arg4 == 0x1b)
            var_2c = 2
        label_5f8408:
            void* const var_28_1 = &data_607b80
            goto label_5f8412
        
        if (arg4 == 0x1c)
            goto label_5f851a
        
        if (arg4 == 0x1d)
            void* const var_28_11 = &data_607b80
            goto label_5f850b
        
        if (arg4 == 0x31)
            goto label_5f85e3
        
        if (arg4 == 0x3a)
            goto label_5f84f8
        
        result = arg4 - 0x3d
        
        if (arg4 == 0x3d)
            goto label_5f84ec
else if (arg4 == 0x19)
    void* const var_28_8 = &data_607b80
label_5f8450:
    esi_1 = arg3
    var_2c = 4
    double var_24_2 = fconvert.d(fconvert.t(*arg1))
    double var_1c_2 = fconvert.d(fconvert.t(*arg2))
    var_14_1 = fconvert.d(fconvert.t(*esi_1))
    result = ecx(&var_2c)
    *esi_1 = fconvert.d(fconvert.t(var_14_1))
else
    switch (arg4)
        case 2
            var_2c = 2
            void* const var_28_7 = &data_607b70
            goto label_5f8412
        case 3
            void* const var_28_6 = &data_607b70
            goto label_5f85ea
        case 8
            var_2c = 2
            char const* const var_28_5 = "log10"
            goto label_5f8412
        case 9
            char const* const var_28_4 = "log10"
            goto label_5f85ea
        case 0xe
            var_2c = 3
            void* const var_28_3 = &data_607b7c
            goto label_5f8412
        case 0xf
            void* const var_28_2 = &data_607b7c
            goto label_5f8450
    
    result = arg4 - 0x18
    
    if (arg4 == 0x18)
        var_2c = 3
        goto label_5f8408
return result
