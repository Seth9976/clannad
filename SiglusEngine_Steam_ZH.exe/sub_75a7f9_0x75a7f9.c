// 函数: sub_75a7f9
// 地址: 0x75a7f9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int32_t var_8 = 0
int32_t (* ecx)()

if (data_b95a34 == 0)
    ecx = sub_579f60
else
    ecx = DecodePointer(data_4ecd21c)

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
                void* const var_28_14 = &data_aae48c
            label_75a98b:
                eax_21 = arg1
                esi_1 = arg3
                *esi_1 = fconvert.d(fconvert.t(*eax_21))
                goto label_75aa75
            case 1
                char const* const var_28_15 = "log10"
                goto label_75a98b
            case 2
                void* const var_28_16 = &data_aae484
                goto label_75a98b
            case 3
                char const* const var_28_17 = "atan"
                goto label_75a98b
            case 4
                char const* const var_28_18 = "ceil"
                goto label_75a98b
            case 5
                char const* const var_28_19 = "floor"
                goto label_75a98b
            case 6
            label_75a99a:
                void* const var_28_12 = &data_aae488
                goto label_75aa6a
            case 7
                char const* const var_28_20 = "modf"
                goto label_75a98b
            case 8
            label_75a978:
                char const* const var_28_10 = "acos"
                goto label_75aa6a
            case 9
            label_75a96c:
                char const* const var_28_9 = "asin"
            label_75aa6a:
                eax_21 = arg1
                esi_1 = arg3
            label_75aa75:
                double var_24_4 = fconvert.d(fconvert.t(*eax_21))
                double var_1c_4 = fconvert.d(fconvert.t(*arg2))
                x87_r7_10 = fconvert.t(*esi_1)
            case 0xa
                void* const var_28_21 = &data_aae4d8
            label_75aa38:
                esi_1 = arg3
                x87_r7_10 = fconvert.t(*arg1) * fconvert.t(var_c.q)
                *esi_1 = fconvert.d(x87_r7_10)
                double var_24_3 = fconvert.d(fconvert.t(*arg1))
                double var_1c_3 = fconvert.d(fconvert.t(*arg2))
            case 0xb
                void* const var_28_22 = &data_aae4dc
                goto label_75aa38
            case 0xc
                void* const var_28_23 = &data_aae4e0
                goto label_75aa38
            case 0xd
            label_75aa63:
                char const* const var_28_24 = "sqrt"
                goto label_75aa6a
        
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
label_75a892:
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
        label_75a888:
            void* const var_28_1 = &data_aae488
            goto label_75a892
        
        if (arg4 == 0x1c)
            goto label_75a99a
        
        if (arg4 == 0x1d)
            void* const var_28_11 = &data_aae488
            goto label_75a98b
        
        if (arg4 == 0x31)
            goto label_75aa63
        
        if (arg4 == 0x3a)
            goto label_75a978
        
        result = arg4 - 0x3d
        
        if (arg4 == 0x3d)
            goto label_75a96c
else if (arg4 == 0x19)
    void* const var_28_8 = &data_aae488
label_75a8d0:
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
            void* const var_28_7 = &data_aae48c
            goto label_75a892
        case 3
            void* const var_28_6 = &data_aae48c
            goto label_75aa6a
        case 8
            var_2c = 2
            char const* const var_28_5 = "log10"
            goto label_75a892
        case 9
            char const* const var_28_4 = "log10"
            goto label_75aa6a
        case 0xe
            var_2c = 3
            void* const var_28_3 = &data_aae484
            goto label_75a892
        case 0xf
            void* const var_28_2 = &data_aae484
            goto label_75a8d0
    
    result = arg4 - 0x18
    
    if (arg4 == 0x18)
        var_2c = 3
        goto label_75a888
return result
